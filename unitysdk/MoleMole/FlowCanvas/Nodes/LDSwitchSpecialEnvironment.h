#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A42C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A42FB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchSpecialEnvironment_TypeDefinitionIndex = 74792;

	class LDSwitchSpecialEnvironment : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* specialEnvKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT_INVOKE_OFFSET))(this, specialEnvKey);
		}
	};
}
