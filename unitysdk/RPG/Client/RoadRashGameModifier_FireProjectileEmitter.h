#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_METHOD_4_375D271BF1D4D9CC_OFFSET UNITYSDK_OFFSET(0x1D319CC0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_METHOD_4_CA3BF3FDE6DA325F_OFFSET UNITYSDK_OFFSET(0x1D315820)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D319CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_FireProjectileEmitter_TypeDefinitionIndex = 10275;

	class RoadRashGameModifier_FireProjectileEmitter : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint FireInterval; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA3BF3FDE6DA325F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_METHOD_4_CA3BF3FDE6DA325F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_375D271BF1D4D9CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FIREPROJECTILEEMITTER_METHOD_4_375D271BF1D4D9CC_OFFSET))(a1, a2);
		}
	};
}
