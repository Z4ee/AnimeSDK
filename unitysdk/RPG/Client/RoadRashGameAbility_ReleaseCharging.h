#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_METHOD_4_88F70B2965FE190F_OFFSET UNITYSDK_OFFSET(0x1D315B70)
#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_METHOD_4_B7456B408E46A29A_OFFSET UNITYSDK_OFFSET(0x1D315BB0)
#define RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D315BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_ReleaseCharging_TypeDefinitionIndex = 10272;

	class RoadRashGameAbility_ReleaseCharging : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::Il2CppArray<::RPG::Client::RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig*>* AdditiveConfigs; // 0x18
		::System::String* FullChargeValueToggleName; // 0x20
		::Il2CppArray<::RPG::Client::RoadRashGameAbility_ReleaseCharging_AdditiveSpeedConfig*>* FullAdditiveConfigs; // 0x28
		::System::String* RotateCurveName; // 0x30
		::System::String* RotateDurationMappingCurveName; // 0x38
		::RPG::GameCore::FixPoint RotateDuration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_88F70B2965FE190F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_METHOD_4_88F70B2965FE190F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B7456B408E46A29A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_RELEASECHARGING_METHOD_4_B7456B408E46A29A_OFFSET))(a1, a2);
		}
	};
}
