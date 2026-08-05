#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { template <typename T> class ExecuteEvents_EventFunction_1; }

#define MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x13AC5960)
#define MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x13AC5A90)
#define MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x13AC5B90)
#define MOLEMOLE_MONOUIEVENTPENETERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC5C90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIEventPeneterate_TypeDefinitionIndex = 71428;

	class MonoUIEventPeneterate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean onlyFirstUnderneath; // 0x18
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnClick; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERUP_OFFSET))(this, a1);
		}
	};
}
