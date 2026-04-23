#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_190F36DD6828EDF0_OFFSET UNITYSDK_OFFSET(0x1873E790)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT_METHOD_4_E266CA04B413A0D8_OFFSET UNITYSDK_OFFSET(0x1873E6B0)
#define RPG_GAMECORE_BYCOMPARESWITCHMASCOTPICKUPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1873E730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchMascotPickupCount_TypeDefinitionIndex = 20856;

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
	};
}
