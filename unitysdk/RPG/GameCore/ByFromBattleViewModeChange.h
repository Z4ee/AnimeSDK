#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_A2E3CBF6A5DAB479_OFFSET UNITYSDK_OFFSET(0x19549990)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_A82066871243E6A0_OFFSET UNITYSDK_OFFSET(0x19549700)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_B91A824466921D65_OFFSET UNITYSDK_OFFSET(0x19549910)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_D6C40DE65DEEA54A_OFFSET UNITYSDK_OFFSET(0x195497D0)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19549780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByFromBattleViewModeChange_TypeDefinitionIndex = 21197;

	class ByFromBattleViewModeChange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A82066871243E6A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFromBattleViewModeChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFromBattleViewModeChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_A82066871243E6A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D6C40DE65DEEA54A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_D6C40DE65DEEA54A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B91A824466921D65(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_B91A824466921D65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2E3CBF6A5DAB479(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_A2E3CBF6A5DAB479_OFFSET))(a1, a2);
		}
	};
}
