#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_8.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_815;
class Class_1_1A781135C1474CFC;
class Class_1_22FD04463B24D28E;
namespace RPG::Client { class TextIcons; }
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0xB2D9B40)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILELOCALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xB2D9EB0)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEMOTIONRUBY_OFFSET UNITYSDK_OFFSET(0xB2D4D00)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEREPEATUNIT_OFFSET UNITYSDK_OFFSET(0xB2D9850)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILERUBY_OFFSET UNITYSDK_OFFSET(0xB2D44E0)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXTICONS_OFFSET UNITYSDK_OFFSET(0xB2D6A20)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXT_OFFSET UNITYSDK_OFFSET(0xB2D8DA0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETANDCOMPILETEXT_OFFSET UNITYSDK_OFFSET(0xB2D86D0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETFLOATFORMATSTR_OFFSET UNITYSDK_OFFSET(0xB2D8C00)
#define RPG_CLIENT_TEXTMAPSTATIC_GETNUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0xB2D8C90)
#define RPG_CLIENT_TEXTMAPSTATIC_GETPERCENTSYMBOLSTR_OFFSET UNITYSDK_OFFSET(0xB2D8AD0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETRUBYNBSPTEXT_OFFSET UNITYSDK_OFFSET(0xB2D5390)
#define RPG_CLIENT_TEXTMAPSTATIC_GETSIMPLETEXT_OFFSET UNITYSDK_OFFSET(0xB2D7C20)
#define RPG_CLIENT_TEXTMAPSTATIC_GETTEXTWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xB2C6610)
#define RPG_CLIENT_TEXTMAPSTATIC_GETTEXT_OFFSET UNITYSDK_OFFSET(0xB2A8C70)
#define RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTNONEPARAMPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xB2D7980)
#define RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xB2D73F0)
#define RPG_CLIENT_TEXTMAPSTATIC_HASRUBY_OFFSET UNITYSDK_OFFSET(0xB2D52C0)
#define RPG_CLIENT_TEXTMAPSTATIC_HASTEXTICON_OFFSET UNITYSDK_OFFSET(0xB2D7320)
#define RPG_CLIENT_TEXTMAPSTATIC_PROCESSMETRICPREFIX_OFFSET UNITYSDK_OFFSET(0xB2D8E50)
#define RPG_CLIENT_TEXTMAPSTATIC_REMOVERUBY_OFFSET UNITYSDK_OFFSET(0xB2D4A10)
#define RPG_CLIENT_TEXTMAPSTATIC_REMOVETEXTICONS_OFFSET UNITYSDK_OFFSET(0xB2D7260)
#define RPG_CLIENT_TEXTMAPSTATIC__CALCULATETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xB2D6580)
#define RPG_CLIENT_TEXTMAPSTATIC__CALCULATEWHITESPACETWIDTH_OFFSET UNITYSDK_OFFSET(0xB2D5420)
#define RPG_CLIENT_TEXTMAPSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2DA220)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERNINTERNAL_OFFSET UNITYSDK_OFFSET(0xB2D5630)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERN_OFFSET UNITYSDK_OFFSET(0xB2D4580)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILETEXTICONSPATTERN_OFFSET UNITYSDK_OFFSET(0xB2D6AA0)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILE_OFFSET UNITYSDK_OFFSET(0xB2D8940)
#define RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTNONEPARAMPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xB2D7A20)
#define RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xB2D7490)
#define RPG_CLIENT_TEXTMAPSTATIC__DOSELECTPATTERNPROCESS_OFFSET UNITYSDK_OFFSET(0xB2D4AB0)
#define RPG_CLIENT_TEXTMAPSTATIC__GENERATERUBYRESULT_OFFSET UNITYSDK_OFFSET(0xB2D5950)
#define RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xB2D97D0)
#define RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTTEXT_OFFSET UNITYSDK_OFFSET(0xB2D7E40)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic_TypeDefinitionIndex = 67195;

	class TextmapStatic : public ::System::Object
	{
	public:
		static ::Class_1_22FD04463B24D28E** StaticGet__DefaultProcessorManager()
		{
			return (::Class_1_22FD04463B24D28E**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196C0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexRuby()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196C8);
		}
		static ::System::IFormatProvider** StaticGet_cultureProvider()
		{
			return (::System::IFormatProvider**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196D0);
		}
		static ::System::String** StaticGet__RegexSpritesPattern()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196D8);
		}
		static ::System::String** StaticGet_UNBREAK_RUNTIME_TAG_END()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196E0);
		}
		static ::System::String** StaticGet__AnnoEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196E8);
		}
		static ::System::String** StaticGet__PattenTopStrBegin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196F0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_TEXT_ALL_CUSTOM_START()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x196F8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexMotion()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19700);
		}
		static ::System::String** StaticGet__PatternRubyEndAp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19708);
		}
		static ::System::String** StaticGet__PattenRubyBegin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19710);
		}
		static ::System::String** StaticGet__PatternRubyEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19718);
		}
		static ::Class_1_22FD04463B24D28E** StaticGet__DefaultNoneParamProcessorManager()
		{
			return (::Class_1_22FD04463B24D28E**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19720);
		}
		static ::System::String** StaticGet__PattenBtmStrEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19728);
		}
		static ::System::String** StaticGet_NickName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19730);
		}
		static ::System::String** StaticGet__RegexPatten()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19738);
		}
		static ::System::String** StaticGet_BirthDate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19740);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexSprites()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19748);
		}
		static ::System::String** StaticGet__PattenRubyEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19750);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_TEXT_CUSTOM_START()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19758);
		}
		static ::System::String** StaticGet_UNBREAK_RUNTIME_TAG_BEGIN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19760);
		}
		static ::System::String** StaticGet__PatternApRubyEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19768);
		}
		static ::System::String** StaticGet__RegexRubyPatten()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19770);
		}
		static ::System::String** StaticGet__PatternRubyBegin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x19778);
		}
		static ::System::Int32* StaticGet__Length_PattenRubyBegin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C20);
		}
		static ::System::Int32* StaticGet__Length_AnnoEnd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C24);
		}
		static ::RPG::Client::TextID* StaticGet_params2ID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C28);
		}
		static ::System::Int32* StaticGet__BottomStrFontSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C38);
		}
		static ::System::Int32* StaticGet__Length_PattenBtmStrEnd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C3C);
		}
		static ::System::Int32* StaticGet__Length_PattenTopStrBegin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C40);
		}
		static ::UnityEngine::Vector2* StaticGet__SettingSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C44);
		}
		static ::System::Int32* StaticGet__RubyFloatRoundDigits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C4C);
		}
		static ::System::Boolean* StaticGet__HoldSpaceForLongTopStr()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}
		static ::System::Single* StaticGet__WhiteSpaceWidth()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C54);
		}
		static ::System::Single* StaticGet__TopStrFontSizeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C58);
		}
		static ::System::Boolean* StaticGet__CalculateWidthWithResetScaleFactor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C5C);
		}
		static ::System::Boolean* StaticGet__AddAddtionalTag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C5D);
		}
		static ::System::Boolean* StaticGet_SimpleMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C5E);
		}
		static ::System::Boolean* StaticGet_IsFemale()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C5F);
		}
		static ::RPG::Client::TextID* StaticGet_params3ID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C60);
		}
		static ::RPG::Client::TextID* StaticGet_params1ID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x6C70);
		}
		// static const ::System::String* CUSTOM_START_FORMAT; // 0x0
		// static const ::System::String* NO_BREAK_SPACE_STR; // 0x0
		// static const ::System::String* FORMAT_CLOSE; // 0x0
		// static const ::System::String* FORMAT_F_OPEN; // 0x0
		// static const ::System::String* FORMAT_N_ZERO; // 0x0
		// static const ::System::String* ERROR_PREFIX; // 0x0
		// static const ::System::String* EMPTY_STRING; // 0x0
		// static const ::System::String* SPACE_STRING; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CCTOR_OFFSET))();
		}

		static ::System::String* CompileRuby(::System::String* textOrigin, ::UnityEngine::UI::Text* textCmpt, ::System::Boolean holdTopStrSpace, ::System::Single topStrSizeRatio)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILERUBY_OFFSET))(textOrigin, textCmpt, holdTopStrSpace, topStrSizeRatio);
		}

		static ::System::String* RemoveRuby(::System::String* textOrigin)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_REMOVERUBY_OFFSET))(textOrigin);
		}

		static ::System::String* CompileMotionRuby(::System::String* textOrigin, ::UnityEngine::UI::Text* textCmpt, ::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_8>*& rubyDatas, ::System::Boolean holdTopStrSpace, ::System::Single topStrSizeRatio)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_8>*&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEMOTIONRUBY_OFFSET))(textOrigin, textCmpt, rubyDatas, holdTopStrSpace, topStrSizeRatio);
		}

		static ::System::Boolean HasRuby(::System::String* textOrigin)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_HASRUBY_OFFSET))(textOrigin);
		}

		static ::System::String* GetRubyNBSPText(::System::String* textOrigin)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETRUBYNBSPTEXT_OFFSET))(textOrigin);
		}

		static ::System::String* _CompileRubyPattern(::System::String* text, ::UnityEngine::UI::Text* textCmpt, ::System::Boolean holdTopStrSpace, ::System::Single topStrSizeRatio, ::System::Boolean addInternalTag)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERN_OFFSET))(text, textCmpt, holdTopStrSpace, topStrSizeRatio, addInternalTag);
		}

		static ::System::String* _CompileRubyPatternInternal(::System::String* text, ::UnityEngine::UI::Text* textCmpt)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERNINTERNAL_OFFSET))(text, textCmpt);
		}

		static ::System::Single _CalculateTextWidth(::System::String* str, ::UnityEngine::UI::Text* textCmpt, ::UnityEngine::TextGenerator* textGenerator, ::System::Int32 fontSize)
		{
			return ((::System::Single(*)(::System::String*, ::UnityEngine::UI::Text*, ::UnityEngine::TextGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CALCULATETEXTWIDTH_OFFSET))(str, textCmpt, textGenerator, fontSize);
		}

		static ::System::Single _CalculateWhiteSpacetWidth(::UnityEngine::UI::Text* textCmpt, ::System::Int32 fontSize)
		{
			return ((::System::Single(*)(::UnityEngine::UI::Text*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CALCULATEWHITESPACETWIDTH_OFFSET))(textCmpt, fontSize);
		}

		static ::System::String* _GenerateRubyResult(::System::String* topStr, ::System::String* bottomStr, ::UnityEngine::UI::Text* textCmpt, ::System::Int32 bottomFontSize, ::System::Single topStrSizeRatio, ::System::Single whiteSpaceLength, ::System::Boolean holdTopStrSpace, ::System::Boolean addInternalTag)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::UnityEngine::UI::Text*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__GENERATERUBYRESULT_OFFSET))(topStr, bottomStr, textCmpt, bottomFontSize, topStrSizeRatio, whiteSpaceLength, holdTopStrSpace, addInternalTag);
		}

		static ::System::String* CompileTextIcons(::System::String* textOrigin, ::RPG::Client::TextIcons* textIconsCmpt)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::Client::TextIcons*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXTICONS_OFFSET))(textOrigin, textIconsCmpt);
		}

		static ::System::String* RemoveTextIcons(::System::String* textOrigin)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_REMOVETEXTICONS_OFFSET))(textOrigin);
		}

		static ::System::Boolean HasTextIcon(::System::String* textOrigin)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_HASTEXTICON_OFFSET))(textOrigin);
		}

		static ::System::String* _CompileTextIconsPattern(::System::String* text, ::RPG::Client::TextIcons* textIconsCmpt)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::Client::TextIcons*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILETEXTICONSPATTERN_OFFSET))(text, textIconsCmpt);
		}

		static ::Class_1_22FD04463B24D28E* get_DefaultProcessorManager()
		{
			return ((::Class_1_22FD04463B24D28E*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTPROCESSORMANAGER_OFFSET))();
		}

		static ::Class_1_22FD04463B24D28E* get_DefaultNoneParamProcessorManager()
		{
			return ((::Class_1_22FD04463B24D28E*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTNONEPARAMPROCESSORMANAGER_OFFSET))();
		}

		static ::Class_1_22FD04463B24D28E* _CreateDefaultProcessorManager()
		{
			return ((::Class_1_22FD04463B24D28E*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPROCESSORMANAGER_OFFSET))();
		}

		static ::Class_1_22FD04463B24D28E* _CreateDefaultNoneParamProcessorManager()
		{
			return ((::Class_1_22FD04463B24D28E*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTNONEPARAMPROCESSORMANAGER_OFFSET))();
		}

		static ::System::String* GetSimpleText(::RPG::Client::TextID id, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETSIMPLETEXT_OFFSET))(id, replaceParams);
		}

		static ::System::String* GetTextWithCustomSelectPattern(::RPG::Client::TextID id, ::System::Collections::Generic::List_1<::System::Boolean>* customSelect, ::Class_1_1A781135C1474CFC* compileMetadata, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::Class_1_1A781135C1474CFC*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETTEXTWITHCUSTOMSELECTPATTERN_OFFSET))(id, customSelect, compileMetadata, replaceParams);
		}

		static ::System::String* GetText(::RPG::Client::TextID id, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETTEXT_OFFSET))(id, replaceParams);
		}

		static ::System::String* GetAndCompileText(::RPG::Client::TextID id, ::Class_1_1A781135C1474CFC* compileMetadata, ::Class_1_22FD04463B24D28E* textProcessorManager, ::Class_0_16E4307DCC419505_815* contextProvider)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Class_1_1A781135C1474CFC*, ::Class_1_22FD04463B24D28E*, ::Class_0_16E4307DCC419505_815*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETANDCOMPILETEXT_OFFSET))(id, compileMetadata, textProcessorManager, contextProvider);
		}

		static ::System::String* GetPercentSymbolStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETPERCENTSYMBOLSTR_OFFSET))();
		}

		static ::System::String* GetFloatFormatStr(::System::Single value, ::System::String* format)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETFLOATFORMATSTR_OFFSET))(value, format);
		}

		static ::System::String* GetNumberDecimalSeparator()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETNUMBERDECIMALSEPARATOR_OFFSET))();
		}

		static ::System::String* CompileText(::System::String* text, ::System::Boolean hasParam, ::Il2CppArray<::System::Object*>* replaceParams)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXT_OFFSET))(text, hasParam, replaceParams);
		}

		static ::System::String* ProcessMetricPrefix(::System::Single value, ::System::String* strDigit)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_PROCESSMETRICPREFIX_OFFSET))(value, strDigit);
		}

		static ::System::String* _Compile(::System::String* text, ::Struct_2_A0005A7419DEF7CE sourceInfo, ::System::Boolean hasParam, ::Class_0_16E4307DCC419505_815* contextProvider, ::Class_1_1A781135C1474CFC* compileMetadata, ::Class_1_22FD04463B24D28E* textProcessorManager)
		{
			return ((::System::String*(*)(::System::String*, ::Struct_2_A0005A7419DEF7CE, ::System::Boolean, ::Class_0_16E4307DCC419505_815*, ::Class_1_1A781135C1474CFC*, ::Class_1_22FD04463B24D28E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILE_OFFSET))(text, sourceInfo, hasParam, contextProvider, compileMetadata, textProcessorManager);
		}

		static ::System::String* _ProcessCustomSelectText(::System::String* text, ::System::Collections::Generic::List_1<::System::Boolean>* customSelect)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTTEXT_OFFSET))(text, customSelect);
		}

		static ::System::String* _ProcessCustomSelectPattern(::System::String* text, ::System::String* start, ::System::Boolean choose)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTPATTERN_OFFSET))(text, start, choose);
		}

		static ::System::String* _DoSelectPatternProcess(::System::String* originText, ::System::String* startText, ::System::Boolean ifRemove, ::System::Boolean removeOnce)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__DOSELECTPATTERNPROCESS_OFFSET))(originText, startText, ifRemove, removeOnce);
		}

		static ::System::String* CompileRepeatUnit(::System::String* text, ::System::UInt32 repeatCount)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEREPEATUNIT_OFFSET))(text, repeatCount);
		}

		static ::System::String* CompileActivityName(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEACTIVITYNAME_OFFSET))(text);
		}

		static ::System::String* CompileLocalizedTime(::System::String* textToCompile)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILELOCALIZEDTIME_OFFSET))(textToCompile);
		}
	};
}
