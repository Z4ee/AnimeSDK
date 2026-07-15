#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONTEXTCONFIG_METHOD_2_6F19273377D731CD_OFFSET UNITYSDK_OFFSET(0x1BD0C1A0)
#define RPG_GAMECORE_MAPROTATIONTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD0C410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationTextConfig_TypeDefinitionIndex = 16352;

	class MapRotationTextConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PoseSwitchBanMazeSkillTextID; // 0x10
		::System::String* PoseSwitchBanMazeAttackTextID; // 0x18
		::System::String* EnergyOutText; // 0x20
		::System::String* EnergyGainText; // 0x28
		::System::String* EnergyFillText; // 0x30
		::System::String* NotInVolumeText; // 0x38
		::System::String* RemovePoseSwitcherText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONTEXTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6F19273377D731CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationTextConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationTextConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONTEXTCONFIG_METHOD_2_6F19273377D731CD_OFFSET))(a1, a2);
		}
	};
}
