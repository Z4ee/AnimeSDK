#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/ImageStretchMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C6F5B40)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETIMAGESTRETCHMODE_OFFSET UNITYSDK_OFFSET(0x1C6F5C00)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x1C6F5F00)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F5EA0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoGlobalSkinAsset_TypeDefinitionIndex = 47182;

	class HoYoGlobalSkinAsset : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* Image; // 0x10
		::MiHoYo::SDK::JSONObject* Color; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetColorOrdefault(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::HoYoUI::ImageStretchMode GetImageStretchMode(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoUI::ImageStretchMode(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETIMAGESTRETCHMODE_OFFSET))(this, a1);
		}

		::System::Void ParseSkinConfiguration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET))(this, a1);
		}
	};
}
