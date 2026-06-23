#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class FsmContext; }
namespace LitJson { class Lexer_StateHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::IO { class TextReader; }
namespace System::Text { class StringBuilder; }

#define LITJSON_LEXER_GETCHAR_OFFSET UNITYSDK_OFFSET(0x1C5EEC70)
#define LITJSON_LEXER_GET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x1C5EDC40)
#define LITJSON_LEXER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x1C5EDC60)
#define LITJSON_LEXER_GET_COMMENTSTACK_OFFSET UNITYSDK_OFFSET(0x1C5EDCB0)
#define LITJSON_LEXER_GET_ENDOFINPUT_OFFSET UNITYSDK_OFFSET(0x1C5EDC80)
#define LITJSON_LEXER_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1C5EDCA0)
#define LITJSON_LEXER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1C5EDC90)
#define LITJSON_LEXER_HEXVALUE_OFFSET UNITYSDK_OFFSET(0x1C5EE7F0)
#define LITJSON_LEXER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1C5F0EB0)
#define LITJSON_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1C5F0EF0)
#define LITJSON_LEXER_POPULATEFSMTABLES_OFFSET UNITYSDK_OFFSET(0x1C5EDD00)
#define LITJSON_LEXER_PROCESSESCCHAR_OFFSET UNITYSDK_OFFSET(0x1C5EE8D0)
#define LITJSON_LEXER_SET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x1C5EDC50)
#define LITJSON_LEXER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x1C5EDC70)
#define LITJSON_LEXER_STATE10_OFFSET UNITYSDK_OFFSET(0x1C5EF900)
#define LITJSON_LEXER_STATE11_OFFSET UNITYSDK_OFFSET(0x1C5EF990)
#define LITJSON_LEXER_STATE12_OFFSET UNITYSDK_OFFSET(0x1C5EFA20)
#define LITJSON_LEXER_STATE13_OFFSET UNITYSDK_OFFSET(0x1C5EFAB0)
#define LITJSON_LEXER_STATE14_OFFSET UNITYSDK_OFFSET(0x1C5EFB40)
#define LITJSON_LEXER_STATE15_OFFSET UNITYSDK_OFFSET(0x1C5EFBD0)
#define LITJSON_LEXER_STATE16_OFFSET UNITYSDK_OFFSET(0x1C5EFC60)
#define LITJSON_LEXER_STATE17_OFFSET UNITYSDK_OFFSET(0x1C5EFCF0)
#define LITJSON_LEXER_STATE18_OFFSET UNITYSDK_OFFSET(0x1C5EFD80)
#define LITJSON_LEXER_STATE19_OFFSET UNITYSDK_OFFSET(0x1C5EFE10)
#define LITJSON_LEXER_STATE1_OFFSET UNITYSDK_OFFSET(0x1C5EE970)
#define LITJSON_LEXER_STATE20_OFFSET UNITYSDK_OFFSET(0x1C5EFF50)
#define LITJSON_LEXER_STATE21_OFFSET UNITYSDK_OFFSET(0x1C5EFFE0)
#define LITJSON_LEXER_STATE22_OFFSET UNITYSDK_OFFSET(0x1C5F0210)
#define LITJSON_LEXER_STATE23_OFFSET UNITYSDK_OFFSET(0x1C5F08D0)
#define LITJSON_LEXER_STATE24_OFFSET UNITYSDK_OFFSET(0x1C5F0A10)
#define LITJSON_LEXER_STATE25_OFFSET UNITYSDK_OFFSET(0x1C5F0AB0)
#define LITJSON_LEXER_STATE26_OFFSET UNITYSDK_OFFSET(0x1C5F0B50)
#define LITJSON_LEXER_STATE27_OFFSET UNITYSDK_OFFSET(0x1C5F0C70)
#define LITJSON_LEXER_STATE28_OFFSET UNITYSDK_OFFSET(0x1C5F0D90)
#define LITJSON_LEXER_STATE2_OFFSET UNITYSDK_OFFSET(0x1C5EECD0)
#define LITJSON_LEXER_STATE3_OFFSET UNITYSDK_OFFSET(0x1C5EEE50)
#define LITJSON_LEXER_STATE4_OFFSET UNITYSDK_OFFSET(0x1C5EF170)
#define LITJSON_LEXER_STATE5_OFFSET UNITYSDK_OFFSET(0x1C5EF330)
#define LITJSON_LEXER_STATE6_OFFSET UNITYSDK_OFFSET(0x1C5EF420)
#define LITJSON_LEXER_STATE7_OFFSET UNITYSDK_OFFSET(0x1C5EF600)
#define LITJSON_LEXER_STATE8_OFFSET UNITYSDK_OFFSET(0x1C5EF720)
#define LITJSON_LEXER_STATE9_OFFSET UNITYSDK_OFFSET(0x1C5EF870)
#define LITJSON_LEXER_UNGETCHAR_OFFSET UNITYSDK_OFFSET(0x1C5EF160)
#define LITJSON_LEXER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5EDCC0)
#define LITJSON_LEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5EE5A0)

namespace LitJson
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 7748;

	class Lexer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_fsm_return_table()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x6E70);
		}
		static ::Il2CppArray<::LitJson::Lexer_StateHandler*>** StaticGet_fsm_handler_table()
		{
			return (::Il2CppArray<::LitJson::Lexer_StateHandler*>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x6E78);
		}
		::System::Text::StringBuilder* string_buffer; // 0x10
		::System::String* comment; // 0x18
		::System::Text::StringBuilder* curr_comment; // 0x20
		::System::String* string_value; // 0x28
		::LitJson::FsmContext* fsm_context; // 0x30
		::System::IO::TextReader* reader; // 0x38
		::System::Collections::Generic::Stack_1<::System::String*>* _CommentStack_k__BackingField; // 0x40
		::System::Int32 input_buffer; // 0x48
		::System::Int32 input_char; // 0x4C
		::System::Int32 state; // 0x50
		::System::Boolean allow_comments; // 0x54
		::System::Boolean end_of_input; // 0x55
		::System::Boolean allow_single_quoted_strings; // 0x56
		::System::Int32 unichar; // 0x58
		::System::Int32 token; // 0x5C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_LEXER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IO::TextReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + LITJSON_LEXER__CTOR_OFFSET))(this, reader);
		}

		::System::Boolean get_AllowComments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_ALLOWCOMMENTS_OFFSET))(this);
		}

		::System::Void set_AllowComments(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_LEXER_SET_ALLOWCOMMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowSingleQuotedStrings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(this);
		}

		::System::Void set_AllowSingleQuotedStrings(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_LEXER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(this, value);
		}

		::System::Boolean get_EndOfInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_ENDOFINPUT_OFFSET))(this);
		}

		::System::Int32 get_Token()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_TOKEN_OFFSET))(this);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::System::String*>* get_CommentStack()
		{
			return ((::System::Collections::Generic::Stack_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_COMMENTSTACK_OFFSET))(this);
		}

		static ::System::Int32 HexValue(::System::Int32 digit)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_LEXER_HEXVALUE_OFFSET))(digit);
		}

		static ::System::Void PopulateFsmTables(::Il2CppArray<::LitJson::Lexer_StateHandler*>*& fsm_handler_table, ::Il2CppArray<::System::Int32>*& fsm_return_table)
		{
			return ((::System::Void(*)(::Il2CppArray<::LitJson::Lexer_StateHandler*>*&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + LITJSON_LEXER_POPULATEFSMTABLES_OFFSET))(fsm_handler_table, fsm_return_table);
		}

		static ::System::Char ProcessEscChar(::System::Int32 esc_char)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_LEXER_PROCESSESCCHAR_OFFSET))(esc_char);
		}

		static ::System::Boolean State1(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE1_OFFSET))(ctx);
		}

		static ::System::Boolean State2(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE2_OFFSET))(ctx);
		}

		static ::System::Boolean State3(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE3_OFFSET))(ctx);
		}

		static ::System::Boolean State4(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE4_OFFSET))(ctx);
		}

		static ::System::Boolean State5(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE5_OFFSET))(ctx);
		}

		static ::System::Boolean State6(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE6_OFFSET))(ctx);
		}

		static ::System::Boolean State7(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE7_OFFSET))(ctx);
		}

		static ::System::Boolean State8(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE8_OFFSET))(ctx);
		}

		static ::System::Boolean State9(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE9_OFFSET))(ctx);
		}

		static ::System::Boolean State10(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE10_OFFSET))(ctx);
		}

		static ::System::Boolean State11(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE11_OFFSET))(ctx);
		}

		static ::System::Boolean State12(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE12_OFFSET))(ctx);
		}

		static ::System::Boolean State13(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE13_OFFSET))(ctx);
		}

		static ::System::Boolean State14(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE14_OFFSET))(ctx);
		}

		static ::System::Boolean State15(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE15_OFFSET))(ctx);
		}

		static ::System::Boolean State16(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE16_OFFSET))(ctx);
		}

		static ::System::Boolean State17(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE17_OFFSET))(ctx);
		}

		static ::System::Boolean State18(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE18_OFFSET))(ctx);
		}

		static ::System::Boolean State19(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE19_OFFSET))(ctx);
		}

		static ::System::Boolean State20(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE20_OFFSET))(ctx);
		}

		static ::System::Boolean State21(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE21_OFFSET))(ctx);
		}

		static ::System::Boolean State22(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE22_OFFSET))(ctx);
		}

		static ::System::Boolean State23(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE23_OFFSET))(ctx);
		}

		static ::System::Boolean State24(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE24_OFFSET))(ctx);
		}

		static ::System::Boolean State25(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE25_OFFSET))(ctx);
		}

		static ::System::Boolean State26(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE26_OFFSET))(ctx);
		}

		static ::System::Boolean State27(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE27_OFFSET))(ctx);
		}

		static ::System::Boolean State28(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE28_OFFSET))(ctx);
		}

		::System::Boolean GetChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GETCHAR_OFFSET))(this);
		}

		::System::Int32 NextChar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_NEXTCHAR_OFFSET))(this);
		}

		::System::Boolean NextToken(::System::Boolean dropComment, ::System::Boolean& hasComment)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + LITJSON_LEXER_NEXTTOKEN_OFFSET))(this, dropComment, hasComment);
		}

		::System::Void UngetChar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_UNGETCHAR_OFFSET))(this);
		}
	};
}
