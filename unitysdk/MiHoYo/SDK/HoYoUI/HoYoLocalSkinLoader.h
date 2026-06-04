#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoLocalSkinAsset; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_FINDNEARESTLOCALSKINASSET_OFFSET UNITYSDK_OFFSET(0xA1779F0)
#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_SKINASSET_OFFSET UNITYSDK_OFFSET(0xA177440)
#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xA177B60)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoLocalSkinLoader_TypeDefinitionIndex = 44086;

	class HoYoLocalSkinLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset* m_PropertyValues; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset* SkinAsset(::UnityEngine::GameObject* a1)
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_SKINASSET_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoLocalSkinLoader* FindNearestLocalSkinAsset(::UnityEngine::GameObject* a1)
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoLocalSkinLoader*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_FINDNEARESTLOCALSKINASSET_OFFSET))(a1);
		}
	};
}
