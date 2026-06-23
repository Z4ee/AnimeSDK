#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BAC0C0)
#define MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAC150)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int FC_StringToFloat_TypeDefinitionIndex = 51799;

	class FC_StringToFloat : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* a)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_STRINGTOFLOAT_INVOKE_OFFSET))(this, a);
		}
	};
}
