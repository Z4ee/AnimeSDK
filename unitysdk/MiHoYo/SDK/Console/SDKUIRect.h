#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_SDKUIRECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x8B74C0)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x8B7420)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x8B7470)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_MIDX_OFFSET UNITYSDK_OFFSET(0x8B7430)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_MIDY_OFFSET UNITYSDK_OFFSET(0x8B7450)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x41FDB0)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1A068140)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B7500)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8B74B0)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x41FAF0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIRect_TypeDefinitionIndex = 19561;

	struct alignas(4) SDKUIRect
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Width; // 0x18
		::System::Single Height; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_OFFSET))(this, x, y, width, height);
		}

		::System::Void _ctor_1(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_1_OFFSET))(this, gameObject);
		}

		static ::MiHoYo::SDK::Console::SDKUIRect get_Zero()
		{
			return ((::MiHoYo::SDK::Console::SDKUIRect(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_ZERO_OFFSET))();
		}

		::System::Single get_Left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_Right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_RIGHT_OFFSET))(this);
		}

		::System::Single get_Top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_TOP_OFFSET))(this);
		}

		::System::Single get_Bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_BOTTOM_OFFSET))(this);
		}

		::System::Single get_MidX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_MIDX_OFFSET))(this);
		}

		::System::Single get_MidY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_MIDY_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_Center()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_CENTER_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Contains(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_CONTAINS_OFFSET))(this, point);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_TOSTRING_OFFSET))(this);
		}
	};
}
