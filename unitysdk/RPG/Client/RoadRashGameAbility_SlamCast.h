#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_METHOD_4_1822A26C1A12F9DE_OFFSET UNITYSDK_OFFSET(0x1D317860)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_METHOD_4_39EC3C026D5C72BD_OFFSET UNITYSDK_OFFSET(0x1D3178A0)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D317890)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_SlamCast_TypeDefinitionIndex = 10279;

	class RoadRashGameAbility_SlamCast : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint RequireCastTime; // 0x18
		::System::String* LV3ToggleName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1822A26C1A12F9DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_SlamCast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_SlamCast*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_METHOD_4_1822A26C1A12F9DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_39EC3C026D5C72BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_SlamCast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_SlamCast*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAMCAST_METHOD_4_39EC3C026D5C72BD_OFFSET))(a1, a2);
		}
	};
}
