#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG_METHOD_2_CB3AA1F9B443B854_OFFSET UNITYSDK_OFFSET(0x187E0160)
#define RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187E07A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAirMotionConfig_TypeDefinitionIndex = 14910;

	class ChenLingBattleAirMotionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x10
		::RPG::GameCore::FixPoint VerticalHeight; // 0x18
		::RPG::GameCore::FixPoint HorizontalSpeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB3AA1F9B443B854(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAirMotionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAirMotionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG_METHOD_2_CB3AA1F9B443B854_OFFSET))(a1, a2);
		}
	};
}
