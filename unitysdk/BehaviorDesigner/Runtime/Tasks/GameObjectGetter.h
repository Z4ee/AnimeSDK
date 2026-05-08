#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_GAMEOBJECTGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B428880)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int GameObjectGetter_TypeDefinitionIndex = 31828;

	class GameObjectGetter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_GAMEOBJECTGETTER__CTOR_OFFSET))(this);
		}
	};
}
