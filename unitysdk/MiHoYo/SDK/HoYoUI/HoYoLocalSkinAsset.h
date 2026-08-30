#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace MiHoYo::SDK::HoYoUI { class ColorValueMap; }
namespace MiHoYo::SDK::HoYoUI { class FontSizeValueMap; }

#define MIHOYO_SDK_HOYOUI_HOYOLOCALSKINASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F6F80)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoLocalSkinAsset_TypeDefinitionIndex = 47184;

	class HoYoLocalSkinAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::MiHoYo::SDK::HoYoUI::FontSizeValueMap* FontSize; // 0x18
		::MiHoYo::SDK::HoYoUI::ColorValueMap* Color; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOLOCALSKINASSET__CTOR_OFFSET))(this);
		}
	};
}
