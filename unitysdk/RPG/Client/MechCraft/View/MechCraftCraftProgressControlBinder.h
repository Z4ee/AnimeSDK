#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressAttrControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressAttrTraitDetailControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressExamConstraintsControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressIntegrationControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressOrderConstraintsControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressOverlapControl; }
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_ATTRTRAITDETAIL_OFFSET UNITYSDK_OFFSET(0xD628990)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_ATTR_OFFSET UNITYSDK_OFFSET(0xD627D50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_EXAMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xD629500)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_HINTNOTRAITS_OFFSET UNITYSDK_OFFSET(0xD629320)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0xD629140)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_LISTTRAITS_OFFSET UNITYSDK_OFFSET(0xD629270)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_ORDERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xD6293D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_OVERLAP_OFFSET UNITYSDK_OFFSET(0xD629610)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_PREFABTRAIT_OFFSET UNITYSDK_OFFSET(0xD629A20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_STATECTRLBOARD_OFFSET UNITYSDK_OFFSET(0xD629880)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD629D60)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressControlBinder_TypeDefinitionIndex = 79930;

	class MechCraftCraftProgressControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrControl* get_Attr()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_ATTR_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_PrefabTrait()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_PREFABTRAIT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl* get_ListTraits()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_LISTTRAITS_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintNoTraits()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_HINTNOTRAITS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTraitDetailControl* get_AttrTraitDetail()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTraitDetailControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_ATTRTRAITDETAIL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressOrderConstraintsControl* get_OrderConstraints()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressOrderConstraintsControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_ORDERCONSTRAINTS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressExamConstraintsControl* get_ExamConstraints()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressExamConstraintsControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_EXAMCONSTRAINTS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressOverlapControl* get_Overlap()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressOverlapControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_OVERLAP_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressIntegrationControl* get_Integration()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressIntegrationControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_INTEGRATION_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrlBoard()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROLBINDER_GET_STATECTRLBOARD_OFFSET))(this);
		}
	};
}
