#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_3C90B5964F2EC74B_OFFSET UNITYSDK_OFFSET(0x195378D0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_7250E4D126DB68DE_OFFSET UNITYSDK_OFFSET(0x19537850)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_7FBCAE0E248D1461_OFFSET UNITYSDK_OFFSET(0x195374A0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_932CB330B6D01F9E_OFFSET UNITYSDK_OFFSET(0x19537570)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19537520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchHandCatchItem_TypeDefinitionIndex = 19808;

	class ByCompareSwitchHandCatchItem : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x20
		::RPG::GameCore::DynamicFloat* GroupID; // 0x28
		::RPG::GameCore::DynamicFloat* GroupInstanceID; // 0x30
		::System::Boolean InvalidRetureValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7FBCAE0E248D1461(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_7FBCAE0E248D1461_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_932CB330B6D01F9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_932CB330B6D01F9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7250E4D126DB68DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_7250E4D126DB68DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3C90B5964F2EC74B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_3C90B5964F2EC74B_OFFSET))(a1, a2);
		}
	};
}
