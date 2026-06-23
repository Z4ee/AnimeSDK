#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_RICHTEXT_RICHTEXTX_AQUA_OFFSET UNITYSDK_OFFSET(0x1DA38200)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39D10)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39AA0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLARGEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39EB0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLARGELABEL_OFFSET UNITYSDK_OFFSET(0x1DA39B70)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKMINIBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39DE0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKMINILABEL_OFFSET UNITYSDK_OFFSET(0x1DA39C40)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACK_OFFSET UNITYSDK_OFFSET(0x1DA38270)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLUE_OFFSET UNITYSDK_OFFSET(0x1DA382E0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39440)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BOLD_OFFSET UNITYSDK_OFFSET(0x1DA37E30)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BROWN_OFFSET UNITYSDK_OFFSET(0x1DA38350)
#define FOUNDATION_RICHTEXT_RICHTEXTX_COLOR_OFFSET UNITYSDK_OFFSET(0x1DA380B0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_CYAN_OFFSET UNITYSDK_OFFSET(0x1DA383C0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_DARKBLUE_OFFSET UNITYSDK_OFFSET(0x1DA38430)
#define FOUNDATION_RICHTEXT_RICHTEXTX_FUCHSIA_OFFSET UNITYSDK_OFFSET(0x1DA384A0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_GREEN_OFFSET UNITYSDK_OFFSET(0x1DA38510)
#define FOUNDATION_RICHTEXT_RICHTEXTX_GREY_OFFSET UNITYSDK_OFFSET(0x1DA38580)
#define FOUNDATION_RICHTEXT_RICHTEXTX_ITALIC_OFFSET UNITYSDK_OFFSET(0x1DA37F70)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LABEL_OFFSET UNITYSDK_OFFSET(0x1DA392F0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LARGEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39540)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LARGELABEL_OFFSET UNITYSDK_OFFSET(0x1DA393D0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LARGE_OFFSET UNITYSDK_OFFSET(0x1DA37BF0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LIGHTBLUE_OFFSET UNITYSDK_OFFSET(0x1DA385F0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LIME_OFFSET UNITYSDK_OFFSET(0x1DA38660)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MAGENTA_OFFSET UNITYSDK_OFFSET(0x1DA386D0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MAROON_OFFSET UNITYSDK_OFFSET(0x1DA38740)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DA38BA0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MIDDLE_OFFSET UNITYSDK_OFFSET(0x1DA37D90)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MINIBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA394C0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MINILABEL_OFFSET UNITYSDK_OFFSET(0x1DA39360)
#define FOUNDATION_RICHTEXT_RICHTEXTX_NAVY_OFFSET UNITYSDK_OFFSET(0x1DA387B0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_OLIVE_OFFSET UNITYSDK_OFFSET(0x1DA38820)
#define FOUNDATION_RICHTEXT_RICHTEXTX_ORANGE_OFFSET UNITYSDK_OFFSET(0x1DA38890)
#define FOUNDATION_RICHTEXT_RICHTEXTX_PURPLE_OFFSET UNITYSDK_OFFSET(0x1DA38900)
#define FOUNDATION_RICHTEXT_RICHTEXTX_QUAD_1_OFFSET UNITYSDK_OFFSET(0x1DA391E0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_QUAD_OFFSET UNITYSDK_OFFSET(0x1DA38CF0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_RED_OFFSET UNITYSDK_OFFSET(0x1DA38970)
#define FOUNDATION_RICHTEXT_RICHTEXTX_SILVER_OFFSET UNITYSDK_OFFSET(0x1DA389E0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_SIZE_OFFSET UNITYSDK_OFFSET(0x1DA37C40)
#define FOUNDATION_RICHTEXT_RICHTEXTX_SMALL_OFFSET UNITYSDK_OFFSET(0x1DA37DE0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_TEAL_OFFSET UNITYSDK_OFFSET(0x1DA38A50)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39830)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITELABEL_OFFSET UNITYSDK_OFFSET(0x1DA395C0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITELARGEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA399D0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITELARGELABEL_OFFSET UNITYSDK_OFFSET(0x1DA39690)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITEMINIBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1DA39900)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITEMINILABEL_OFFSET UNITYSDK_OFFSET(0x1DA39760)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITE_OFFSET UNITYSDK_OFFSET(0x1DA38AC0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_YELLOW_OFFSET UNITYSDK_OFFSET(0x1DA38B30)

namespace Foundation::RichText
{
	inline static constexpr unsigned int RichTextX_TypeDefinitionIndex = 8296;

	class RichTextX : public ::System::Object
	{
	public:
		static ::System::String* Large(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_LARGE_OFFSET))(text);
		}

		static ::System::String* Middle(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_MIDDLE_OFFSET))(text);
		}

		static ::System::String* Small(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_SMALL_OFFSET))(text);
		}

		static ::System::String* Size(::System::String* text, ::System::Int32 size)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_SIZE_OFFSET))(text, size);
		}

		static ::System::String* Bold(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BOLD_OFFSET))(text);
		}

		static ::System::String* Italic(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_ITALIC_OFFSET))(text);
		}

		static ::System::String* Color(::System::String* text, ::System::String* color)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_COLOR_OFFSET))(text, color);
		}

		static ::System::String* Aqua(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_AQUA_OFFSET))(text);
		}

		static ::System::String* Black(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLACK_OFFSET))(text);
		}

		static ::System::String* Blue(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLUE_OFFSET))(text);
		}

		static ::System::String* Brown(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BROWN_OFFSET))(text);
		}

		static ::System::String* Cyan(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_CYAN_OFFSET))(text);
		}

		static ::System::String* Darkblue(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_DARKBLUE_OFFSET))(text);
		}

		static ::System::String* Fuchsia(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_FUCHSIA_OFFSET))(text);
		}

		static ::System::String* Green(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_GREEN_OFFSET))(text);
		}

		static ::System::String* Grey(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_GREY_OFFSET))(text);
		}

		static ::System::String* Lightblue(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_LIGHTBLUE_OFFSET))(text);
		}

		static ::System::String* Lime(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_LIME_OFFSET))(text);
		}

		static ::System::String* Magenta(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_MAGENTA_OFFSET))(text);
		}

		static ::System::String* Maroon(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_MAROON_OFFSET))(text);
		}

		static ::System::String* Navy(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_NAVY_OFFSET))(text);
		}

		static ::System::String* Olive(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_OLIVE_OFFSET))(text);
		}

		static ::System::String* Orange(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_ORANGE_OFFSET))(text);
		}

		static ::System::String* Purple(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_PURPLE_OFFSET))(text);
		}

		static ::System::String* Red(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_RED_OFFSET))(text);
		}

		static ::System::String* Silver(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_SILVER_OFFSET))(text);
		}

		static ::System::String* Teal(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_TEAL_OFFSET))(text);
		}

		static ::System::String* White(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_WHITE_OFFSET))(text);
		}

		static ::System::String* Yellow(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_YELLOW_OFFSET))(text);
		}

		static ::System::String* Material(::System::String* text, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_MATERIAL_OFFSET))(text, index);
		}

		static ::System::String* Quad(::System::Int32 index, ::System::Int32 size, ::System::Single x, ::System::Single y, ::System::Single width, ::System::Single height)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_QUAD_OFFSET))(index, size, x, y, width, height);
		}

		static ::System::String* Quad_1(::System::Int32 size, ::System::Single x, ::System::Single y, ::System::Single width, ::System::Single height)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_QUAD_1_OFFSET))(size, x, y, width, height);
		}

		static ::System::String* Label(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_LABEL_OFFSET))(text);
		}

		static ::System::String* MiniLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_MINILABEL_OFFSET))(text);
		}

		static ::System::String* LargeLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_LARGELABEL_OFFSET))(text);
		}

		static ::System::String* BoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BOLDLABEL_OFFSET))(text);
		}

		static ::System::String* MiniBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_MINIBOLDLABEL_OFFSET))(text);
		}

		static ::System::String* LargeBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_LARGEBOLDLABEL_OFFSET))(text);
		}

		static ::System::String* WhiteLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_WHITELABEL_OFFSET))(text);
		}

		static ::System::String* WhiteLargeLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_WHITELARGELABEL_OFFSET))(text);
		}

		static ::System::String* WhiteMiniLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_WHITEMINILABEL_OFFSET))(text);
		}

		static ::System::String* WhiteBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_WHITEBOLDLABEL_OFFSET))(text);
		}

		static ::System::String* WhiteMiniBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_WHITEMINIBOLDLABEL_OFFSET))(text);
		}

		static ::System::String* WhiteLargeBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_WHITELARGEBOLDLABEL_OFFSET))(text);
		}

		static ::System::String* BlackLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLABEL_OFFSET))(text);
		}

		static ::System::String* BlackLargeLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLARGELABEL_OFFSET))(text);
		}

		static ::System::String* BlackMiniLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLACKMINILABEL_OFFSET))(text);
		}

		static ::System::String* BlackBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLACKBOLDLABEL_OFFSET))(text);
		}

		static ::System::String* BlackMiniBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLACKMINIBOLDLABEL_OFFSET))(text);
		}

		static ::System::String* BlackLargeBoldLabel(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLARGEBOLDLABEL_OFFSET))(text);
		}
	};
}
