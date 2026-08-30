#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_1C98C7693F04ADDD_OFFSET UNITYSDK_OFFSET(0x1CEE4C20)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_52C5218C0265DA11_OFFSET UNITYSDK_OFFSET(0x1CEE4E00)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_53ABD16D7F9A840E_OFFSET UNITYSDK_OFFSET(0x1CEE4DD0)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_9FAC217C9534A2E4_OFFSET UNITYSDK_OFFSET(0x1CEE4C60)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE4C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMissionBattleWin_TypeDefinitionIndex = 21333;

	class ByCompareMissionBattleWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 EventID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1C98C7693F04ADDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionBattleWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionBattleWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_1C98C7693F04ADDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FAC217C9534A2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_9FAC217C9534A2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53ABD16D7F9A840E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_53ABD16D7F9A840E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_52C5218C0265DA11(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_52C5218C0265DA11_OFFSET))(a1, a2);
		}
	};
}
