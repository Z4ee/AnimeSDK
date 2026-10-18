#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD66B740)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD66B690)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD66B830)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftUnlockConditionControlBinder_TypeDefinitionIndex = 80067;

	class MechCraftUnlockConditionControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTUNLOCKCONDITIONCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}
	};
}
