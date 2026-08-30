#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_METHOD_4_2241096F1F1A702C_OFFSET UNITYSDK_OFFSET(0x1D31CBE0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_METHOD_4_E4722ABFE69D616B_OFFSET UNITYSDK_OFFSET(0x1D31CB90)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31CBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_SpeedBoost_TypeDefinitionIndex = 10296;

	class RoadRashGameModifier_SpeedBoost : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* MaxSpeedModifiers; // 0x20
		::System::Boolean SyncCurrentSpeedToMax; // 0x28
		::System::Boolean UseReleaseChargeSpeedEffect; // 0x29
		::System::Boolean FireReleaseChargeEffect; // 0x2A
		::RPG::GameCore::FixPoint FOV; // 0x30
		::System::String* FOVBlendInCurveName; // 0x38
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0x40
		::System::String* FOVBlendOutCurveName; // 0x48
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0x50
		::RPG::GameCore::FixPoint BlurRadius; // 0x58
		::RPG::GameCore::FixPoint BlurStart; // 0x60
		::RPG::GameCore::FixPoint BlurFeather; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E4722ABFE69D616B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_SpeedBoost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_SpeedBoost*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_METHOD_4_E4722ABFE69D616B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2241096F1F1A702C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_SpeedBoost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_SpeedBoost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SPEEDBOOST_METHOD_4_2241096F1F1A702C_OFFSET))(a1, a2);
		}
	};
}
