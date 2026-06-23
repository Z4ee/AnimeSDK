#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C1D5FCB97A2B42C3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUITableScrollV2;
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1303CCD0)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_BEGINSCROLL_OFFSET UNITYSDK_OFFSET(0x1303CF10)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1303CE40)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_STOPSUBTITLESSCROLL_OFFSET UNITYSDK_OFFSET(0x1303CEC0)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1303D150)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1303D490)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIScrollViewAutoScroll_TypeDefinitionIndex = 68320;

	class MonoUIScrollViewAutoScroll : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MonoUITableScrollV2* scrollView; // 0x18
		::System::Single scrollDuration; // 0x20
		::System::Single beginScrollDelay; // 0x24
		::System::Single scrollEndWaitTime; // 0x28
		::Enum_3_C1D5FCB97A2B42C3 Field_5_4; // 0x2C
		::System::Single Field_5_5; // 0x30
		::System::Single Field_5_6; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void BeginScroll(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_BEGINSCROLL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopSubtitlesScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_STOPSUBTITLESSCROLL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_UPDATE_OFFSET))(this);
		}
	};
}
