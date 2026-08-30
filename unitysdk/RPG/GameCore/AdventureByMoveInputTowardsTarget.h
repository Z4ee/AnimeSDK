#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_318681CD671514DF_OFFSET UNITYSDK_OFFSET(0x1CDEA8D0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_8A8099B2B0948B29_OFFSET UNITYSDK_OFFSET(0x1CDEA680)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_9436143EBEE9D814_OFFSET UNITYSDK_OFFSET(0x1CDEA6C0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_D8DFFC86187881D9_OFFSET UNITYSDK_OFFSET(0x1CDEA8A0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEA6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMoveInputTowardsTarget_TypeDefinitionIndex = 19989;

	class AdventureByMoveInputTowardsTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* ToleranceAngle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A8099B2B0948B29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_8A8099B2B0948B29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9436143EBEE9D814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_9436143EBEE9D814_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D8DFFC86187881D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_D8DFFC86187881D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_318681CD671514DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_318681CD671514DF_OFFSET))(a1, a2);
		}
	};
}
