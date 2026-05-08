#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_140;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_POINTERDOWNBANGBOOCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11780240)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x11780290)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x11780320)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x11780380)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x117803E0)

namespace MoleMole
{
	inline static constexpr unsigned int PointerDownBangBooCard_TypeDefinitionIndex = 38922;

	class PointerDownBangBooCard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_1<::Class_0_16E4307DCC419505_140*>* Field_5_0; // 0x18
		::System::Action* OnPointerUp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Func_1<::Class_0_16E4307DCC419505_140*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Class_0_16E4307DCC419505_140*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERDOWN_OFFSET))(this, a1);
		}
	};
}
