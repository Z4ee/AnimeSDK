#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace SRF::UI { class SRNumberSpinner; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define SRF_UI_SRNUMBERBUTTON_APPLY_OFFSET UNITYSDK_OFFSET(0x19EAF370)
#define SRF_UI_SRNUMBERBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x19EAF320)
#define SRF_UI_SRNUMBERBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19EAF450)
#define SRF_UI_SRNUMBERBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x19EAF520)
#define SRF_UI_SRNUMBERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAF6F0)

namespace SRF::UI
{
	inline static constexpr unsigned int SRNumberButton_TypeDefinitionIndex = 33301;

	class SRNumberButton : public ::UnityEngine::UI::Button
	{
	public:
		// static const ::System::Single ExtraThreshold; // 0x0
		// static const ::System::Single Delay; // 0x0
		::System::Single _delayTime; // 0x110
		::System::Single _downTime; // 0x114
		::System::Boolean _isDown; // 0x118
		::System::Double Amount; // 0x120
		::SRF::UI::SRNumberSpinner* TargetField; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERBUTTON_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERBUTTON_UPDATE_OFFSET))(this);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERBUTTON_APPLY_OFFSET))(this);
		}
	};
}
