#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_2A52EAA1A8950A66_OFFSET UNITYSDK_OFFSET(0x1CD9CEE0)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_7FBE7E819E0874DB_OFFSET UNITYSDK_OFFSET(0x1CD9CF10)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_80B6AAE3B397E473_OFFSET UNITYSDK_OFFSET(0x1CD9CD60)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_85AAC0512D243E30_OFFSET UNITYSDK_OFFSET(0x1CD9CDA0)
#define RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9CD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantFarmPlantFull_TypeDefinitionIndex = 24092;

	class ByIsElfRestaurantFarmPlantFull : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_80B6AAE3B397E473(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_80B6AAE3B397E473_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85AAC0512D243E30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_85AAC0512D243E30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2A52EAA1A8950A66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_2A52EAA1A8950A66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7FBE7E819E0874DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTFARMPLANTFULL_METHOD_4_7FBE7E819E0874DB_OFFSET))(a1, a2);
		}
	};
}
