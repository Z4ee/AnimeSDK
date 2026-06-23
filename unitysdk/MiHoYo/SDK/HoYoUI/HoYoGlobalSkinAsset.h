#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/ImageStretchMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BF0C8F0)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETIMAGESTRETCHMODE_OFFSET UNITYSDK_OFFSET(0x1BF0CA10)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x1BF0CC10)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0CB90)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoGlobalSkinAsset_TypeDefinitionIndex = 37090;

	class HoYoGlobalSkinAsset : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* Image; // 0x10
		::MiHoYo::SDK::JSONObject* Color; // 0x18

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET))(this, path);
		}

		::System::String* GetColorOrdefault(::System::String* key, ::System::String* def)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET))(this, key, def);
		}

		::MiHoYo::SDK::HoYoUI::ImageStretchMode GetImageStretchMode(::System::String* resourceStateId)
		{
			return ((::MiHoYo::SDK::HoYoUI::ImageStretchMode(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETIMAGESTRETCHMODE_OFFSET))(this, resourceStateId);
		}

		::System::Void ParseSkinConfiguration(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET))(this, path);
		}
	};
}
