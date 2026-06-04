#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_23490D9884442F80_OFFSET UNITYSDK_OFFSET(0x194476F0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_8508450C153DF895_OFFSET UNITYSDK_OFFSET(0x194479A0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_9436143EBEE9D814_OFFSET UNITYSDK_OFFSET(0x194477C0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_FDF678EF6864DB62_OFFSET UNITYSDK_OFFSET(0x19447A20)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19447770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMoveInputTowardsTarget_TypeDefinitionIndex = 19091;

	class AdventureByMoveInputTowardsTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* ToleranceAngle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_23490D9884442F80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_23490D9884442F80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9436143EBEE9D814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_9436143EBEE9D814_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8508450C153DF895(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_8508450C153DF895_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDF678EF6864DB62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_FDF678EF6864DB62_OFFSET))(a1, a2);
		}
	};
}
