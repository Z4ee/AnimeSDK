#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PS_SDKUIRECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x20C9A40)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x20C99A0)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x20C99F0)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xCC60)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_MIDX_OFFSET UNITYSDK_OFFSET(0x20C99B0)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_MIDY_OFFSET UNITYSDK_OFFSET(0x20C99D0)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x20C9990)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0xCC80)
#define MIHOYO_SDK_PS_SDKUIRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x15F8CB00)
#define MIHOYO_SDK_PS_SDKUIRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20CAF70)
#define MIHOYO_SDK_PS_SDKUIRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20CAF60)
#define MIHOYO_SDK_PS_SDKUIRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x24C40)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIRect_TypeDefinitionIndex = 7546;

	struct alignas(4) SDKUIRect
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Width; // 0x18
		::System::Single Height; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT__CTOR_OFFSET))(this, x, y, width, height);
		}

		::System::Void _ctor_1(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT__CTOR_1_OFFSET))(this, gameObject);
		}

		static ::MiHoYo::SDK::PS::SDKUIRect get_Zero()
		{
			return ((::MiHoYo::SDK::PS::SDKUIRect(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_ZERO_OFFSET))();
		}

		::System::Single get_Left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_Right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_RIGHT_OFFSET))(this);
		}

		::System::Single get_Top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_TOP_OFFSET))(this);
		}

		::System::Single get_Bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_BOTTOM_OFFSET))(this);
		}

		::System::Single get_MidX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_MIDX_OFFSET))(this);
		}

		::System::Single get_MidY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_MIDY_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_Center()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_GET_CENTER_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Contains(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_CONTAINS_OFFSET))(this, point);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIRECT_TOSTRING_OFFSET))(this);
		}
	};
}
