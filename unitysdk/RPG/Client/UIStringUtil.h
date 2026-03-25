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

#define RPG_CLIENT_UISTRINGUTIL_CHECKNAMELENGTHVALID_OFFSET UNITYSDK_OFFSET(0xA7341E0)
#define RPG_CLIENT_UISTRINGUTIL_CONTAINCHAR_OFFSET UNITYSDK_OFFSET(0xA734310)
#define RPG_CLIENT_UISTRINGUTIL_GETMULTITEXTKEEPTIME_OFFSET UNITYSDK_OFFSET(0xA736A50)
#define RPG_CLIENT_UISTRINGUTIL_GETNAMELENGTH_OFFSET UNITYSDK_OFFSET(0xA734110)
#define RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_1_OFFSET UNITYSDK_OFFSET(0xA7374E0)
#define RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_OFFSET UNITYSDK_OFFSET(0xA7373F0)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTINTERVALTIME_OFFSET UNITYSDK_OFFSET(0xA737280)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTPLAYINGTIME_OFFSET UNITYSDK_OFFSET(0xA7370B0)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTSPEED_OFFSET UNITYSDK_OFFSET(0xA736460)
#define RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTTIMES_OFFSET UNITYSDK_OFFSET(0xA736EC0)
#define RPG_CLIENT_UISTRINGUTIL_GETTALKTEXTSPEED_OFFSET UNITYSDK_OFFSET(0xA736260)
#define RPG_CLIENT_UISTRINGUTIL_GETTEXTSWITCHKEEPTIME_OFFSET UNITYSDK_OFFSET(0xA7368D0)
#define RPG_CLIENT_UISTRINGUTIL_GETUIDFROMINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xA735FE0)
#define RPG_CLIENT_UISTRINGUTIL_GETUNICODELENGTH_OFFSET UNITYSDK_OFFSET(0xA737790)
#define RPG_CLIENT_UISTRINGUTIL_GETVALIDINPUTCONTENT_OFFSET UNITYSDK_OFFSET(0xA734480)
#define RPG_CLIENT_UISTRINGUTIL_HALFWIDTHALPHANUMERICFILTER_OFFSET UNITYSDK_OFFSET(0xA7377E0)
#define RPG_CLIENT_UISTRINGUTIL_ISCHARVALID_OFFSET UNITYSDK_OFFSET(0xA735E90)
#define RPG_CLIENT_UISTRINGUTIL_ISNOVOICEBAKEDMOUTH_OFFSET UNITYSDK_OFFSET(0xA737740)
#define RPG_CLIENT_UISTRINGUTIL_SPLIT_OFFSET UNITYSDK_OFFSET(0xA7343A0)
#define RPG_CLIENT_UISTRINGUTIL_UIINPUTSTRINGFILTER_OFFSET UNITYSDK_OFFSET(0xA737840)
#define RPG_CLIENT_UISTRINGUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xA737A40)
#define RPG_CLIENT_UISTRINGUTIL__COUNTCHARWITHOUTRICHTEXTTAGS_OFFSET UNITYSDK_OFFSET(0xA736150)
#define RPG_CLIENT_UISTRINGUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xA737A30)
#define RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTINTERVALTIME_OFFSET UNITYSDK_OFFSET(0xA7365F0)
#define RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTPLAYINGTIME_OFFSET UNITYSDK_OFFSET(0xA7363F0)
#define RPG_CLIENT_UISTRINGUTIL__GETTEXTSWITCHKEEPTIME_OFFSET UNITYSDK_OFFSET(0xA7367F0)
#define RPG_CLIENT_UISTRINGUTIL__INITINVALIDINPUTCONFIG_OFFSET UNITYSDK_OFFSET(0xA7346A0)
#define RPG_CLIENT_UISTRINGUTIL__ISOTHERSYMBOL_OFFSET UNITYSDK_OFFSET(0xA735F70)
#define RPG_CLIENT_UISTRINGUTIL__REMOVEINVALIDCHAR_OFFSET UNITYSDK_OFFSET(0xA735D20)
#define RPG_CLIENT_UISTRINGUTIL__REMOVEINVALIDSTRING_OFFSET UNITYSDK_OFFSET(0xA735B30)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDCHARACTER_OFFSET UNITYSDK_OFFSET(0xA736050)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDRUBY_OFFSET UNITYSDK_OFFSET(0xA734CC0)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDSINGLETAG_OFFSET UNITYSDK_OFFSET(0xA735580)
#define RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDTAGPAIR_OFFSET UNITYSDK_OFFSET(0xA734F90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIStringUtil_TypeDefinitionIndex = 59990;

	class UIStringUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__InvalidStringList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x36960);
		}
		static ::System::Text::StringBuilder** StaticGet__StringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x36968);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__SingleRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x36970);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__TagPairRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x36978);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RubyRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x36980);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__InvalidTagPairList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x36988);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__InvalidSingleTagList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStringUtil_TypeDefinitionIndex)->GetStaticField(0x36990);
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

		static ::System::Int32 GetNameLength(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETNAMELENGTH_OFFSET))(name);
		}

		static ::System::Boolean CheckNameLengthValid(::System::String* name, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_CHECKNAMELENGTHVALID_OFFSET))(name, length);
		}

		static ::System::Boolean ContainChar(::System::String* name, ::System::Char target)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_CONTAINCHAR_OFFSET))(name, target);
		}

		static ::Il2CppArray<::System::String*>* Split(::System::String* target, ::System::String* separator)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_SPLIT_OFFSET))(target, separator);
		}

		static ::System::String* GetValidInputContent(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETVALIDINPUTCONTENT_OFFSET))(input);
		}

		static ::System::Boolean IsCharValid(::System::Char target)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_ISCHARVALID_OFFSET))(target);
		}

		static ::System::UInt32 GetUIDFromInputField(::RPG::Client::LocalizedInputField* inputField)
		{
			return ((::System::UInt32(*)(::RPG::Client::LocalizedInputField*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETUIDFROMINPUTFIELD_OFFSET))(inputField);
		}

		static ::System::Boolean _IsOtherSymbol(::System::Char target, ::System::Globalization::UnicodeCategory type)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Globalization::UnicodeCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__ISOTHERSYMBOL_OFFSET))(target, type);
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

		static ::System::Void _ReplaceInvalidCharacter(::System::Int32 index, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__REPLACEINVALIDCHARACTER_OFFSET))(index, length);
		}

		static ::System::Void _InitInvalidInputConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__INITINVALIDINPUTCONFIG_OFFSET))();
		}

		static ::System::Int32 _CountCharWithoutRichTextTags(::System::String* text)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__COUNTCHARWITHOUTRICHTEXTTAGS_OFFSET))(text);
		}

		static ::System::Single GetTalkTextSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETTALKTEXTSPEED_OFFSET))();
		}

		static ::System::Single _GetSimpleTalkTextPlayingTime(::System::Int32 charCount, ::System::String* languageMark)
		{
			return ((::System::Single(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTPLAYINGTIME_OFFSET))(charCount, languageMark);
		}

		static ::System::Single _GetSimpleTalkTextIntervalTime(::System::Int32 charCount, ::System::String* languageMark)
		{
			return ((::System::Single(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__GETSIMPLETALKTEXTINTERVALTIME_OFFSET))(charCount, languageMark);
		}

		static ::System::Single _GetTextSwitchKeepTime(::System::String* text, ::System::String* languageMark)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL__GETTEXTSWITCHKEEPTIME_OFFSET))(text, languageMark);
		}

		static ::System::Single GetTextSwitchKeepTime(::RPG::Client::TextID textID)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETTEXTSWITCHKEEPTIME_OFFSET))(textID);
		}

		static ::System::Single GetMultiTextKeepTime(::System::Collections::Generic::List_1<::RPG::Client::TextID>* textIDList)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETMULTITEXTKEEPTIME_OFFSET))(textIDList);
		}

		static ::System::Void GetSimpleTalkTextTimes(::RPG::Client::TextID textID, ::System::Single& textTime, ::System::Single& intervalTime)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTTIMES_OFFSET))(textID, textTime, intervalTime);
		}

		static ::System::Single GetSimpleTalkTextPlayingTime(::RPG::Client::TextID textID)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTPLAYINGTIME_OFFSET))(textID);
		}

		static ::System::Single GetSimpleTalkTextIntervalTime(::RPG::Client::TextID textID)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTINTERVALTIME_OFFSET))(textID);
		}

		static ::System::Single GetSimpleTalkTextSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETSIMPLETALKTEXTSPEED_OFFSET))();
		}

		static ::System::Single GetNoVoiceBakedMouthDuration(::System::UInt32 talkSentenceID)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_OFFSET))(talkSentenceID);
		}

		static ::System::Boolean IsNoVoiceBakedMouth(::RPG::GameCore::VoiceConfigRow* voiceRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_ISNOVOICEBAKEDMOUTH_OFFSET))(voiceRow);
		}

		static ::System::Single GetNoVoiceBakedMouthDuration_1(::System::UInt32 talkSentenceID, ::RPG::GameCore::VoiceConfigRow* voiceRow)
		{
			return ((::System::Single(*)(::System::UInt32, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETNOVOICEBAKEDMOUTHDURATION_1_OFFSET))(talkSentenceID, voiceRow);
		}

		static ::System::Int32 GetUnicodeLength(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_GETUNICODELENGTH_OFFSET))(str);
		}

		static ::System::String* HalfWidthAlphanumericFilter(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_HALFWIDTHALPHANUMERICFILTER_OFFSET))(str);
		}

		static ::System::String* UIInputStringFilter(::RPG::Client::UISymbolFilterSource source, ::System::String* str)
		{
			return ((::System::String*(*)(::RPG::Client::UISymbolFilterSource, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTRINGUTIL_UIINPUTSTRINGFILTER_OFFSET))(source, str);
		}
	};
}
