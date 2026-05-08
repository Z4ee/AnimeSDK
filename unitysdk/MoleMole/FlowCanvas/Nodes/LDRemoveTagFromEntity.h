#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVETAGFROMENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x14997690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVETAGFROMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x14997840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveTagFromEntity_TypeDefinitionIndex = 42454;

	class LDRemoveTagFromEntity : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::EntityHandle, ::MoleMole::GameplayTag>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVETAGFROMENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle entity, ::MoleMole::GameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVETAGFROMENTITY_INVOKE_OFFSET))(this, entity, tag);
		}
	};
}
