#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_00096AD60BC0D212_OFFSET UNITYSDK_OFFSET(0x1CDE9F90)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_0B394FAEC7B322D3_OFFSET UNITYSDK_OFFSET(0x1CDE9F50)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_685CB33430F4F9B4_OFFSET UNITYSDK_OFFSET(0x1CDEA160)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_D8228116D0BCA4D2_OFFSET UNITYSDK_OFFSET(0x1CDEA190)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE9F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMotionHitColliderWall_TypeDefinitionIndex = 19988;

	class AdventureByMotionHitColliderWall : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::System::String*>* DetectLayers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B394FAEC7B322D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMotionHitColliderWall*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_0B394FAEC7B322D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00096AD60BC0D212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_00096AD60BC0D212_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_685CB33430F4F9B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_685CB33430F4F9B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D8228116D0BCA4D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_METHOD_4_D8228116D0BCA4D2_OFFSET))(a1, a2);
		}
	};
}
