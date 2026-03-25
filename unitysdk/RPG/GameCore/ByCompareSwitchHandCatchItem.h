#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_7FBCAE0E248D1461_OFFSET UNITYSDK_OFFSET(0x17019DA0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_METHOD_4_932CB330B6D01F9E_OFFSET UNITYSDK_OFFSET(0x17019E70)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17019E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchHandCatchItem_TypeDefinitionIndex = 19286;

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
	};
}
