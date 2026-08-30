#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DarkTeamFightFormationParams; }
namespace System { class String; }

#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG_METHOD_2_B006A32020AA3A3C_OFFSET UNITYSDK_OFFSET(0x1D80EA20)
#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80EDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DarkTeamFightFormationConfig_TypeDefinitionIndex = 16405;

	class DarkTeamFightFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DarkTeamFightFormationParams* DefaultConfig; // 0x10
		::System::Int32 MaxLocationCount; // 0x18
		::System::Single RowZOffset; // 0x1C
		::System::Single MultiRowGlobalWidthRatio; // 0x20
		::System::Single ReadyStateBackRowOffsetRatio; // 0x24
		::System::Single MultiRowComfortZoneWidth; // 0x28
		::System::Single MultiRowZOffsetApplyRatio; // 0x2C
		::System::Single MultiRowFrontRowDitherDuration; // 0x30
		::System::Single BackRowHightlightWidthRaido; // 0x34
		::System::String* BackRowHightlightColor; // 0x38
		::System::String* BackRowHightlightColor2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B006A32020AA3A3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DarkTeamFightFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DarkTeamFightFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG_METHOD_2_B006A32020AA3A3C_OFFSET))(a1, a2);
		}
	};
}
