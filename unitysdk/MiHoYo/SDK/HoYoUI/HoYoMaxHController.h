#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class LayoutElement; }

#define MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB207300)
#define MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER_REFRESHLAYOUTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xB2073D0)
#define MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER_REFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0xB207420)
#define MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2074B0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoMaxHController_TypeDefinitionIndex = 47171;

	class HoYoMaxHController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single maxHeight; // 0x18
		::UnityEngine::RectTransform* textContentRect; // 0x20
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER_REFRESHLAYOUT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RefreshLayoutNextFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOMAXHCONTROLLER_REFRESHLAYOUTNEXTFRAME_OFFSET))(this);
		}
	};
}
