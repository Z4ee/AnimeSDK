#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_386C28A08CDBC1FF_OFFSET UNITYSDK_OFFSET(0x19560BB0)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_5F386FD6FF5C6D0A_OFFSET UNITYSDK_OFFSET(0x19560920)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_85AAC0512D243E30_OFFSET UNITYSDK_OFFSET(0x195609F0)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_89DBE2669696E2E3_OFFSET UNITYSDK_OFFSET(0x19560B30)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL__CTOR_OFFSET UNITYSDK_OFFSET(0x195609A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantFarmPlantFull_TypeDefinitionIndex = 23043;

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

		static ::System::Void Method_4_89DBE2669696E2E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_89DBE2669696E2E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_386C28A08CDBC1FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_386C28A08CDBC1FF_OFFSET))(a1, a2);
		}
	};
}
