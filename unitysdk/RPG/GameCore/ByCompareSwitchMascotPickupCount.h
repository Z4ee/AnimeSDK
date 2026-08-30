#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_190F36DD6828EDF0_OFFSET UNITYSDK_OFFSET(0x1BBC3540)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_86926CBFE479C15D_OFFSET UNITYSDK_OFFSET(0x1BBC34F0)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_89E7006DA6F9EEE9_OFFSET UNITYSDK_OFFSET(0x1BBC3730)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_E76E0CCE9E0C9376_OFFSET UNITYSDK_OFFSET(0x1BBC36F0)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC3530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchMascotPickupCount_TypeDefinitionIndex = 21751;

	class ByCompareSwitchMascotPickupCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicString* CompareCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_86926CBFE479C15D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_86926CBFE479C15D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_190F36DD6828EDF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_190F36DD6828EDF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E76E0CCE9E0C9376(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_E76E0CCE9E0C9376_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_89E7006DA6F9EEE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_89E7006DA6F9EEE9_OFFSET))(a1, a2);
		}
	};
}
