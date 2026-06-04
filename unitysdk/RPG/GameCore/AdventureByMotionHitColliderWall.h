#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_00096AD60BC0D212_OFFSET UNITYSDK_OFFSET(0x194471A0)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_344A2D7C9F7FEC33_OFFSET UNITYSDK_OFFSET(0x194473F0)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_8DE897A91EF0094C_OFFSET UNITYSDK_OFFSET(0x19447370)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_F239707E6AE2789A_OFFSET UNITYSDK_OFFSET(0x194470D0)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL__CTOR_OFFSET UNITYSDK_OFFSET(0x19447150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMotionHitColliderWall_TypeDefinitionIndex = 19090;

	class AdventureByMotionHitColliderWall : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::System::String*>* DetectLayers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F239707E6AE2789A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMotionHitColliderWall*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_F239707E6AE2789A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00096AD60BC0D212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_00096AD60BC0D212_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8DE897A91EF0094C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_8DE897A91EF0094C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_344A2D7C9F7FEC33(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_344A2D7C9F7FEC33_OFFSET))(a1, a2);
		}
	};
}
