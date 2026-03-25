#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_OPERATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16850E40)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int OperationConfig_TypeDefinitionIndex = 32793;

	class OperationConfig : public ::System::Object
	{
	public:
		::System::Single HitPropSP; // 0x10
		::System::Single HitPropScore; // 0x14
		::System::Single HitEnemySP; // 0x18
		::System::Single HitEnemyScore; // 0x1C
		::System::Single ImpactEnemySP; // 0x20
		::System::Single ImpactEnemyScore; // 0x24
		::System::Single NicePassScore; // 0x28
		::System::Single FeverTimeScore; // 0x2C
		::System::Single LevelTargetScore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_OPERATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
