#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_FC_STRINGTOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x177FC170)
#define MOLEMOLE_FLOWCANVAS_FC_STRINGTOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x177FC220)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int FC_StringToInt_TypeDefinitionIndex = 40334;

	class FC_StringToInt : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::System::Int32, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_STRINGTOINT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::String* a)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_STRINGTOINT_INVOKE_OFFSET))(this, a);
		}
	};
}
