#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftChipImageControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER_GET_CHIPIMAGE_OFFSET UNITYSDK_OFFSET(0xD6657C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD665920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER_GET_TEXTNUM_OFFSET UNITYSDK_OFFSET(0xD665870)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6659E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleRewardItemControlBinder_TypeDefinitionIndex = 80032;

	class MechCraftSettleRewardItemControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftChipImageControl* get_ChipImage()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftChipImageControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER_GET_CHIPIMAGE_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextNum()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER_GET_TEXTNUM_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEREWARDITEMCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}
	};
}
