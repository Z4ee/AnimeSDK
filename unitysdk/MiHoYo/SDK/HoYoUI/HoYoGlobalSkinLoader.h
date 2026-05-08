#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoGlobalSkinAsset; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER_GET_SKINASSET_OFFSET UNITYSDK_OFFSET(0x1AD91CB0)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD91D70)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoGlobalSkinLoader_TypeDefinitionIndex = 35491;

	class HoYoGlobalSkinLoader : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset** StaticGet_s_SkinAsset()
		{
			return (::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset**)Il2CppClass::FromTypeDefinitionIndex(HoYoGlobalSkinLoader_TypeDefinitionIndex)->GetStaticField(0x26AC0);
		}
		// static const ::System::String* SKIN_JSON_FILE_PATH; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset* get_SkinAsset()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoGlobalSkinAsset*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINLOADER_GET_SKINASSET_OFFSET))();
		}
	};
}
