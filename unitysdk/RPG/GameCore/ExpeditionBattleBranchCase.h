#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchComparer.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }

#define RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE_METHOD_2_44FF08DF91B74BF0_OFFSET UNITYSDK_OFFSET(0x1D080310)
#define RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0804E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleBranchCase_TypeDefinitionIndex = 16028;

	class ExpeditionBattleBranchCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint CaseValue; // 0x10
		::RPG::GameCore::ExpeditionBattleBranchComparer Comparer; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_44FF08DF91B74BF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleBranchCase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleBranchCase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBRANCHCASE_METHOD_2_44FF08DF91B74BF0_OFFSET))(a1, a2);
		}
	};
}
