#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace BehaviorDesigner::Runtime::Tasks { class SubTreeBehaviorReference; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSUBTREELOADDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E4020)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_BehaviorSubTreeLoadData_TypeDefinitionIndex = 33222;

	class BehaviorManager_BehaviorSubTreeLoadData : public ::System::Object
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::SubTreeBehaviorReference* subTreeLinkNode; // 0x10
		::BehaviorDesigner::Runtime::Behavior* parentBehavior; // 0x18
		::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* parentBehaviorGameObjectGetter; // 0x20
		::UnityEngine::GameObject* parentBehaviorGameObject; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSUBTREELOADDATA__CTOR_OFFSET))(this);
		}
	};
}
