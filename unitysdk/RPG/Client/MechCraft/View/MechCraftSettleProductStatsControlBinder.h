#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::MechCraft::View { class MechCraftAttributeRadarControl; }
namespace RPG::Client::MechCraft::View { class MechCraftIntegrationBarControl; }
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_ATTRIBUTERADAR_OFFSET UNITYSDK_OFFSET(0xD663B70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_INTEGRATIONBAR_OFFSET UNITYSDK_OFFSET(0xD664660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_LISTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xD664710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_LISTTRAITS_OFFSET UNITYSDK_OFFSET(0xD6647C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_PREFABATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xD664950)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_PREFABTRAIT_OFFSET UNITYSDK_OFFSET(0xD664AD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD665070)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleProductStatsControlBinder_TypeDefinitionIndex = 80044;

	class MechCraftSettleProductStatsControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftAttributeRadarControl* get_AttributeRadar()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftAttributeRadarControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_ATTRIBUTERADAR_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_PrefabAttribute()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_PREFABATTRIBUTE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl* get_ListAttributes()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_LISTATTRIBUTES_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_PrefabTrait()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_PREFABTRAIT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl* get_ListTraits()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_LISTTRAITS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftIntegrationBarControl* get_IntegrationBar()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftIntegrationBarControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_INTEGRATIONBAR_OFFSET))(this);
		}
	};
}
