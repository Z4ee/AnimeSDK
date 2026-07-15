#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_2C594AE0A6BCDF01_OFFSET UNITYSDK_OFFSET(0x1A8C1720)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_B1D2B36CCD15BCF5_OFFSET UNITYSDK_OFFSET(0x1A8C18D0)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_D6C40DE65DEEA54A_OFFSET UNITYSDK_OFFSET(0x1A8C1760)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_E497AFC5DB920274_OFFSET UNITYSDK_OFFSET(0x1A8C18A0)
#define RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C1750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByFromBattleViewModeChange_TypeDefinitionIndex = 21612;

	class ByFromBattleViewModeChange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2C594AE0A6BCDF01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFromBattleViewModeChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFromBattleViewModeChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_2C594AE0A6BCDF01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D6C40DE65DEEA54A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_D6C40DE65DEEA54A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E497AFC5DB920274(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_E497AFC5DB920274_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B1D2B36CCD15BCF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFROMBATTLEVIEWMODECHANGE_METHOD_4_B1D2B36CCD15BCF5_OFFSET))(a1, a2);
		}
	};
}
