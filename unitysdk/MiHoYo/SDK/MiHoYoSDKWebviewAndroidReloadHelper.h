#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWANDROIDRELOADHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x8559B40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebviewAndroidReloadHelper_TypeDefinitionIndex = 37288;

	class MiHoYoSDKWebviewAndroidReloadHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWANDROIDRELOADHELPER__CTOR_OFFSET))(this);
		}
	};
}
