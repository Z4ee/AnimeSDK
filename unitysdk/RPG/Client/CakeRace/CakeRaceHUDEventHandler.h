#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB48ADE0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB48B020)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB48AEA0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xB48AF60)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB48B130)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CLICK_OFFSET UNITYSDK_OFFSET(0xB48B290)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0xB482F30)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_DRAG_OFFSET UNITYSDK_OFFSET(0xB48B1B0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ENDDRAG_OFFSET UNITYSDK_OFFSET(0xB48B230)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_GETLEFTSTICKINPUTX_OFFSET UNITYSDK_OFFSET(0xB48B300)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB48AE40)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB48B0A0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB48AF00)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xB48AFC0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB48B120)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceHUDEventHandler_TypeDefinitionIndex = 71011;

	class CakeRaceHUDEventHandler : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnClick; // 0x10
		::System::Action* OnEndDrag; // 0x18
		::System::Action_1<::System::Single>* OnDrag; // 0x20
		::System::Action_1<::System::Single>* OnBeginDrag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void add_OnBeginDrag(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void remove_OnBeginDrag(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void add_OnDrag(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void remove_OnDrag(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void add_OnEndDrag(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void remove_OnEndDrag(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void add_OnClick(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONCLICK_OFFSET))(this, a1);
		}

		::System::Void remove_OnClick(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONCLICK_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceHUDEventHandler* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRaceHUDEventHandler*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CREATE_OFFSET))();
		}

		::System::Void BeginDrag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_BEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void Drag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_DRAG_OFFSET))(this, a1);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ENDDRAG_OFFSET))(this);
		}

		::System::Void Click(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CLICK_OFFSET))(this, a1);
		}

		static ::System::Single GetLeftStickInputX()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_GETLEFTSTICKINPUTX_OFFSET))();
		}
	};
}
