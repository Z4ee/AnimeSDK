#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"
#include "unitysdk/MoleMole/GameplayTag.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLENAVMESHLINK_INVOKE_OFFSET UNITYSDK_OFFSET(0x184158F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLENAVMESHLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x18415B50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnableNavmeshLink_TypeDefinitionIndex = 62423;

	class LDEnableNavmeshLink : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::GameplayTag, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLENAVMESHLINK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::GameplayTag targetTag, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLENAVMESHLINK_INVOKE_OFFSET))(this, targetTag, value);
		}
	};
}
