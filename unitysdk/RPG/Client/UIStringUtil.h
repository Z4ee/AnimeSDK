#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UISymbolFilterSource.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LocalizedInputField; }
namespace RPG::GameCore { class VoiceConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_UISTRINGUTIL_CHECKNAMELENGTHVALID_OFFSET UNITYSDK_OFFSET(0x17B95490)
#define RPG_CLIENT_UISTRINGUTIL_CONTAINCHAR_OFFSET UNITYSDK_OFFSET(0x17B955C0)
#define RPG_CLIENT_UISTRINGUTIL_GETMULTITEXTKEEPTIME_OFFSET UNITYSDK_OFFSET(0x17B97ED0)
#define RPG_CLIENT_UISTRINGUTIL_GETNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x17B953C0)
#define RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_1_OFFSET UNITYSDK_OFFSET(0x17B98940)
#define RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_OFFSET UNITYSDK_OFFSET(0x17B98850)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTINTERVALTIME_OFFSET UNITYSDK_OFFSET(0x17B986E0)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTPLAYINGTIME_OFFSET UNITYSDK_OFFSET(0x17B98510)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTSPEED_OFFSET UNITYSDK_OFFSET(0x17B978C0)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTTIMES_OFFSET UNITYSDK_OFFSET(0x17B98320)
#define RPG_CLIENT_UISTRINGUTIL_GETTALKTEXTSPEED_OFFSET UNITYSDK_OFFSET(0x17B976C0)
#define RPG_CLIENT_UISTRINGUTIL_GETTEXTSWITCHKEEPTIME_OFFSET UNITYSDK_OFFSET(0x17B97D50)
#define RPG_CLIENT_UISTRINGUTIL_GETUIDFROMINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x17B97440)
#define RPG_CLIENT_UISTRINGUTIL_GETUNICODELENGTH_OFFSET UNITYSDK_OFFSET(0x17B98BD0)
#define RPG_CLIENT_UISTRINGUTIL_GETVALIDINPUTCONTENT_OFFSET UNITYSDK_OFFSET(0x17B95720)
#define RPG_CLIENT_UISTRINGUTIL_HALFWIDTHALPHANUMERICFILTER_OFFSET UNITYSDK_OFFSET(0x17B98C20)
#define RPG_CLIENT_UISTRINGUTIL_ISCHARVALID_OFFSET UNITYSDK_OFFSET(0x17B97270)
#define RPG_CLIENT_UISTRINGUTIL_ISNOVOICEBAKEDMOUTH_OFFSET UNITYSDK_OFFSET(0x17B98B80)
#define RPG_CLIENT_UISTRINGUTIL_SPLIT_OFFSET UNITYSDK_OFFSET(0x17B95650)
#define RPG_CLIENT_UISTRINGUTIL_UIINPUTSTRINGFILTER_OFFSET UNITYSDK_OFFSET(0x17B98C80)
#define RPG_CLIENT_UISTRINGUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B98FF0)
#define RPG_CLIENT_UISTRINGUTIL__COUNTCHARWITHOUTRICHTEXTTAGS_OFFSET UNITYSDK_OFFSET(0x17B975B0)
#define RPG_CLIENT_UISTRINGUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17B98FE0)
#define RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTINTERVALTIME_OFFSET UNITYSDK_OFFSET(0x17B97A50)
#define RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTPLAYINGTIME_OFFSET UNITYSDK_OFFSET(0x17B97850)
#define RPG_CLIENT_UISTRINGUTIL__GETTEXTSWITCHKEEPTIME_OFFSET UNITYSDK_OFFSET(0x17B97C70)
#define RPG_CLIENT_UISTRINGUTIL__INITINVALIDINPUTCONFIG_OFFSET UNITYSDK_OFFSET(0x17B95940)
#define RPG_CLIENT_UISTRINGUTIL__ISOTHERSYMBOL_OFFSET UNITYSDK_OFFSET(0x17B973D0)
#define RPG_CLIENT_UISTRINGUTIL__REMOVEINVALIDCHAR_OFFSET UNITYSDK_OFFSET(0x17B97100)
#define RPG_CLIENT_UISTRINGUTIL__REMOVEINVALIDSTRING_OFFSET UNITYSDK_OFFSET(0x17B96F10)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDCHARACTER_OFFSET UNITYSDK_OFFSET(0x17B974B0)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDRUBY_OFFSET UNITYSDK_OFFSET(0x17B95F10)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDSINGLETAG_OFFSET UNITYSDK_OFFSET(0x17B968D0)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDTAGPAIR_OFFSET UNITYSDK_OFFSET(0x17B96250)

namespace RPG::Client
{
	inline static constexpr unsigned int UIStringUtil_TypeDefinitionIndex = 73086;

	class UIStringUtil : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__SingleRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x63230);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__InvalidTagPairList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x63238);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__InvalidStringList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x63240);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RubyRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x63248);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__InvalidSingleTagList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x63250);
		}
		static ::System::Text::StringBuilder** StaticGet__StringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x63258);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__TagPairRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x63260);
		}
		// static const ::System::String* _TAG_PAIR_PATTERN; // 0x0
		// static const ::System::String* _SINGLE_TAG_PATTERN; // 0x0
		// static const ::System::String* _RUBY_PATTERN; // 0x0
		// static const ::System::String* _TAG_PAIR_CONFIG_INDEX; // 0x0
		// static const ::System::String* _SINGLE_TAG_CONFIG_INDEX; // 0x0
		// static const ::System::String* _INVALID_STRING_CONFIG_INDEX; // 0x0
		// static const ::System::Char _SHIELD_SYMBOL; // 0x0
		// static const ::System::Char _CONST_LIST_SPLIT_SYMBOL; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetNameLength(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETNAMELENGTH_OFFSET))(a1);
		}

		static ::System::Boolean CheckNameLengthValid(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_CHECKNAMELENGTHVALID_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainChar(::System::String* a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_CONTAINCHAR_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* Split(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_SPLIT_OFFSET))(a1, a2);
		}

		static ::System::String* GetValidInputContent(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETVALIDINPUTCONTENT_OFFSET))(a1);
		}

		static ::System::Boolean IsCharValid(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_ISCHARVALID_OFFSET))(a1);
		}

		static ::System::UInt32 GetUIDFromInputField(::RPG::Client::LocalizedInputField* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::LocalizedInputField*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETUIDFROMINPUTFIELD_OFFSET))(a1);
		}

		static ::System::Boolean _IsOtherSymbol(::System::Char a1, ::System::Globalization::UnicodeCategory a2)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Globalization::UnicodeCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__ISOTHERSYMBOL_OFFSET))(a1, a2);
		}

		static ::System::Void _ReplaceInvalidRuby()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDRUBY_OFFSET))();
		}

		static ::System::Void _ReplaceInvalidTagPair()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDTAGPAIR_OFFSET))();
		}

		static ::System::Void _ReplaceInvalidSingleTag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDSINGLETAG_OFFSET))();
		}

		static ::System::Void _RemoveInvalidString()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__REMOVEINVALIDSTRING_OFFSET))();
		}

		static ::System::Void _RemoveInvalidChar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__REMOVEINVALIDCHAR_OFFSET))();
		}

		static ::System::Void _ReplaceInvalidCharacter(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDCHARACTER_OFFSET))(a1, a2);
		}

		static ::System::Void _InitInvalidInputConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__INITINVALIDINPUTCONFIG_OFFSET))();
		}

		static ::System::Int32 _CountCharWithoutRichTextTags(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__COUNTCHARWITHOUTRICHTEXTTAGS_OFFSET))(a1);
		}

		static ::System::Single GetTalkTextSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETTALKTEXTSPEED_OFFSET))();
		}

		static ::System::Single _GetSimpleTalkTextPlayingTime(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTPLAYINGTIME_OFFSET))(a1, a2);
		}

		static ::System::Single _GetSimpleTalkTextIntervalTime(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTINTERVALTIME_OFFSET))(a1, a2);
		}

		static ::System::Single _GetTextSwitchKeepTime(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__GETTEXTSWITCHKEEPTIME_OFFSET))(a1, a2);
		}

		static ::System::Single GetTextSwitchKeepTime(::RPG::Client::TextID a1)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETTEXTSWITCHKEEPTIME_OFFSET))(a1);
		}

		static ::System::Single GetMultiTextKeepTime(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETMULTITEXTKEEPTIME_OFFSET))(a1);
		}

		static ::System::Void GetSimpleTalkTextTimes(::RPG::Client::TextID a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTTIMES_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetSimpleTalkTextPlayingTime(::RPG::Client::TextID a1)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTPLAYINGTIME_OFFSET))(a1);
		}

		static ::System::Single GetSimpleTalkTextIntervalTime(::RPG::Client::TextID a1)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTINTERVALTIME_OFFSET))(a1);
		}

		static ::System::Single GetSimpleTalkTextSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTSPEED_OFFSET))();
		}

		static ::System::Single GetNoVoiceBakedMouthDuration(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_OFFSET))(a1);
		}

		static ::System::Boolean IsNoVoiceBakedMouth(::RPG::GameCore::VoiceConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_ISNOVOICEBAKEDMOUTH_OFFSET))(a1);
		}

		static ::System::Single GetNoVoiceBakedMouthDuration_1(::System::UInt32 a1, ::RPG::GameCore::VoiceConfigRow* a2)
		{
			return ((::System::Single(*)(::System::UInt32, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetUnicodeLength(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETUNICODELENGTH_OFFSET))(a1);
		}

		static ::System::String* HalfWidthAlphanumericFilter(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_HALFWIDTHALPHANUMERICFILTER_OFFSET))(a1);
		}

		static ::System::String* UIInputStringFilter(::RPG::Client::UISymbolFilterSource a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::Client::UISymbolFilterSource, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_UIINPUTSTRINGFILTER_OFFSET))(a1, a2);
		}
	};
}
