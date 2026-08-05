#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOSCROLLBLOCKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x144F3700)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x144F3790)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x144F38E0)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x144F3A30)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x144F3B80)
#define MOLEMOLE_MONOSCROLLBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x144F3CD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollBlocker_TypeDefinitionIndex = 82835;

	class MonoScrollBlocker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean BlockScrollInput; // 0x18
		::System::Boolean BlockDragInput; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONSCROLL_OFFSET))(this, a1);
		}
	};
}
