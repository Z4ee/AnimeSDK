#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_23E7DB998D5E6CC0_OFFSET UNITYSDK_OFFSET(0x1702CBE0)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_A0B8F8C76835344A_OFFSET UNITYSDK_OFFSET(0x1702CCB0)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1702CC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantHasFarmer_TypeDefinitionIndex = 22414;

	class ByIsElfRestaurantHasFarmer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 FarmID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_23E7DB998D5E6CC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_23E7DB998D5E6CC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0B8F8C76835344A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_A0B8F8C76835344A_OFFSET))(a1, a2);
		}
	};
}
