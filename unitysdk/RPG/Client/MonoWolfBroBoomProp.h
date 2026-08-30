#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }

#define RPG_CLIENT_MONOWOLFBROBOOMPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29A0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoWolfBroBoomProp_TypeDefinitionIndex = 68684;

	class MonoWolfBroBoomProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x18
		::System::Boolean AttackDetectCollision; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBOOMPROP__CTOR_OFFSET))(this);
		}
	};
}
