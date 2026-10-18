#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::MechCraft::View { class MechCraftAttributeRadarControl; }
namespace RPG::Client::MechCraft::View { class MechCraftIntegrationBarControl; }
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_ATTRIBUTERADAR_OFFSET UNITYSDK_OFFSET(0xD65A320)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_INTEGRATIONBAR_OFFSET UNITYSDK_OFFSET(0xD65AE10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_LISTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xD65AEC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_LISTTRAITS_OFFSET UNITYSDK_OFFSET(0xD65AF70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_PREFABATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xD65B100)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER_GET_PREFABTRAIT_OFFSET UNITYSDK_OFFSET(0xD65B280)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD65B820)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleProductStatsControlBinder_TypeDefinitionIndex = 80043;

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
