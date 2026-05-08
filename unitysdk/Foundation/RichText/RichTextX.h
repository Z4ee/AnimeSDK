#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_RICHTEXT_RICHTEXTX_AQUA_OFFSET UNITYSDK_OFFSET(0x1B71CDE0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E8F0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E680)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLARGEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71EA90)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKLARGELABEL_OFFSET UNITYSDK_OFFSET(0x1B71E750)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKMINIBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E9C0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACKMINILABEL_OFFSET UNITYSDK_OFFSET(0x1B71E820)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLACK_OFFSET UNITYSDK_OFFSET(0x1B71CE50)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BLUE_OFFSET UNITYSDK_OFFSET(0x1B71CEC0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E020)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BOLD_OFFSET UNITYSDK_OFFSET(0x1B71CA10)
#define FOUNDATION_RICHTEXT_RICHTEXTX_BROWN_OFFSET UNITYSDK_OFFSET(0x1B71CF30)
#define FOUNDATION_RICHTEXT_RICHTEXTX_COLOR_OFFSET UNITYSDK_OFFSET(0x1B71CC90)
#define FOUNDATION_RICHTEXT_RICHTEXTX_CYAN_OFFSET UNITYSDK_OFFSET(0x1B71CFA0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_DARKBLUE_OFFSET UNITYSDK_OFFSET(0x1B71D010)
#define FOUNDATION_RICHTEXT_RICHTEXTX_FUCHSIA_OFFSET UNITYSDK_OFFSET(0x1B71D080)
#define FOUNDATION_RICHTEXT_RICHTEXTX_GREEN_OFFSET UNITYSDK_OFFSET(0x1B71D0F0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_GREY_OFFSET UNITYSDK_OFFSET(0x1B71D160)
#define FOUNDATION_RICHTEXT_RICHTEXTX_ITALIC_OFFSET UNITYSDK_OFFSET(0x1B71CB50)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LABEL_OFFSET UNITYSDK_OFFSET(0x1B71DED0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LARGEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E120)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LARGELABEL_OFFSET UNITYSDK_OFFSET(0x1B71DFB0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LARGE_OFFSET UNITYSDK_OFFSET(0x1B71C7D0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LIGHTBLUE_OFFSET UNITYSDK_OFFSET(0x1B71D1D0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_LIME_OFFSET UNITYSDK_OFFSET(0x1B71D240)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MAGENTA_OFFSET UNITYSDK_OFFSET(0x1B71D2B0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MAROON_OFFSET UNITYSDK_OFFSET(0x1B71D320)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B71D780)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MIDDLE_OFFSET UNITYSDK_OFFSET(0x1B71C970)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MINIBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E0A0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_MINILABEL_OFFSET UNITYSDK_OFFSET(0x1B71DF40)
#define FOUNDATION_RICHTEXT_RICHTEXTX_NAVY_OFFSET UNITYSDK_OFFSET(0x1B71D390)
#define FOUNDATION_RICHTEXT_RICHTEXTX_OLIVE_OFFSET UNITYSDK_OFFSET(0x1B71D400)
#define FOUNDATION_RICHTEXT_RICHTEXTX_ORANGE_OFFSET UNITYSDK_OFFSET(0x1B71D470)
#define FOUNDATION_RICHTEXT_RICHTEXTX_PURPLE_OFFSET UNITYSDK_OFFSET(0x1B71D4E0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_QUAD_1_OFFSET UNITYSDK_OFFSET(0x1B71DDC0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_QUAD_OFFSET UNITYSDK_OFFSET(0x1B71D8D0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_RED_OFFSET UNITYSDK_OFFSET(0x1B71D550)
#define FOUNDATION_RICHTEXT_RICHTEXTX_SILVER_OFFSET UNITYSDK_OFFSET(0x1B71D5C0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_SIZE_OFFSET UNITYSDK_OFFSET(0x1B71C820)
#define FOUNDATION_RICHTEXT_RICHTEXTX_SMALL_OFFSET UNITYSDK_OFFSET(0x1B71C9C0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_TEAL_OFFSET UNITYSDK_OFFSET(0x1B71D630)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E410)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITELABEL_OFFSET UNITYSDK_OFFSET(0x1B71E1A0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITELARGEBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E5B0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITELARGELABEL_OFFSET UNITYSDK_OFFSET(0x1B71E270)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITEMINIBOLDLABEL_OFFSET UNITYSDK_OFFSET(0x1B71E4E0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITEMINILABEL_OFFSET UNITYSDK_OFFSET(0x1B71E340)
#define FOUNDATION_RICHTEXT_RICHTEXTX_WHITE_OFFSET UNITYSDK_OFFSET(0x1B71D6A0)
#define FOUNDATION_RICHTEXT_RICHTEXTX_YELLOW_OFFSET UNITYSDK_OFFSET(0x1B71D710)

namespace Foundation::RichText
{
	inline static constexpr unsigned int RichTextX_TypeDefinitionIndex = 8072;

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
