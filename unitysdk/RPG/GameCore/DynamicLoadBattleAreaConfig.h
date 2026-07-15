#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicLoadBlockDataList.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelBattleAreaInfo; }

#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_2733813B69AC3A08_OFFSET UNITYSDK_OFFSET(0x1BB2A720)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_666C35EC8A6ED57E_OFFSET UNITYSDK_OFFSET(0x1BB2A6A0)
#define RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2A700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicLoadBattleAreaConfig_TypeDefinitionIndex = 18412;

	class DynamicLoadBattleAreaConfig : public ::RPG::GameCore::DynamicLoadBlockDataList
	{
	public:
		::RPG::GameCore::LevelBattleAreaInfo* BattleAreaInfo; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_666C35EC8A6ED57E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_666C35EC8A6ED57E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2733813B69AC3A08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBattleAreaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBattleAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBATTLEAREACONFIG_METHOD_3_2733813B69AC3A08_OFFSET))(a1, a2);
		}
	};
}
