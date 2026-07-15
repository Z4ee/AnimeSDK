#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_ENTITYMODELDISPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0xFC021A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityModelDispose_TypeDefinitionIndex = 54638;

	class EntityModelDispose : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::UnityEngine::GameObject* UnityGo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMODELDISPOSE__CTOR_OFFSET))(this);
		}
	};
}
