#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoLocalSkinAsset; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_FINDNEARESTLOCALSKINASSET_OFFSET UNITYSDK_OFFSET(0x84EC0C0)
#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_SKINASSET_OFFSET UNITYSDK_OFFSET(0x84EBA90)
#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x84EC230)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoLocalSkinLoader_TypeDefinitionIndex = 37406;

	class HoYoLocalSkinLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset* m_PropertyValues; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset* SkinAsset(::UnityEngine::GameObject* obj)
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoLocalSkinAsset*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_SKINASSET_OFFSET))(obj);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoLocalSkinLoader* FindNearestLocalSkinAsset(::UnityEngine::GameObject* obj)
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoLocalSkinLoader*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINLOADER_FINDNEARESTLOCALSKINASSET_OFFSET))(obj);
		}
	};
}
