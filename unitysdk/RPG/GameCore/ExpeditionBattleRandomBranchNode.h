#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionBattleRandomBranchCase; }

#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_METHOD_3_93C997769C6F51D9_OFFSET UNITYSDK_OFFSET(0x1D7DCAD0)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_METHOD_3_9D82CF9C5D9DC511_OFFSET UNITYSDK_OFFSET(0x1D7DCA70)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DCAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleRandomBranchNode_TypeDefinitionIndex = 16029;

	class ExpeditionBattleRandomBranchNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ExpeditionBattleRandomBranchCase*>* Branches; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D82CF9C5D9DC511(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleRandomBranchNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleRandomBranchNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_METHOD_3_9D82CF9C5D9DC511_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93C997769C6F51D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleRandomBranchNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleRandomBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_METHOD_3_93C997769C6F51D9_OFFSET))(a1, a2);
		}
	};
}
