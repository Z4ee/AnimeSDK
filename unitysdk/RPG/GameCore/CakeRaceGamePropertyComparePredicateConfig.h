#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyCompare.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_9CB0381583C17FE9_OFFSET UNITYSDK_OFFSET(0x187725B0)
#define RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_CB6490639DDC108B_OFFSET UNITYSDK_OFFSET(0x1876D590)
#define RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1876D580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceGamePropertyComparePredicateConfig_TypeDefinitionIndex = 17471;

	class CakeRaceGamePropertyComparePredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceProperty Property; // 0x18
		::RPG::GameCore::CakeRacePropertyCompare Compare; // 0x1C
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9CB0381583C17FE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_9CB0381583C17FE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB6490639DDC108B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_CB6490639DDC108B_OFFSET))(a1, a2);
		}
	};
}
