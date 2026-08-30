#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }

#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE_METHOD_2_59761E60556FE440_OFFSET UNITYSDK_OFFSET(0x1D081E90)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D082020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleRandomBranchCase_TypeDefinitionIndex = 16030;

	class ExpeditionBattleRandomBranchCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Weight; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_59761E60556FE440(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleRandomBranchCase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleRandomBranchCase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHCASE_METHOD_2_59761E60556FE440_OFFSET))(a1, a2);
		}
	};
}
