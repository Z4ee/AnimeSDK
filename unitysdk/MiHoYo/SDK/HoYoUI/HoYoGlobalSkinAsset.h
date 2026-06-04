#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET UNITYSDK_OFFSET(0xA1769F0)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET UNITYSDK_OFFSET(0xA176BA0)
#define MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xA176B60)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoGlobalSkinAsset_TypeDefinitionIndex = 44083;

	class HoYoGlobalSkinAsset : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* Color; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetColorOrdefault(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_GETCOLORORDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::Void ParseSkinConfiguration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOGLOBALSKINASSET_PARSESKINCONFIGURATION_OFFSET))(this, a1);
		}
	};
}
