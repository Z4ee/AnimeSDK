#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SDKRectAlignment.h"
#include "unitysdk/MiHoYo/SDK/SDKRectStretch.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_ALIGN_OFFSET UNITYSDK_OFFSET(0x19917260)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0x19917080)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0x199171C0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOM_OFFSET UNITYSDK_OFFSET(0x19917120)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_CENTER_OFFSET UNITYSDK_OFFSET(0x19916F40)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_LEFT_OFFSET UNITYSDK_OFFSET(0x19916EA0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_RIGHT_OFFSET UNITYSDK_OFFSET(0x19916FE0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETALIGNMENT_OFFSET UNITYSDK_OFFSET(0x19916C20)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHHORIZONTALRECT_OFFSET UNITYSDK_OFFSET(0x19917450)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHVERTICALRECT_OFFSET UNITYSDK_OFFSET(0x19917910)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHFULL_OFFSET UNITYSDK_OFFSET(0x19918370)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALBOTTOM_OFFSET UNITYSDK_OFFSET(0x19917FB0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALCENTER_OFFSET UNITYSDK_OFFSET(0x19917EC0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALTOP_OFFSET UNITYSDK_OFFSET(0x19917DD0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALCENTER_OFFSET UNITYSDK_OFFSET(0x19918190)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALLEFT_OFFSET UNITYSDK_OFFSET(0x199180A0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALRIGHT_OFFSET UNITYSDK_OFFSET(0x19918280)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCH_OFFSET UNITYSDK_OFFSET(0x19918720)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPLEFT_OFFSET UNITYSDK_OFFSET(0x19916CC0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPRIGHT_OFFSET UNITYSDK_OFFSET(0x19916E00)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOP_OFFSET UNITYSDK_OFFSET(0x19916D60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKRectTransform_TypeDefinitionIndex = 7960;

	class MiHoYoSDKRectTransform : public ::System::Object
	{
	public:
		static ::System::Void SetAlignment(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETALIGNMENT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void TopLeft(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPLEFT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Top(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void TopRight(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPRIGHT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Left(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_LEFT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Center(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_CENTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Right(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_RIGHT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BottomLeft(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMLEFT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Bottom(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BottomRight(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMRIGHT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Align(::UnityEngine::RectTransform* a1, ::MiHoYo::SDK::SDKRectAlignment a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::MiHoYo::SDK::SDKRectAlignment, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_ALIGN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetStretchHorizontalRect(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHHORIZONTALRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetStretchVerticalRect(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHVERTICALRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void StretchHorizontalTop(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALTOP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void StretchHorizontalCenter(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALCENTER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void StretchHorizontalBottom(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALBOTTOM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void StretchVerticalLeft(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALLEFT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void StretchVerticalCenter(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALCENTER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void StretchVerticalRight(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALRIGHT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void StretchFull(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHFULL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Stretch(::UnityEngine::RectTransform* a1, ::MiHoYo::SDK::SDKRectStretch a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::MiHoYo::SDK::SDKRectStretch, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCH_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
