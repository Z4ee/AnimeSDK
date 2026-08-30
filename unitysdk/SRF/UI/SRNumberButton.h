#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace SRF::UI { class SRNumberSpinner; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define SRF_UI_SRNUMBERBUTTON_APPLY_OFFSET UNITYSDK_OFFSET(0x1EC48930)
#define SRF_UI_SRNUMBERBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1EC488E0)
#define SRF_UI_SRNUMBERBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1EC48A10)
#define SRF_UI_SRNUMBERBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EC48A50)
#define SRF_UI_SRNUMBERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC48C20)

namespace SRF::UI
{
	inline static constexpr unsigned int SRNumberButton_TypeDefinitionIndex = 34721;

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

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERBUTTON_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERBUTTON_ONPOINTERUP_OFFSET))(this, a1);
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
