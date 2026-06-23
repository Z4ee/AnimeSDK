#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6CEC9555D3AD6F3E;
namespace MoleMole { class DragableRectController; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button; }

#define MOLEMOLE_SKILLBUTTONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x160ED160)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONBUTTONDISABLED_OFFSET UNITYSDK_OFFSET(0x160ED8C0)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x160ED5F0)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x160ED6C0)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x160ED420)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x160ED4D0)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x160ED770)
#define MOLEMOLE_SKILLBUTTONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160ED950)

namespace MoleMole
{
	inline static constexpr unsigned int SkillButtonController_TypeDefinitionIndex = 57824;

	class SkillButtonController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Button* Field_5_0; // 0x18
		::Class_1_6CEC9555D3AD6F3E* Field_5_1; // 0x20
		::MoleMole::DragableRectController* Field_5_2; // 0x28
		::System::Single Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x34
		::System::Single Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_6CEC9555D3AD6F3E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CEC9555D3AD6F3E*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnButtonDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONBUTTONDISABLED_OFFSET))(this);
		}
	};
}
