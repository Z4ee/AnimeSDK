#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FilterDragEventTriggerListener.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xD608D40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xD608D60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD608DD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD608E40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_SET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xD608D50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xD608EB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipMoldEventTriggerListener_TypeDefinitionIndex = 79859;

	class MechCraftCraftChipMoldEventTriggerListener : public ::RPG::Client::FilterDragEventTriggerListener
	{
	public:
		::System::Boolean _IsDragging_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void set_IsDragging(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_SET_ISDRAGGING_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}
	};
}
