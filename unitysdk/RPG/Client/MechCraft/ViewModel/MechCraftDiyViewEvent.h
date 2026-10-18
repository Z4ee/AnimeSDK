#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftDiyFocusTarget.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftDiyViewEventType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWEVENT_GET_FOCUSTARGET_OFFSET UNITYSDK_OFFSET(0xD674F70)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWEVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD674F60)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD672540)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyViewEvent_TypeDefinitionIndex = 79617;

	class MechCraftDiyViewEvent : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyFocusTarget _FocusTarget_k__BackingField; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEventType _Type_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEventType a1, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyFocusTarget a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEventType, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyFocusTarget))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEventType get_Type()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWEVENT_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftDiyFocusTarget get_FocusTarget()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftDiyFocusTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYVIEWEVENT_GET_FOCUSTARGET_OFFSET))(this);
		}
	};
}
