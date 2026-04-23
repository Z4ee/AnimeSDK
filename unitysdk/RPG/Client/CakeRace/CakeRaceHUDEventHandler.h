#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDB10)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9EEDD50)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDBD0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDC90)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDE60)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CLICK_OFFSET UNITYSDK_OFFSET(0x9EEDF90)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x9EE6140)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_DRAG_OFFSET UNITYSDK_OFFSET(0x9EEDED0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDF40)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_GETLEFTSTICKINPUTX_OFFSET UNITYSDK_OFFSET(0x9EEDFF0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDB70)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9EEDDD0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDC30)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x9EEDCF0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEDE50)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceHUDEventHandler_TypeDefinitionIndex = 70199;

	class CakeRaceHUDEventHandler : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* OnDrag; // 0x10
		::System::Action* OnEndDrag; // 0x18
		::System::Action_1<::System::Single>* OnBeginDrag; // 0x20
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnClick; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void add_OnBeginDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONBEGINDRAG_OFFSET))(this, value);
		}

		::System::Void remove_OnBeginDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONBEGINDRAG_OFFSET))(this, value);
		}

		::System::Void add_OnDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONDRAG_OFFSET))(this, value);
		}

		::System::Void remove_OnDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONDRAG_OFFSET))(this, value);
		}

		::System::Void add_OnEndDrag(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONENDDRAG_OFFSET))(this, value);
		}

		::System::Void remove_OnEndDrag(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONENDDRAG_OFFSET))(this, value);
		}

		::System::Void add_OnClick(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONCLICK_OFFSET))(this, value);
		}

		::System::Void remove_OnClick(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONCLICK_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRace::CakeRaceHUDEventHandler* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRaceHUDEventHandler*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CREATE_OFFSET))();
		}

		::System::Void BeginDrag(::System::Single pointerX)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_BEGINDRAG_OFFSET))(this, pointerX);
		}

		::System::Void Drag(::System::Single pointerX)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_DRAG_OFFSET))(this, pointerX);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ENDDRAG_OFFSET))(this);
		}

		::System::Void Click(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CLICK_OFFSET))(this, eventData);
		}

		static ::System::Single GetLeftStickInputX()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_GETLEFTSTICKINPUTX_OFFSET))();
		}
	};
}
