#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_METHOD_3_3A40C8116FC49C2B_OFFSET UNITYSDK_OFFSET(0x1D1FD2F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_METHOD_3_9B873C1FCC66B1DF_OFFSET UNITYSDK_OFFSET(0x1D1FD1F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FD2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersExcelValueGetterConfig_TypeDefinitionIndex = 21174;

	class LittleGameAbilityTeamTowersExcelValueGetterConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::System::Int32 ParamIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B873C1FCC66B1DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_METHOD_3_9B873C1FCC66B1DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A40C8116FC49C2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_METHOD_3_3A40C8116FC49C2B_OFFSET))(a1, a2);
		}
	};
}
