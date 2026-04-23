#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_METHOD_3_3467519CE0F98407_OFFSET UNITYSDK_OFFSET(0x187E8010)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_METHOD_3_82F794E37359EC96_OFFSET UNITYSDK_OFFSET(0x187E80B0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x187E80A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_LeftAnimTime_TypeDefinitionIndex = 14970;

	class ChenLingBattleValueGetter_LeftAnimTime : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3467519CE0F98407(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_METHOD_3_3467519CE0F98407_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_82F794E37359EC96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_METHOD_3_82F794E37359EC96_OFFSET))(a1, a2);
		}
	};
}
