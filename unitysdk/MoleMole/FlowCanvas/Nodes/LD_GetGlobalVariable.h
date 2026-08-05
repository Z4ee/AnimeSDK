#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETGLOBALVARIABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x107D68D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETGLOBALVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x107D6B60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetGlobalVariable_TypeDefinitionIndex = 87583;

	class LD_GetGlobalVariable : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETGLOBALVARIABLE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::String* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETGLOBALVARIABLE_INVOKE_OFFSET))(this, key);
		}
	};
}
