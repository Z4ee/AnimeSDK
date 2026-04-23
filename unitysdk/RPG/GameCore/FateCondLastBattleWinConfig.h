#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_6_D2EB1E671CE2E420_OFFSET UNITYSDK_OFFSET(0x188D1D20)
#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_6_D44ED8659FF99D84_OFFSET UNITYSDK_OFFSET(0x188D1EE0)
#define RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D1E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondLastBattleWinConfig_TypeDefinitionIndex = 18289;

	class FateCondLastBattleWinConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D2EB1E671CE2E420(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLastBattleWinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLastBattleWinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_6_D2EB1E671CE2E420_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D44ED8659FF99D84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLastBattleWinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLastBattleWinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLASTBATTLEWINCONFIG_METHOD_6_D44ED8659FF99D84_OFFSET))(a1, a2);
		}
	};
}
