#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoUI { class ISkinable; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_APPLYSKIN_OFFSET UNITYSDK_OFFSET(0x84EA6C0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x84EA860)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_ELEMENTID_OFFSET UNITYSDK_OFFSET(0x84EDC90)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_USELOCALSKIN_OFFSET UNITYSDK_OFFSET(0x84EDCB0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_ELEMENTID_OFFSET UNITYSDK_OFFSET(0x84EDCA0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_USELOCALSKIN_OFFSET UNITYSDK_OFFSET(0x84EDCC0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x84EDCD0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoUIMeta_TypeDefinitionIndex = 37402;

	class HoYoUIMeta : public ::System::Object
	{
	public:
		::System::String* m_ElementId; // 0x10
		::System::Boolean m_UseLocalSkin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA__CTOR_OFFSET))(this);
		}

		::System::String* get_ElementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_ELEMENTID_OFFSET))(this);
		}

		::System::Void set_ElementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_ELEMENTID_OFFSET))(this, value);
		}

		::System::Boolean get_UseLocalSkin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_USELOCALSKIN_OFFSET))(this);
		}

		::System::Void set_UseLocalSkin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_USELOCALSKIN_OFFSET))(this, value);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_Default()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_DEFAULT_OFFSET))();
		}

		::System::Void ApplySkin(::MiHoYo::SDK::HoYoUI::ISkinable* skinable)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoUI::ISkinable*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_APPLYSKIN_OFFSET))(this, skinable);
		}
	};
}
