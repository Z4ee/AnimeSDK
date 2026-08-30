#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_METHOD_3_2B819C845B1C5B40_OFFSET UNITYSDK_OFFSET(0x1D7DAC00)
#define RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_METHOD_3_34F49882494167CC_OFFSET UNITYSDK_OFFSET(0x1D7DACD0)
#define RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DACC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleActionNode_TypeDefinitionIndex = 16026;

	class ExpeditionBattleActionNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::RPG::GameCore::BaseExpeditionBattleAction* Action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B819C845B1C5B40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleActionNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleActionNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_METHOD_3_2B819C845B1C5B40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34F49882494167CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleActionNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleActionNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_METHOD_3_34F49882494167CC_OFFSET))(a1, a2);
		}
	};
}
