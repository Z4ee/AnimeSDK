#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UILineInfo.h"

namespace RPG::Client { class UITextUtils_RemainTimeUnitTextPalette; }
namespace System { class String; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_UITEXTUTILS_CONVERTCHINESECH_OFFSET UNITYSDK_OFFSET(0xA7385E0)
#define RPG_CLIENT_UITEXTUTILS_DOSEARCHSTRING_OFFSET UNITYSDK_OFFSET(0xA738500)
#define RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXTWITHATMOSTTWOFULLNAMEUNITS_OFFSET UNITYSDK_OFFSET(0xA738A90)
#define RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXT_OFFSET UNITYSDK_OFFSET(0xA738620)
#define RPG_CLIENT_UITEXTUTILS_GETROMANNUMBERTEXTID_OFFSET UNITYSDK_OFFSET(0xA738B40)
#define RPG_CLIENT_UITEXTUTILS_WRAP_OFFSET UNITYSDK_OFFSET(0xA737DD0)
#define RPG_CLIENT_UITEXTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA73A330)
#define RPG_CLIENT_UITEXTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xA73A320)
#define RPG_CLIENT_UITEXTUTILS__GENERATESTRINGINDEXTOBODYHEADINDEXMAP_OFFSET UNITYSDK_OFFSET(0xA7391E0)
#define RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHCOMPLETEBODY_OFFSET UNITYSDK_OFFSET(0xA739CC0)
#define RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHLEGALHEAD_OFFSET UNITYSDK_OFFSET(0xA739D70)
#define RPG_CLIENT_UITEXTUTILS__GETWRAPPEDTEXTCONTENT_OFFSET UNITYSDK_OFFSET(0xA739800)
#define RPG_CLIENT_UITEXTUTILS__INITTEXTADJUSTEDCONFIG_OFFSET UNITYSDK_OFFSET(0xA738030)
#define RPG_CLIENT_UITEXTUTILS__ISHEADOFBODY_OFFSET UNITYSDK_OFFSET(0xA73A290)
#define RPG_CLIENT_UITEXTUTILS__POPULATENEWLINES_OFFSET UNITYSDK_OFFSET(0xA73A000)
#define RPG_CLIENT_UITEXTUTILS__RESETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xA739000)
#define RPG_CLIENT_UITEXTUTILS__SETSTRINGINDEXTOBODYHEADINDEXMAP_OFFSET UNITYSDK_OFFSET(0xA73A170)
#define RPG_CLIENT_UITEXTUTILS__SETTEXTINVISIBLE_OFFSET UNITYSDK_OFFSET(0xA7383A0)
#define RPG_CLIENT_UITEXTUTILS__SETTEXTWRAPPED_OFFSET UNITYSDK_OFFSET(0xA738BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int UITextUtils_TypeDefinitionIndex = 59991;

	class UITextUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::TextGenerator** StaticGet__TextGenerator()
		{
			return (::UnityEngine::TextGenerator**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x36B90);
		}
		static ::System::Collections::BitArray** StaticGet__StringIndexToBodyHeadIndex()
		{
			return (::System::Collections::BitArray**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x36B98);
		}
		static ::System::Text::StringBuilder** StaticGet__TextStringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x36BA0);
		}
		static ::UnityEngine::TextGenerationSettings* StaticGet__TextSetting()
		{
			return (::UnityEngine::TextGenerationSettings*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x36BA8);
		}
		static ::Il2CppArray<::System::Text::RegularExpressions::Regex*>** StaticGet__Regexs()
		{
			return (::Il2CppArray<::System::Text::RegularExpressions::Regex*>**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x36C10);
		}
		static ::System::String** StaticGet__AvoidAtStartLineCharacters()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x36C18);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet__OriginalColors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x36C20);
		}
		static ::UnityEngine::Color* StaticGet__INVISIBLE_COLOR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x10EE0);
		}
		static ::System::Int32* StaticGet__BitmapLenth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x10EF0);
		}
		static ::System::Int32* StaticGet__Offset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x10EF4);
		}
		// static const ::System::Char _NEWLINE_CHARACTER; // 0x0
		// static const ::System::String* _CHINESE_TEXT_LANGUAGE; // 0x0
		// static const ::System::String* _TEXT_FORMAT_SYMBOL_INDEX; // 0x0
		// static const ::System::Int32 _MAX_CHAR_NUM = 0x3E8; // 0x0
		// static const ::System::String* _NUMBER_REGEX; // 0x0
		// static const ::System::String* _RICH_TEXT_REGEX; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void Wrap(::UnityEngine::UI::Text* reformatText)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_WRAP_OFFSET))(reformatText);
		}

		static ::Il2CppArray<::System::Int32>* DoSearchString(::System::String* origin, ::System::String* pattern)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_DOSEARCHSTRING_OFFSET))(origin, pattern);
		}

		static ::System::String* ConvertChineseCh(::System::String* originText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_CONVERTCHINESECH_OFFSET))(originText);
		}

		static ::System::String* GetRemainTimeText(::System::TimeSpan remainTime, ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette* textPalette, ::System::Int32 maxUnitCount)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXT_OFFSET))(remainTime, textPalette, maxUnitCount);
		}

		static ::System::String* GetRemainTimeTextWithAtMostTwoFullnameUnits(::System::TimeSpan remainTime)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXTWITHATMOSTTWOFULLNAMEUNITS_OFFSET))(remainTime);
		}

		static ::RPG::Client::TextID GetRomanNumberTextID(::System::UInt32 number)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_GETROMANNUMBERTEXTID_OFFSET))(number);
		}

		static ::System::Void _InitTextAdjustedConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__INITTEXTADJUSTEDCONFIG_OFFSET))();
		}

		static ::System::Void _SetTextWrapped(::UnityEngine::UI::Text* reformatText)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__SETTEXTWRAPPED_OFFSET))(reformatText);
		}

		static ::System::String* _GetWrappedTextContent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GETWRAPPEDTEXTCONTENT_OFFSET))();
		}

		static ::System::Void _SetTextInvisible(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__SETTEXTINVISIBLE_OFFSET))(text);
		}

		static ::System::Void _ResetTextColor(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__RESETTEXTCOLOR_OFFSET))(text);
		}

		static ::System::Boolean _GenerateStringIndexToBodyHeadIndexMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GENERATESTRINGINDEXTOBODYHEADINDEXMAP_OFFSET))();
		}

		static ::System::Void _SetStringIndexToBodyHeadIndexMap(::System::Int32 index, ::System::Int32 length, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__SETSTRINGINDEXTOBODYHEADINDEXMAP_OFFSET))(index, length, value);
		}

		static ::System::Int32 _GetNewLineIndexWithCompleteBody(::System::Int32 startCharIndex, ::System::Int32 lastStartCharIndex)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHCOMPLETEBODY_OFFSET))(startCharIndex, lastStartCharIndex);
		}

		static ::System::Int32 _GetNewLineIndexWithLegalHead(::System::Int32 startCharIndex, ::System::Int32 lastStartCharIndex)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHLEGALHEAD_OFFSET))(startCharIndex, lastStartCharIndex);
		}

		static ::System::Boolean _IsHeadOfBody(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__ISHEADOFBODY_OFFSET))(index);
		}

		static ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* _PopulateNewLines(::System::Int32 insertIndex)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__POPULATENEWLINES_OFFSET))(insertIndex);
		}
	};
}
