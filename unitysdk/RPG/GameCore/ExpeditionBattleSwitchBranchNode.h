#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchConditionKey.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionBattleBranchCase; }

#define RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_METHOD_3_0AE0145C9F2CB62A_OFFSET UNITYSDK_OFFSET(0x1D082DB0)
#define RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_METHOD_3_1B648B65AE15574B_OFFSET UNITYSDK_OFFSET(0x1D082D50)
#define RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D082DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleSwitchBranchNode_TypeDefinitionIndex = 16027;

	class ExpeditionBattleSwitchBranchNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::RPG::GameCore::ExpeditionBattleBranchConditionKey ConditionKey; // 0x10
		::Il2CppArray<::RPG::GameCore::ExpeditionBattleBranchCase*>* Cases; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B648B65AE15574B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_METHOD_3_1B648B65AE15574B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AE0145C9F2CB62A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_METHOD_3_0AE0145C9F2CB62A_OFFSET))(a1, a2);
		}
	};
}
