#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_587B1CA49C6A943B_OFFSET UNITYSDK_OFFSET(0x1BBC26C0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_932CB330B6D01F9E_OFFSET UNITYSDK_OFFSET(0x1BBC23E0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_98F278B886D18033_OFFSET UNITYSDK_OFFSET(0x1BBC23A0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_C882B4F450873F94_OFFSET UNITYSDK_OFFSET(0x1BBC26F0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC23D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchHandCatchItem_TypeDefinitionIndex = 20718;

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

		static ::System::Void Method_4_98F278B886D18033(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_98F278B886D18033_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_932CB330B6D01F9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_932CB330B6D01F9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_587B1CA49C6A943B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_587B1CA49C6A943B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C882B4F450873F94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_C882B4F450873F94_OFFSET))(a1, a2);
		}
	};
}
