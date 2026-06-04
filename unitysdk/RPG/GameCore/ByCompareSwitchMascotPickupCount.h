#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_190F36DD6828EDF0_OFFSET UNITYSDK_OFFSET(0x19538280)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_BE5D8F7A975AAA37_OFFSET UNITYSDK_OFFSET(0x19538430)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_D56EFD9F90AC7CDE_OFFSET UNITYSDK_OFFSET(0x195384B0)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_E266CA04B413A0D8_OFFSET UNITYSDK_OFFSET(0x195381A0)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19538220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchMascotPickupCount_TypeDefinitionIndex = 20776;

	class ByCompareSwitchMascotPickupCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicString* CompareCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E266CA04B413A0D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_E266CA04B413A0D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_190F36DD6828EDF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_190F36DD6828EDF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BE5D8F7A975AAA37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_BE5D8F7A975AAA37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D56EFD9F90AC7CDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_D56EFD9F90AC7CDE_OFFSET))(a1, a2);
		}
	};
}
