#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_METHOD_3_5E34D48DE87551DD_OFFSET UNITYSDK_OFFSET(0x1EE840B0)
#define RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_METHOD_3_BEA0C8952DA1084B_OFFSET UNITYSDK_OFFSET(0x1EE84050)
#define RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE840A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameModifierConfig_TypeDefinitionIndex = 16813;

	class RoadRashGameModifierConfig : public ::RPG::GameCore::LittleGameAbilityConfig
	{
	public:
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BEA0C8952DA1084B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoadRashGameModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoadRashGameModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_METHOD_3_BEA0C8952DA1084B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E34D48DE87551DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoadRashGameModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoadRashGameModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_METHOD_3_5E34D48DE87551DD_OFFSET))(a1, a2);
		}
	};
}
