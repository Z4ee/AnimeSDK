#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_SDKUIRECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x3B176A0)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x3B17600)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x3B17650)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x213E0)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_MIDX_OFFSET UNITYSDK_OFFSET(0x3B17610)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_MIDY_OFFSET UNITYSDK_OFFSET(0x3B17630)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x3A54C20)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0x784700)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1C5E46F0)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B94190)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B94180)
#define MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x82E380)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIRect_TypeDefinitionIndex = 8916;

	struct alignas(4) SDKUIRect
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Width; // 0x18
		::System::Single Height; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT__CTOR_1_OFFSET))(this, a1);
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
		::System::Boolean Contains(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_CONTAINS_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIRECT_TOSTRING_OFFSET))(this);
		}
	};
}
