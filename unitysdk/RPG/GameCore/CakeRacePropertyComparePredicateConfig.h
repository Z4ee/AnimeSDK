#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyCompare.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_8D4089929A9F64A1_OFFSET UNITYSDK_OFFSET(0x195E9AE0)
#define RPG_GAMECORE_CAKERACEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_DC26FE26846A6CFF_OFFSET UNITYSDK_OFFSET(0x195F0330)
#define RPG_GAMECORE_CAKERACEPROPERTYCOMPAREPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195E9AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePropertyComparePredicateConfig_TypeDefinitionIndex = 17472;

	class CakeRacePropertyComparePredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceProperty Property; // 0x18
		::RPG::GameCore::CakeRacePropertyCompare Compare; // 0x1C
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPROPERTYCOMPAREPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DC26FE26846A6CFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePropertyComparePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePropertyComparePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_DC26FE26846A6CFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D4089929A9F64A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePropertyComparePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePropertyComparePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPROPERTYCOMPAREPREDICATECONFIG_METHOD_3_8D4089929A9F64A1_OFFSET))(a1, a2);
		}
	};
}
