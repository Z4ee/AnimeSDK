#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_METHOD_4_7784E2E46E5E0F19_OFFSET UNITYSDK_OFFSET(0x1CD5C700)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_METHOD_4_DE68244C4123896C_OFFSET UNITYSDK_OFFSET(0x1CD5C760)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5C740)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_Decelerate_TypeDefinitionIndex = 10297;

	class RoadRashGameModifier_Decelerate : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18
		::RPG::GameCore::FixPoint MaxSpeedMultiplier; // 0x20
		::RPG::GameCore::FixPoint Priority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7784E2E46E5E0F19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_Decelerate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_Decelerate*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_METHOD_4_7784E2E46E5E0F19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE68244C4123896C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_Decelerate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_Decelerate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_METHOD_4_DE68244C4123896C_OFFSET))(a1, a2);
		}
	};
}
