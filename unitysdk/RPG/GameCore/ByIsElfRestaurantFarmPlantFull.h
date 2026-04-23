#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_5F386FD6FF5C6D0A_OFFSET UNITYSDK_OFFSET(0x187514F0)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_85AAC0512D243E30_OFFSET UNITYSDK_OFFSET(0x187515C0)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL__CTOR_OFFSET UNITYSDK_OFFSET(0x18751570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantFarmPlantFull_TypeDefinitionIndex = 23385;

	class ByIsElfRestaurantFarmPlantFull : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5F386FD6FF5C6D0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_5F386FD6FF5C6D0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85AAC0512D243E30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_85AAC0512D243E30_OFFSET))(a1, a2);
		}
	};
}
