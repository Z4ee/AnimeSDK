#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_ACQUIREIME_OFFSET UNITYSDK_OFFSET(0x1CD2A660)
#define MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CD2A410)
#define MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CD2A950)
#define MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CD2A840)
#define MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_RELEASEIME_OFFSET UNITYSDK_OFFSET(0x1CD2A740)
#define MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CD2A4A0)
#define MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD2AA50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PasswordInputIMEGuard_TypeDefinitionIndex = 21353;

	class PasswordInputIMEGuard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::InputField* targetInput; // 0x18
		::System::Nullable_1<::UnityEngine::IMECompositionMode> savedMode; // 0x20
		::System::Boolean focusedLastFrame; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void AcquireIME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_ACQUIREIME_OFFSET))(this);
		}

		::System::Void ReleaseIME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PASSWORDINPUTIMEGUARD_RELEASEIME_OFFSET))(this);
		}
	};
}
