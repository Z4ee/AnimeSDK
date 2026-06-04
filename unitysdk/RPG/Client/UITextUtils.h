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
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_UITEXTUTILS_CONVERTCHINESECH_OFFSET UNITYSDK_OFFSET(0xCB9CF20)
#define RPG_CLIENT_UITEXTUTILS_DOSEARCHSTRING_OFFSET UNITYSDK_OFFSET(0xCB9CE60)
#define RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXTWITHATMOSTTWOFULLNAMEUNITS_OFFSET UNITYSDK_OFFSET(0xCB9D3D0)
#define RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXT_OFFSET UNITYSDK_OFFSET(0xCB9CF60)
#define RPG_CLIENT_UITEXTUTILS_GETROMANNUMBERTEXTID_OFFSET UNITYSDK_OFFSET(0xCB9D480)
#define RPG_CLIENT_UITEXTUTILS_WRAP_OFFSET UNITYSDK_OFFSET(0xCB9C730)
#define RPG_CLIENT_UITEXTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB9EC50)
#define RPG_CLIENT_UITEXTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xCB9EC40)
#define RPG_CLIENT_UITEXTUTILS__GENERATESTRINGINDEXTOBODYHEADINDEXMAP_OFFSET UNITYSDK_OFFSET(0xCB9DB20)
#define RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHCOMPLETEBODY_OFFSET UNITYSDK_OFFSET(0xCB9E5C0)
#define RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHLEGALHEAD_OFFSET UNITYSDK_OFFSET(0xCB9E670)
#define RPG_CLIENT_UITEXTUTILS__GETWRAPPEDTEXTCONTENT_OFFSET UNITYSDK_OFFSET(0xCB9E100)
#define RPG_CLIENT_UITEXTUTILS__INITTEXTADJUSTEDCONFIG_OFFSET UNITYSDK_OFFSET(0xCB9C9A0)
#define RPG_CLIENT_UITEXTUTILS__ISHEADOFBODY_OFFSET UNITYSDK_OFFSET(0xCB9EBB0)
#define RPG_CLIENT_UITEXTUTILS__POPULATENEWLINES_OFFSET UNITYSDK_OFFSET(0xCB9E920)
#define RPG_CLIENT_UITEXTUTILS__RESETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xCB9D950)
#define RPG_CLIENT_UITEXTUTILS__SETSTRINGINDEXTOBODYHEADINDEXMAP_OFFSET UNITYSDK_OFFSET(0xCB9EA90)
#define RPG_CLIENT_UITEXTUTILS__SETTEXTINVISIBLE_OFFSET UNITYSDK_OFFSET(0xCB9CCC0)
#define RPG_CLIENT_UITEXTUTILS__SETTEXTWRAPPED_OFFSET UNITYSDK_OFFSET(0xCB9D530)

namespace RPG::Client
{
	inline static constexpr unsigned int UITextUtils_TypeDefinitionIndex = 68341;

	class UITextUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::TextGenerationSettings* StaticGet__TextSetting()
		{
			return (::UnityEngine::TextGenerationSettings*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x60C50);
		}
		static ::System::Text::StringBuilder** StaticGet__TextStringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x60CB8);
		}
		static ::System::String** StaticGet__AvoidAtStartLineCharacters()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x60CC0);
		}
		static ::UnityEngine::TextGenerator** StaticGet__TextGenerator()
		{
			return (::UnityEngine::TextGenerator**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x60CC8);
		}
		static ::Il2CppArray<::System::Text::RegularExpressions::Regex*>** StaticGet__Regexs()
		{
			return (::Il2CppArray<::System::Text::RegularExpressions::Regex*>**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x60CD0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet__OriginalColors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x60CD8);
		}
		static ::System::Collections::BitArray** StaticGet__StringIndexToBodyHeadIndex()
		{
			return (::System::Collections::BitArray**)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x60CE0);
		}
		static ::System::Int32* StaticGet__Offset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x12C70);
		}
		static ::System::Int32* StaticGet__BitmapLenth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x12C74);
		}
		static ::UnityEngine::Color* StaticGet__INVISIBLE_COLOR()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UITextUtils_TypeDefinitionIndex)->GetStaticField(0x12C78);
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

		static ::System::Void Wrap(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_WRAP_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* DoSearchString(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_DOSEARCHSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* ConvertChineseCh(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_CONVERTCHINESECH_OFFSET))(a1);
		}

		static ::System::String* GetRemainTimeText(::System::TimeSpan a1, ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::RPG::Client::UITextUtils_RemainTimeUnitTextPalette*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetRemainTimeTextWithAtMostTwoFullnameUnits(::System::TimeSpan a1)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_GETREMAINTIMETEXTWITHATMOSTTWOFULLNAMEUNITS_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetRomanNumberTextID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS_GETROMANNUMBERTEXTID_OFFSET))(a1);
		}

		static ::System::Void _InitTextAdjustedConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__INITTEXTADJUSTEDCONFIG_OFFSET))();
		}

		static ::System::Void _SetTextWrapped(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__SETTEXTWRAPPED_OFFSET))(a1);
		}

		static ::System::String* _GetWrappedTextContent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GETWRAPPEDTEXTCONTENT_OFFSET))();
		}

		static ::System::Void _SetTextInvisible(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__SETTEXTINVISIBLE_OFFSET))(a1);
		}

		static ::System::Void _ResetTextColor(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__RESETTEXTCOLOR_OFFSET))(a1);
		}

		static ::System::Boolean _GenerateStringIndexToBodyHeadIndexMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GENERATESTRINGINDEXTOBODYHEADINDEXMAP_OFFSET))();
		}

		static ::System::Void _SetStringIndexToBodyHeadIndexMap(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__SETSTRINGINDEXTOBODYHEADINDEXMAP_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 _GetNewLineIndexWithCompleteBody(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHCOMPLETEBODY_OFFSET))(a1, a2);
		}

		static ::System::Int32 _GetNewLineIndexWithLegalHead(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__GETNEWLINEINDEXWITHLEGALHEAD_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsHeadOfBody(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__ISHEADOFBODY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* _PopulateNewLines(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS__POPULATENEWLINES_OFFSET))(a1);
		}
	};
}
