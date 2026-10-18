#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_8.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1059;
class Class_1_0CEB549505853DBA;
class Class_1_B38D05F57D395ACE;
namespace RPG::Client { class TextIcons; }
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0xE225BD0)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILELOCALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xE225F40)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEMOTIONRUBY_OFFSET UNITYSDK_OFFSET(0xE220A20)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEREPEATUNIT_OFFSET UNITYSDK_OFFSET(0xE2258E0)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILERUBY_OFFSET UNITYSDK_OFFSET(0xE220200)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXTICONS_OFFSET UNITYSDK_OFFSET(0xE222970)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXT_OFFSET UNITYSDK_OFFSET(0xE224E00)
#define RPG_CLIENT_TEXTMAPSTATIC_GETANDCOMPILETEXT_OFFSET UNITYSDK_OFFSET(0xE224660)
#define RPG_CLIENT_TEXTMAPSTATIC_GETFLOATFORMATSTR_OFFSET UNITYSDK_OFFSET(0xE224BF0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETNUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0xE224C80)
#define RPG_CLIENT_TEXTMAPSTATIC_GETPERCENTSYMBOLSTR_OFFSET UNITYSDK_OFFSET(0xE224A60)
#define RPG_CLIENT_TEXTMAPSTATIC_GETRUBYNBSPTEXT_OFFSET UNITYSDK_OFFSET(0xE221260)
#define RPG_CLIENT_TEXTMAPSTATIC_GETSIMPLETEXT_OFFSET UNITYSDK_OFFSET(0xE223BC0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETTEXTWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xE20B1D0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETTEXT_OFFSET UNITYSDK_OFFSET(0xE1F6BB0)
#define RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTNONEPARAMPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xE223A00)
#define RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xE223790)
#define RPG_CLIENT_TEXTMAPSTATIC_HASRUBY_OFFSET UNITYSDK_OFFSET(0xE221190)
#define RPG_CLIENT_TEXTMAPSTATIC_HASTEXTICON_OFFSET UNITYSDK_OFFSET(0xE2236B0)
#define RPG_CLIENT_TEXTMAPSTATIC_PROCESSMETRICPREFIX_OFFSET UNITYSDK_OFFSET(0xE224EB0)
#define RPG_CLIENT_TEXTMAPSTATIC_REMOVERUBY_OFFSET UNITYSDK_OFFSET(0xE220730)
#define RPG_CLIENT_TEXTMAPSTATIC_REMOVETEXTICONS_OFFSET UNITYSDK_OFFSET(0xE2235C0)
#define RPG_CLIENT_TEXTMAPSTATIC__CALCULATETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xE2222E0)
#define RPG_CLIENT_TEXTMAPSTATIC__CALCULATEWHITESPACETWIDTH_OFFSET UNITYSDK_OFFSET(0xE2212F0)
#define RPG_CLIENT_TEXTMAPSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xE2262B0)
#define RPG_CLIENT_TEXTMAPSTATIC__COMBINECONTEXT_OFFSET UNITYSDK_OFFSET(0xE225700)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERNINTERNAL_OFFSET UNITYSDK_OFFSET(0xE221540)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERN_OFFSET UNITYSDK_OFFSET(0xE2202A0)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILETEXTICONSPATTERN_OFFSET UNITYSDK_OFFSET(0xE2229F0)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILE_OFFSET UNITYSDK_OFFSET(0xE2248D0)
#define RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTNONEPARAMPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xE223AA0)
#define RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xE223830)
#define RPG_CLIENT_TEXTMAPSTATIC__DOSELECTPATTERNPROCESS_OFFSET UNITYSDK_OFFSET(0xE2207D0)
#define RPG_CLIENT_TEXTMAPSTATIC__GENERATERUBYRESULT_OFFSET UNITYSDK_OFFSET(0xE2218D0)
#define RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xE225860)
#define RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTTEXT_OFFSET UNITYSDK_OFFSET(0xE223DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic_TypeDefinitionIndex = 72946;

	class TextmapStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NickName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A30);
		}
		static ::System::String** StaticGet__PatternRubyBegin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A38);
		}
		static ::System::String** StaticGet_UNBREAK_RUNTIME_TAG_END()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A40);
		}
		static ::System::String** StaticGet_BirthDate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A48);
		}
		static ::System::String** StaticGet__PatternApRubyEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A50);
		}
		static ::System::String** StaticGet_UNBREAK_RUNTIME_TAG_BEGIN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A58);
		}
		static ::Class_1_0CEB549505853DBA** StaticGet__DefaultProcessorManager()
		{
			return (::Class_1_0CEB549505853DBA**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A60);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_TEXT_ALL_CUSTOM_START()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A68);
		}
		static ::System::String** StaticGet__PattenRubyEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A70);
		}
		static ::System::String** StaticGet__PattenBtmStrEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A78);
		}
		static ::System::String** StaticGet__RegexRubyPatten()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A80);
		}
		static ::System::String** StaticGet__RegexSpritesPattern()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A88);
		}
		static ::System::String** StaticGet__PatternRubyEndAp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A90);
		}
		static ::System::String** StaticGet__PatternRubyEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10A98);
		}
		static ::Class_1_0CEB549505853DBA** StaticGet__DefaultNoneParamProcessorManager()
		{
			return (::Class_1_0CEB549505853DBA**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AA0);
		}
		static ::System::String** StaticGet__PattenRubyBegin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AA8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexSprites()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AB0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_TEXT_CUSTOM_START()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AB8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexRuby()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AC0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexMotion()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AC8);
		}
		static ::System::String** StaticGet__AnnoEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AD0);
		}
		static ::System::String** StaticGet__RegexPatten()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AD8);
		}
		static ::System::IFormatProvider** StaticGet_cultureProvider()
		{
			return (::System::IFormatProvider**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AE0);
		}
		static ::System::String** StaticGet__PattenTopStrBegin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x10AE8);
		}
		static ::System::Int32* StaticGet__RubyFloatRoundDigits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3830);
		}
		static ::System::Boolean* StaticGet__AddAddtionalTag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3834);
		}
		static ::System::Boolean* StaticGet__HoldSpaceForLongTopStr()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3835);
		}
		static ::System::Boolean* StaticGet_IsFemale()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3836);
		}
		static ::RPG::Client::TextID* StaticGet_params2ID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3838);
		}
		static ::System::Int32* StaticGet__Length_PattenTopStrBegin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3848);
		}
		static ::System::Int32* StaticGet__BottomStrFontSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x384C);
		}
		static ::RPG::Client::TextID* StaticGet_params3ID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3850);
		}
		static ::UnityEngine::Vector2* StaticGet__SettingSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3860);
		}
		static ::System::Single* StaticGet__TopStrFontSizeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3868);
		}
		static ::System::Int32* StaticGet__Length_PattenBtmStrEnd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x386C);
		}
		static ::System::Single* StaticGet__WhiteSpaceWidth()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3870);
		}
		static ::System::Int32* StaticGet__Length_AnnoEnd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3874);
		}
		static ::System::Boolean* StaticGet_SimpleMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3878);
		}
		static ::System::Boolean* StaticGet__CalculateWidthWithResetScaleFactor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3879);
		}
		static ::System::Int32* StaticGet__Length_PattenRubyBegin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x387C);
		}
		static ::RPG::Client::TextID* StaticGet_params1ID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic_TypeDefinitionIndex)->GetStaticField(0x3880);
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

		static ::System::String* CompileRuby(::System::String* a1, ::UnityEngine::UI::Text* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILERUBY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* RemoveRuby(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_REMOVERUBY_OFFSET))(a1);
		}

		static ::System::String* CompileMotionRuby(::System::String* a1, ::UnityEngine::UI::Text* a2, ::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_8>*& a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_8>*&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEMOTIONRUBY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean HasRuby(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_HASRUBY_OFFSET))(a1);
		}

		static ::System::String* GetRubyNBSPText(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETRUBYNBSPTEXT_OFFSET))(a1);
		}

		static ::System::String* _CompileRubyPattern(::System::String* a1, ::UnityEngine::UI::Text* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* _CompileRubyPatternInternal(::System::String* a1, ::UnityEngine::UI::Text* a2)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERNINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Single _CalculateTextWidth(::System::String* a1, ::UnityEngine::UI::Text* a2, ::UnityEngine::TextGenerator* a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::System::String*, ::UnityEngine::UI::Text*, ::UnityEngine::TextGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CALCULATETEXTWIDTH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single _CalculateWhiteSpacetWidth(::UnityEngine::UI::Text* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::UI::Text*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CALCULATEWHITESPACETWIDTH_OFFSET))(a1, a2);
		}

		static ::System::String* _GenerateRubyResult(::System::String* a1, ::System::String* a2, ::UnityEngine::UI::Text* a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::UnityEngine::UI::Text*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__GENERATERUBYRESULT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::String* CompileTextIcons(::System::String* a1, ::RPG::Client::TextIcons* a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::Client::TextIcons*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXTICONS_OFFSET))(a1, a2);
		}

		static ::System::String* RemoveTextIcons(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_REMOVETEXTICONS_OFFSET))(a1);
		}

		static ::System::Boolean HasTextIcon(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_HASTEXTICON_OFFSET))(a1);
		}

		static ::System::String* _CompileTextIconsPattern(::System::String* a1, ::RPG::Client::TextIcons* a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::Client::TextIcons*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILETEXTICONSPATTERN_OFFSET))(a1, a2);
		}

		static ::Class_1_0CEB549505853DBA* get_DefaultProcessorManager()
		{
			return ((::Class_1_0CEB549505853DBA*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTPROCESSORMANAGER_OFFSET))();
		}

		static ::Class_1_0CEB549505853DBA* get_DefaultNoneParamProcessorManager()
		{
			return ((::Class_1_0CEB549505853DBA*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTNONEPARAMPROCESSORMANAGER_OFFSET))();
		}

		static ::Class_1_0CEB549505853DBA* _CreateDefaultProcessorManager()
		{
			return ((::Class_1_0CEB549505853DBA*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPROCESSORMANAGER_OFFSET))();
		}

		static ::Class_1_0CEB549505853DBA* _CreateDefaultNoneParamProcessorManager()
		{
			return ((::Class_1_0CEB549505853DBA*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTNONEPARAMPROCESSORMANAGER_OFFSET))();
		}

		static ::System::String* GetSimpleText(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETSIMPLETEXT_OFFSET))(a1, a2);
		}

		static ::System::String* GetTextWithCustomSelectPattern(::RPG::Client::TextID a1, ::System::Collections::Generic::List_1<::System::Boolean>* a2, ::Class_1_B38D05F57D395ACE* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::Class_1_B38D05F57D395ACE*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETTEXTWITHCUSTOMSELECTPATTERN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetText(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* GetAndCompileText(::RPG::Client::TextID a1, ::Class_1_B38D05F57D395ACE* a2, ::Class_1_0CEB549505853DBA* a3, ::Class_0_16E4307DCC419505_1059* a4)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Class_1_B38D05F57D395ACE*, ::Class_1_0CEB549505853DBA*, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETANDCOMPILETEXT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetPercentSymbolStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETPERCENTSYMBOLSTR_OFFSET))();
		}

		static ::System::String* GetFloatFormatStr(::System::Single a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETFLOATFORMATSTR_OFFSET))(a1, a2);
		}

		static ::System::String* GetNumberDecimalSeparator()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETNUMBERDECIMALSEPARATOR_OFFSET))();
		}

		static ::System::String* CompileText(::System::String* a1, ::System::Boolean a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ProcessMetricPrefix(::System::Single a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_PROCESSMETRICPREFIX_OFFSET))(a1, a2);
		}

		static ::Class_0_16E4307DCC419505_1059* _CombineContext(::Class_0_16E4307DCC419505_1059* a1, ::Class_0_16E4307DCC419505_1059* a2)
		{
			return ((::Class_0_16E4307DCC419505_1059*(*)(::Class_0_16E4307DCC419505_1059*, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMBINECONTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* _Compile(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::System::Boolean a3, ::Class_0_16E4307DCC419505_1059* a4, ::Class_1_B38D05F57D395ACE* a5, ::Class_1_0CEB549505853DBA* a6)
		{
			return ((::System::String*(*)(::System::String*, ::Struct_2_A0005A7419DEF7CE, ::System::Boolean, ::Class_0_16E4307DCC419505_1059*, ::Class_1_B38D05F57D395ACE*, ::Class_1_0CEB549505853DBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* _ProcessCustomSelectText(::System::String* a1, ::System::Collections::Generic::List_1<::System::Boolean>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* _ProcessCustomSelectPattern(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTPATTERN_OFFSET))(a1, a2, a3);
		}

		static ::System::String* _DoSelectPatternProcess(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__DOSELECTPATTERNPROCESS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* CompileRepeatUnit(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEREPEATUNIT_OFFSET))(a1, a2);
		}

		static ::System::String* CompileActivityName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEACTIVITYNAME_OFFSET))(a1);
		}

		static ::System::String* CompileLocalizedTime(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILELOCALIZEDTIME_OFFSET))(a1);
		}
	};
}
