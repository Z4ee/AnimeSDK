#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_256F1E23C9DDAA7F_OFFSET UNITYSDK_OFFSET(0x1951EA00)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_70F3AE3267225F8F_OFFSET UNITYSDK_OFFSET(0x1951EA80)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_852EDC28F80B8366_OFFSET UNITYSDK_OFFSET(0x1951E7C0)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_9FAC217C9534A2E4_OFFSET UNITYSDK_OFFSET(0x1951E890)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1951E840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMissionBattleWin_TypeDefinitionIndex = 20362;

	class ByCompareMissionBattleWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 EventID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_852EDC28F80B8366(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionBattleWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionBattleWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_852EDC28F80B8366_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FAC217C9534A2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_9FAC217C9534A2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_256F1E23C9DDAA7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_256F1E23C9DDAA7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_70F3AE3267225F8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_METHOD_4_70F3AE3267225F8F_OFFSET))(a1, a2);
		}
	};
}
