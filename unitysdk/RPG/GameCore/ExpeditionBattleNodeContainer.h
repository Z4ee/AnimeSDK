#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }

#define RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER_METHOD_2_910B45FA6EF5385C_OFFSET UNITYSDK_OFFSET(0x1D081C90)
#define RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D081D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleNodeContainer_TypeDefinitionIndex = 16024;

	class ExpeditionBattleNodeContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_910B45FA6EF5385C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleNodeContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleNodeContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER_METHOD_2_910B45FA6EF5385C_OFFSET))(a1, a2);
		}
	};
}
