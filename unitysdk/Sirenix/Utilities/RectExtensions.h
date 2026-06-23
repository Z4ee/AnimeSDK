#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Utilities/Direction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDMAX_OFFSET UNITYSDK_OFFSET(0x1DE542A0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDMIN_OFFSET UNITYSDK_OFFSET(0x1DE541E0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1DE540F0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DE540D0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDXMAX_OFFSET UNITYSDK_OFFSET(0x1DE543A0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDXMIN_OFFSET UNITYSDK_OFFSET(0x1DE54320)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDX_OFFSET UNITYSDK_OFFSET(0x1DE54120)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDYMAX_OFFSET UNITYSDK_OFFSET(0x1DE544B0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDYMIN_OFFSET UNITYSDK_OFFSET(0x1DE54430)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ADDY_OFFSET UNITYSDK_OFFSET(0x1DE54170)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNBOTTOM_OFFSET UNITYSDK_OFFSET(0x1DE539E0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERXY_1_OFFSET UNITYSDK_OFFSET(0x1DE53DB0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERXY_OFFSET UNITYSDK_OFFSET(0x1DE53D70)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERX_OFFSET UNITYSDK_OFFSET(0x1DE53D00)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERY_OFFSET UNITYSDK_OFFSET(0x1DE53D30)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTER_1_OFFSET UNITYSDK_OFFSET(0x1DE53C10)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTER_OFFSET UNITYSDK_OFFSET(0x1DE53BE0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNLEFT_OFFSET UNITYSDK_OFFSET(0x1DE53BD0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNMIDDLE_OFFSET UNITYSDK_OFFSET(0x1DE53CC0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNRIGHT_1_OFFSET UNITYSDK_OFFSET(0x1DE53C50)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNRIGHT_OFFSET UNITYSDK_OFFSET(0x1DE539C0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNTOP_OFFSET UNITYSDK_OFFSET(0x1DE53CB0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_EXPANDTO_OFFSET UNITYSDK_OFFSET(0x1DE54590)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_EXPAND_1_OFFSET UNITYSDK_OFFSET(0x1DE53E20)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_EXPAND_2_OFFSET UNITYSDK_OFFSET(0x1DE53E50)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_EXPAND_OFFSET UNITYSDK_OFFSET(0x1DE53DF0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_HORIZONTALPADDING_1_OFFSET UNITYSDK_OFFSET(0x1DE53AA0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_HORIZONTALPADDING_OFFSET UNITYSDK_OFFSET(0x1DE53A70)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DE54570)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1DE54530)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DE54550)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1DE54510)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_PADDING_1_OFFSET UNITYSDK_OFFSET(0x1DE53B60)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_PADDING_2_OFFSET UNITYSDK_OFFSET(0x1DE53B90)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_PADDING_OFFSET UNITYSDK_OFFSET(0x1DE53B30)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1DE540B0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTERX_OFFSET UNITYSDK_OFFSET(0x1DE53FE0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTERY_OFFSET UNITYSDK_OFFSET(0x1DE54010)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTER_1_OFFSET UNITYSDK_OFFSET(0x1DE54060)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTER_OFFSET UNITYSDK_OFFSET(0x1DE54040)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DE53A20)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETMAX_OFFSET UNITYSDK_OFFSET(0x1DE54280)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETMIN_OFFSET UNITYSDK_OFFSET(0x1DE541B0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1DE54090)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETSIZE_1_OFFSET UNITYSDK_OFFSET(0x1DE53A50)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETSIZE_OFFSET UNITYSDK_OFFSET(0x1DE53A30)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x1DE53A10)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETXMAX_OFFSET UNITYSDK_OFFSET(0x1DE54380)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETXMIN_OFFSET UNITYSDK_OFFSET(0x1DE54300)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETX_OFFSET UNITYSDK_OFFSET(0x1DE54110)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETYMAX_OFFSET UNITYSDK_OFFSET(0x1DE54490)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETYMIN_OFFSET UNITYSDK_OFFSET(0x1DE54400)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SETY_OFFSET UNITYSDK_OFFSET(0x1DE54160)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SPLITGRID_OFFSET UNITYSDK_OFFSET(0x1DE53F10)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SPLITTABLEGRID_OFFSET UNITYSDK_OFFSET(0x1DE53F80)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SPLITVERTICAL_OFFSET UNITYSDK_OFFSET(0x1DE53ED0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SPLIT_OFFSET UNITYSDK_OFFSET(0x1DE53E90)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBMAX_OFFSET UNITYSDK_OFFSET(0x1DE542D0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBMIN_OFFSET UNITYSDK_OFFSET(0x1DE54220)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBXMAX_OFFSET UNITYSDK_OFFSET(0x1DE543D0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBXMIN_OFFSET UNITYSDK_OFFSET(0x1DE54350)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBX_OFFSET UNITYSDK_OFFSET(0x1DE54140)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBYMAX_OFFSET UNITYSDK_OFFSET(0x1DE544E0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBYMIN_OFFSET UNITYSDK_OFFSET(0x1DE54460)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_SUBY_OFFSET UNITYSDK_OFFSET(0x1DE54190)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMBOTTOM_OFFSET UNITYSDK_OFFSET(0x1DE53950)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMDIR_OFFSET UNITYSDK_OFFSET(0x1DE53570)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMLEFT_OFFSET UNITYSDK_OFFSET(0x1DE537F0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMRIGHT_OFFSET UNITYSDK_OFFSET(0x1DE53860)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMTOP_OFFSET UNITYSDK_OFFSET(0x1DE538D0)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_VERTICALPADDING_1_OFFSET UNITYSDK_OFFSET(0x1DE53B00)
#define SIRENIX_UTILITIES_RECTEXTENSIONS_VERTICALPADDING_OFFSET UNITYSDK_OFFSET(0x1DE53AD0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int RectExtensions_TypeDefinitionIndex = 6474;

	class RectExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect TakeFromDir(::UnityEngine::Rect& rect, ::System::Single width, ::Sirenix::Utilities::Direction direction)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect&, ::System::Single, ::Sirenix::Utilities::Direction))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMDIR_OFFSET))(rect, width, direction);
		}

		static ::UnityEngine::Rect TakeFromLeft(::UnityEngine::Rect& rect, ::System::Single width)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect&, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMLEFT_OFFSET))(rect, width);
		}

		static ::UnityEngine::Rect TakeFromRight(::UnityEngine::Rect& rect, ::System::Single width)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect&, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMRIGHT_OFFSET))(rect, width);
		}

		static ::UnityEngine::Rect TakeFromTop(::UnityEngine::Rect& rect, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect&, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMTOP_OFFSET))(rect, height);
		}

		static ::UnityEngine::Rect TakeFromBottom(::UnityEngine::Rect& rect, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect&, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_TAKEFROMBOTTOM_OFFSET))(rect, height);
		}

		static ::UnityEngine::Rect SetWidth(::UnityEngine::Rect rect, ::System::Single width)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETWIDTH_OFFSET))(rect, width);
		}

		static ::UnityEngine::Rect SetHeight(::UnityEngine::Rect rect, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETHEIGHT_OFFSET))(rect, height);
		}

		static ::UnityEngine::Rect SetSize(::UnityEngine::Rect rect, ::System::Single width, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETSIZE_OFFSET))(rect, width, height);
		}

		static ::UnityEngine::Rect SetSize_1(::UnityEngine::Rect rect, ::UnityEngine::Vector2 size)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETSIZE_1_OFFSET))(rect, size);
		}

		static ::UnityEngine::Rect HorizontalPadding(::UnityEngine::Rect rect, ::System::Single padding)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_HORIZONTALPADDING_OFFSET))(rect, padding);
		}

		static ::UnityEngine::Rect HorizontalPadding_1(::UnityEngine::Rect rect, ::System::Single left, ::System::Single right)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_HORIZONTALPADDING_1_OFFSET))(rect, left, right);
		}

		static ::UnityEngine::Rect VerticalPadding(::UnityEngine::Rect rect, ::System::Single padding)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_VERTICALPADDING_OFFSET))(rect, padding);
		}

		static ::UnityEngine::Rect VerticalPadding_1(::UnityEngine::Rect rect, ::System::Single top, ::System::Single bottom)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_VERTICALPADDING_1_OFFSET))(rect, top, bottom);
		}

		static ::UnityEngine::Rect Padding(::UnityEngine::Rect rect, ::System::Single padding)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_PADDING_OFFSET))(rect, padding);
		}

		static ::UnityEngine::Rect Padding_1(::UnityEngine::Rect rect, ::System::Single horizontal, ::System::Single vertical)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_PADDING_1_OFFSET))(rect, horizontal, vertical);
		}

		static ::UnityEngine::Rect Padding_2(::UnityEngine::Rect rect, ::System::Single left, ::System::Single right, ::System::Single top, ::System::Single bottom)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_PADDING_2_OFFSET))(rect, left, right, top, bottom);
		}

		static ::UnityEngine::Rect AlignLeft(::UnityEngine::Rect rect, ::System::Single width)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNLEFT_OFFSET))(rect, width);
		}

		static ::UnityEngine::Rect AlignCenter(::UnityEngine::Rect rect, ::System::Single width)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTER_OFFSET))(rect, width);
		}

		static ::UnityEngine::Rect AlignCenter_1(::UnityEngine::Rect rect, ::System::Single width, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTER_1_OFFSET))(rect, width, height);
		}

		static ::UnityEngine::Rect AlignRight(::UnityEngine::Rect rect, ::System::Single width)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNRIGHT_OFFSET))(rect, width);
		}

		static ::UnityEngine::Rect AlignRight_1(::UnityEngine::Rect rect, ::System::Single width, ::System::Boolean clamp)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNRIGHT_1_OFFSET))(rect, width, clamp);
		}

		static ::UnityEngine::Rect AlignTop(::UnityEngine::Rect rect, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNTOP_OFFSET))(rect, height);
		}

		static ::UnityEngine::Rect AlignMiddle(::UnityEngine::Rect rect, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNMIDDLE_OFFSET))(rect, height);
		}

		static ::UnityEngine::Rect AlignBottom(::UnityEngine::Rect rect, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNBOTTOM_OFFSET))(rect, height);
		}

		static ::UnityEngine::Rect AlignCenterX(::UnityEngine::Rect rect, ::System::Single width)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERX_OFFSET))(rect, width);
		}

		static ::UnityEngine::Rect AlignCenterY(::UnityEngine::Rect rect, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERY_OFFSET))(rect, height);
		}

		static ::UnityEngine::Rect AlignCenterXY(::UnityEngine::Rect rect, ::System::Single size)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERXY_OFFSET))(rect, size);
		}

		static ::UnityEngine::Rect AlignCenterXY_1(::UnityEngine::Rect rect, ::System::Single width, ::System::Single height)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ALIGNCENTERXY_1_OFFSET))(rect, width, height);
		}

		static ::UnityEngine::Rect Expand(::UnityEngine::Rect rect, ::System::Single expand)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_EXPAND_OFFSET))(rect, expand);
		}

		static ::UnityEngine::Rect Expand_1(::UnityEngine::Rect rect, ::System::Single horizontal, ::System::Single vertical)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_EXPAND_1_OFFSET))(rect, horizontal, vertical);
		}

		static ::UnityEngine::Rect Expand_2(::UnityEngine::Rect rect, ::System::Single left, ::System::Single right, ::System::Single top, ::System::Single bottom)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_EXPAND_2_OFFSET))(rect, left, right, top, bottom);
		}

		static ::UnityEngine::Rect Split(::UnityEngine::Rect rect, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SPLIT_OFFSET))(rect, index, count);
		}

		static ::UnityEngine::Rect SplitVertical(::UnityEngine::Rect rect, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SPLITVERTICAL_OFFSET))(rect, index, count);
		}

		static ::UnityEngine::Rect SplitGrid(::UnityEngine::Rect rect, ::System::Single width, ::System::Single height, ::System::Int32 index)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SPLITGRID_OFFSET))(rect, width, height, index);
		}

		static ::UnityEngine::Rect SplitTableGrid(::UnityEngine::Rect rect, ::System::Int32 columnCount, ::System::Single rowHeight, ::System::Int32 index)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SPLITTABLEGRID_OFFSET))(rect, columnCount, rowHeight, index);
		}

		static ::UnityEngine::Rect SetCenterX(::UnityEngine::Rect rect, ::System::Single x)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTERX_OFFSET))(rect, x);
		}

		static ::UnityEngine::Rect SetCenterY(::UnityEngine::Rect rect, ::System::Single y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTERY_OFFSET))(rect, y);
		}

		static ::UnityEngine::Rect SetCenter(::UnityEngine::Rect rect, ::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTER_OFFSET))(rect, x, y);
		}

		static ::UnityEngine::Rect SetCenter_1(::UnityEngine::Rect rect, ::UnityEngine::Vector2 center)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETCENTER_1_OFFSET))(rect, center);
		}

		static ::UnityEngine::Rect SetPosition(::UnityEngine::Rect rect, ::UnityEngine::Vector2 position)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETPOSITION_OFFSET))(rect, position);
		}

		static ::UnityEngine::Rect ResetPosition(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_RESETPOSITION_OFFSET))(rect);
		}

		static ::UnityEngine::Rect AddPosition(::UnityEngine::Rect rect, ::UnityEngine::Vector2 move)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDPOSITION_OFFSET))(rect, move);
		}

		static ::UnityEngine::Rect AddPosition_1(::UnityEngine::Rect rect, ::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDPOSITION_1_OFFSET))(rect, x, y);
		}

		static ::UnityEngine::Rect SetX(::UnityEngine::Rect rect, ::System::Single x)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETX_OFFSET))(rect, x);
		}

		static ::UnityEngine::Rect AddX(::UnityEngine::Rect rect, ::System::Single x)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDX_OFFSET))(rect, x);
		}

		static ::UnityEngine::Rect SubX(::UnityEngine::Rect rect, ::System::Single x)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBX_OFFSET))(rect, x);
		}

		static ::UnityEngine::Rect SetY(::UnityEngine::Rect rect, ::System::Single y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETY_OFFSET))(rect, y);
		}

		static ::UnityEngine::Rect AddY(::UnityEngine::Rect rect, ::System::Single y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDY_OFFSET))(rect, y);
		}

		static ::UnityEngine::Rect SubY(::UnityEngine::Rect rect, ::System::Single y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBY_OFFSET))(rect, y);
		}

		static ::UnityEngine::Rect SetMin(::UnityEngine::Rect rect, ::UnityEngine::Vector2 min)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETMIN_OFFSET))(rect, min);
		}

		static ::UnityEngine::Rect AddMin(::UnityEngine::Rect rect, ::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDMIN_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SubMin(::UnityEngine::Rect rect, ::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBMIN_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SetMax(::UnityEngine::Rect rect, ::UnityEngine::Vector2 max)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETMAX_OFFSET))(rect, max);
		}

		static ::UnityEngine::Rect AddMax(::UnityEngine::Rect rect, ::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDMAX_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SubMax(::UnityEngine::Rect rect, ::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBMAX_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SetXMin(::UnityEngine::Rect rect, ::System::Single xMin)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETXMIN_OFFSET))(rect, xMin);
		}

		static ::UnityEngine::Rect AddXMin(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDXMIN_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SubXMin(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBXMIN_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SetXMax(::UnityEngine::Rect rect, ::System::Single xMax)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETXMAX_OFFSET))(rect, xMax);
		}

		static ::UnityEngine::Rect AddXMax(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDXMAX_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SubXMax(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBXMAX_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SetYMin(::UnityEngine::Rect rect, ::System::Single yMin)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETYMIN_OFFSET))(rect, yMin);
		}

		static ::UnityEngine::Rect AddYMin(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDYMIN_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SubYMin(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBYMIN_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SetYMax(::UnityEngine::Rect rect, ::System::Single yMax)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SETYMAX_OFFSET))(rect, yMax);
		}

		static ::UnityEngine::Rect AddYMax(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_ADDYMAX_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect SubYMax(::UnityEngine::Rect rect, ::System::Single value)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_SUBYMAX_OFFSET))(rect, value);
		}

		static ::UnityEngine::Rect MinWidth(::UnityEngine::Rect rect, ::System::Single minWidth)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_MINWIDTH_OFFSET))(rect, minWidth);
		}

		static ::UnityEngine::Rect MaxWidth(::UnityEngine::Rect rect, ::System::Single maxWidth)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_MAXWIDTH_OFFSET))(rect, maxWidth);
		}

		static ::UnityEngine::Rect MinHeight(::UnityEngine::Rect rect, ::System::Single minHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_MINHEIGHT_OFFSET))(rect, minHeight);
		}

		static ::UnityEngine::Rect MaxHeight(::UnityEngine::Rect rect, ::System::Single maxHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_MAXHEIGHT_OFFSET))(rect, maxHeight);
		}

		static ::UnityEngine::Rect ExpandTo(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pos)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RECTEXTENSIONS_EXPANDTO_OFFSET))(rect, pos);
		}
	};
}
