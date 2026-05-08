#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_334;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_GETICONSIZE_OFFSET UNITYSDK_OFFSET(0xE8511B0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_GET_FORCEACTIVE_OFFSET UNITYSDK_OFFSET(0xE851190)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_GET_GETFORCEACTIVE_OFFSET UNITYSDK_OFFSET(0xE851180)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xE851240)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE851260)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xE851280)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xE851220)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONUPDATEELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0xE851200)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xE851250)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE851270)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xE851290)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xE851230)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONUPDATEELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0xE851210)
#define MOLEMOLE_UITWODMAPELEMENT_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8511A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_TypeDefinitionIndex = 44913;

	class UITwoDMapElement_Data : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnBeginDrag_k__BackingField; // 0x28
		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* _OnScroll_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_334* _posProvider; // 0x38
		::System::Action_2<::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2>* _OnUpdateElementSize_k__BackingField; // 0x40
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnEndDrag_k__BackingField; // 0x48
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _OnDrag_k__BackingField; // 0x50

		::System::Void _ctor(::Class_0_16E4307DCC419505_334* posProvider)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_334*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA__CTOR_OFFSET))(this, posProvider);
		}

		::System::Boolean get_GetForceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GET_GETFORCEACTIVE_OFFSET))(this);
		}

		::System::Boolean get_ForceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GET_FORCEACTIVE_OFFSET))(this);
		}

		::System::Single GetIconSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GETICONSIZE_OFFSET))(this);
		}

		::System::Action_2<::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2>* get_OnUpdateElementSize()
		{
			return ((::System::Action_2<::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONUPDATEELEMENTSIZE_OFFSET))(this);
		}

		::System::Void set_OnUpdateElementSize(::System::Action_2<::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONUPDATEELEMENTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* get_OnScroll()
		{
			return ((::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONSCROLL_OFFSET))(this);
		}

		::System::Void set_OnScroll(::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONSCROLL_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnBeginDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONBEGINDRAG_OFFSET))(this);
		}

		::System::Void set_OnBeginDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONBEGINDRAG_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONDRAG_OFFSET))(this);
		}

		::System::Void set_OnDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONDRAG_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* get_OnEndDrag()
		{
			return ((::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_GET_ONENDDRAG_OFFSET))(this);
		}

		::System::Void set_OnEndDrag(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_SET_ONENDDRAG_OFFSET))(this, value);
		}
	};
}
