#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SDKRectAlignment.h"
#include "unitysdk/MiHoYo/SDK/SDKRectStretch.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_ALIGN_OFFSET UNITYSDK_OFFSET(0x197E4230)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0x197E4050)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0x197E4190)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOM_OFFSET UNITYSDK_OFFSET(0x197E40F0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_CENTER_OFFSET UNITYSDK_OFFSET(0x197E3F10)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_LEFT_OFFSET UNITYSDK_OFFSET(0x197E3E70)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_RIGHT_OFFSET UNITYSDK_OFFSET(0x197E3FB0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETALIGNMENT_OFFSET UNITYSDK_OFFSET(0x197E3BF0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHHORIZONTALRECT_OFFSET UNITYSDK_OFFSET(0x197E4420)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHVERTICALRECT_OFFSET UNITYSDK_OFFSET(0x197E48E0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHFULL_OFFSET UNITYSDK_OFFSET(0x197E5340)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALBOTTOM_OFFSET UNITYSDK_OFFSET(0x197E4F80)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALCENTER_OFFSET UNITYSDK_OFFSET(0x197E4E90)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALTOP_OFFSET UNITYSDK_OFFSET(0x197E4DA0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALCENTER_OFFSET UNITYSDK_OFFSET(0x197E5160)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALLEFT_OFFSET UNITYSDK_OFFSET(0x197E5070)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALRIGHT_OFFSET UNITYSDK_OFFSET(0x197E5250)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCH_OFFSET UNITYSDK_OFFSET(0x197E56F0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPLEFT_OFFSET UNITYSDK_OFFSET(0x197E3C90)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPRIGHT_OFFSET UNITYSDK_OFFSET(0x197E3DD0)
#define MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOP_OFFSET UNITYSDK_OFFSET(0x197E3D30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKRectTransform_TypeDefinitionIndex = 18873;

	class MiHoYoSDKRectTransform : public ::System::Object
	{
	public:
		static ::System::Void SetAlignment(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 value, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETALIGNMENT_OFFSET))(rect, value, offset, size, adjustPivot);
		}

		static ::System::Void TopLeft(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPLEFT_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void Top(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOP_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void TopRight(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_TOPRIGHT_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void Left(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_LEFT_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void Center(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_CENTER_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void Right(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_RIGHT_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void BottomLeft(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMLEFT_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void Bottom(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOM_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void BottomRight(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_BOTTOMRIGHT_OFFSET))(rect, offset, size, adjustPivot);
		}

		static ::System::Void Align(::UnityEngine::RectTransform* rect, ::MiHoYo::SDK::SDKRectAlignment alignment, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 size, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::MiHoYo::SDK::SDKRectAlignment, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_ALIGN_OFFSET))(rect, alignment, offset, size, adjustPivot);
		}

		static ::System::Void SetStretchHorizontalRect(::UnityEngine::RectTransform* rect, ::System::Single paddingLeft, ::System::Single offsetY, ::System::Single paddingRight, ::System::Single height)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHHORIZONTALRECT_OFFSET))(rect, paddingLeft, offsetY, paddingRight, height);
		}

		static ::System::Void SetStretchVerticalRect(::UnityEngine::RectTransform* rect, ::System::Single offsetX, ::System::Single paddingTop, ::System::Single width, ::System::Single paddingBottom)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_SETSTRETCHVERTICALRECT_OFFSET))(rect, offsetX, paddingTop, width, paddingBottom);
		}

		static ::System::Void StretchHorizontalTop(::UnityEngine::RectTransform* rect, ::System::Single paddingLeft, ::System::Single offsetY, ::System::Single paddingRight, ::System::Single height, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALTOP_OFFSET))(rect, paddingLeft, offsetY, paddingRight, height, adjustPivot);
		}

		static ::System::Void StretchHorizontalCenter(::UnityEngine::RectTransform* rect, ::System::Single paddingLeft, ::System::Single offsetY, ::System::Single paddingRight, ::System::Single height, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALCENTER_OFFSET))(rect, paddingLeft, offsetY, paddingRight, height, adjustPivot);
		}

		static ::System::Void StretchHorizontalBottom(::UnityEngine::RectTransform* rect, ::System::Single paddingLeft, ::System::Single offsetY, ::System::Single paddingRight, ::System::Single height, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHHORIZONTALBOTTOM_OFFSET))(rect, paddingLeft, offsetY, paddingRight, height, adjustPivot);
		}

		static ::System::Void StretchVerticalLeft(::UnityEngine::RectTransform* rect, ::System::Single offsetX, ::System::Single paddingTop, ::System::Single width, ::System::Single paddingBottom, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALLEFT_OFFSET))(rect, offsetX, paddingTop, width, paddingBottom, adjustPivot);
		}

		static ::System::Void StretchVerticalCenter(::UnityEngine::RectTransform* rect, ::System::Single offsetX, ::System::Single paddingTop, ::System::Single width, ::System::Single paddingBottom, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALCENTER_OFFSET))(rect, offsetX, paddingTop, width, paddingBottom, adjustPivot);
		}

		static ::System::Void StretchVerticalRight(::UnityEngine::RectTransform* rect, ::System::Single offsetX, ::System::Single paddingTop, ::System::Single width, ::System::Single paddingBottom, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHVERTICALRIGHT_OFFSET))(rect, offsetX, paddingTop, width, paddingBottom, adjustPivot);
		}

		static ::System::Void StretchFull(::UnityEngine::RectTransform* rect, ::System::Single paddingLeft, ::System::Single paddingTop, ::System::Single paddingRight, ::System::Single paddingBottom)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCHFULL_OFFSET))(rect, paddingLeft, paddingTop, paddingRight, paddingBottom);
		}

		static ::System::Void Stretch(::UnityEngine::RectTransform* rect, ::MiHoYo::SDK::SDKRectStretch stretch, ::System::Single leftOrOffsetX, ::System::Single topOrOffsetY, ::System::Single rightOrWidth, ::System::Single bottomOrHeight, ::System::Boolean adjustPivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::MiHoYo::SDK::SDKRectStretch, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRECTTRANSFORM_STRETCH_OFFSET))(rect, stretch, leftOrOffsetX, topOrOffsetY, rightOrWidth, bottomOrHeight, adjustPivot);
		}
	};
}
