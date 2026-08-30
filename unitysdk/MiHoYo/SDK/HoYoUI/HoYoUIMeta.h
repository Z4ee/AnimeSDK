#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoUI { class ISkinable; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_APPLYSKIN_OFFSET UNITYSDK_OFFSET(0x1C6F4E90)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1C6F50B0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_ELEMENTID_OFFSET UNITYSDK_OFFSET(0x1C6F88E0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_USELOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1C6F8900)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_ELEMENTID_OFFSET UNITYSDK_OFFSET(0x1C6F88F0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_USELOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1C6F8910)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F8920)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoUIMeta_TypeDefinitionIndex = 47180;

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

		::System::Void set_ElementId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_ELEMENTID_OFFSET))(this, a1);
		}

		::System::Boolean get_UseLocalSkin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_USELOCALSKIN_OFFSET))(this);
		}

		::System::Void set_UseLocalSkin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_USELOCALSKIN_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_Default()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_DEFAULT_OFFSET))();
		}

		::System::Void ApplySkin(::MiHoYo::SDK::HoYoUI::ISkinable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoUI::ISkinable*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_APPLYSKIN_OFFSET))(this, a1);
		}
	};
}
