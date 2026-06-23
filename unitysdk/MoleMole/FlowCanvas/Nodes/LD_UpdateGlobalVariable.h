#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATEGLOBALVARIABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19127AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATEGLOBALVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19127D60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_UpdateGlobalVariable_TypeDefinitionIndex = 45282;

	class LD_UpdateGlobalVariable : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::String*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATEGLOBALVARIABLE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATEGLOBALVARIABLE_INVOKE_OFFSET))(this, key, value);
		}
	};
}
