#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET UNITYSDK_OFFSET(0x19A38970)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x19A38B00)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x19A38AA0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoGlobalSkinAsset_TypeDefinitionIndex = 35490;

	class HoYoGlobalSkinAsset : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* Color; // 0x10

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET))(this, path);
		}

		::System::String* GetColorOrdefault(::System::String* key, ::System::String* def)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET))(this, key, def);
		}

		::System::Void ParseSkinConfiguration(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET))(this, path);
		}
	};
}
