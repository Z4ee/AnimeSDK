#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/ExpressionCompiler_ExpressionMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace ExpressionV2 { class Token; }
namespace System { class String; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define EXPRESSIONV2_EXPRESSIONCOMPILER_COMPILE_OFFSET UNITYSDK_OFFSET(0x16647D40)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_DEINIT_OFFSET UNITYSDK_OFFSET(0x16647990)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16647920)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_GETRPNCOUNT_OFFSET UNITYSDK_OFFSET(0x1664AAF0)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_GETRPN_OFFSET UNITYSDK_OFFSET(0x1664AB30)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x16647C90)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_ISLETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x16647CE0)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_ISLETTER_OFFSET UNITYSDK_OFFSET(0x16647C40)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x16647BF0)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_RECOMPILE_OFFSET UNITYSDK_OFFSET(0x1664AB70)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_RETURNTOKEN_OFFSET UNITYSDK_OFFSET(0x16647B00)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_TOKENCREATOR_OFFSET UNITYSDK_OFFSET(0x16647A90)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_TOKENIZE_OFFSET UNITYSDK_OFFSET(0x16647F30)
#define EXPRESSIONV2_EXPRESSIONCOMPILER_TORPN_OFFSET UNITYSDK_OFFSET(0x16649E50)
#define EXPRESSIONV2_EXPRESSIONCOMPILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1664ACF0)
#define EXPRESSIONV2_EXPRESSIONCOMPILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1664ACE0)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionCompiler_TypeDefinitionIndex = 45866;

	class ExpressionCompiler : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<::System::Int32>** StaticGet_funcArgStack()
		{
			return (::System::Collections::Generic::Stack_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionCompiler_TypeDefinitionIndex)->GetStaticField(0x40DB0);
		}
		static ::ExpressionV2::ExpressionCompiler_ExpressionMode* StaticGet_Mode()
		{
			return (::ExpressionV2::ExpressionCompiler_ExpressionMode*)Il2CppClass::FromTypeDefinitionIndex(ExpressionCompiler_TypeDefinitionIndex)->GetStaticField(0xF220);
		}
		::Il2CppArray<::ExpressionV2::Token*>* buf2; // 0x10
		::Il2CppArray<::ExpressionV2::Token*>* rpn2; // 0x18
		::System::Buffers::ArrayPool_1<::ExpressionV2::Token*>* pool4; // 0x20
		::System::Buffers::ArrayPool_1<::ExpressionV2::Token*>* pool3; // 0x28
		::System::Int32 count2; // 0x30
		::System::Boolean hasDispose; // 0x34
		::System::Int32 rpnCount2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_FINALIZE_OFFSET))(this);
		}

		static ::ExpressionV2::Token* TokenCreator()
		{
			return ((::ExpressionV2::Token*(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_TOKENCREATOR_OFFSET))();
		}

		static ::System::Void ReturnToken(::Il2CppArray<::ExpressionV2::Token*>* tokens, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::ExpressionV2::Token*>*, ::System::Int32))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_RETURNTOKEN_OFFSET))(tokens, count);
		}

		static ::System::Boolean IsWhiteSpace(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_ISWHITESPACE_OFFSET))(ch);
		}

		static ::System::Boolean IsLetter(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_ISLETTER_OFFSET))(c);
		}

		static ::System::Boolean IsDigit(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_ISDIGIT_OFFSET))(c);
		}

		static ::System::Boolean IsLetterOrDigit(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_ISLETTERORDIGIT_OFFSET))(c);
		}

		::System::Void Compile(::System::String* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_COMPILE_OFFSET))(this, expr);
		}

		::System::Int32 GetRpnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_GETRPNCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::ExpressionV2::Token*>* GetRpn()
		{
			return ((::Il2CppArray<::ExpressionV2::Token*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_GETRPN_OFFSET))(this);
		}

		::System::Void DeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_DEINIT_OFFSET))(this);
		}

		::System::Void ReCompile(::System::String* expr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_RECOMPILE_OFFSET))(this, expr);
		}

		static ::System::Int32 Tokenize(::System::ReadOnlySpan_1<::System::Char> expr, ::Il2CppArray<::ExpressionV2::Token*>* tokens)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::Il2CppArray<::ExpressionV2::Token*>*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_TOKENIZE_OFFSET))(expr, tokens);
		}

		static ::System::Int32 ToRpn(::Il2CppArray<::ExpressionV2::Token*>* tokens, ::System::Int32 tokenCount, ::Il2CppArray<::ExpressionV2::Token*>* rpn)
		{
			return ((::System::Int32(*)(::Il2CppArray<::ExpressionV2::Token*>*, ::System::Int32, ::Il2CppArray<::ExpressionV2::Token*>*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONCOMPILER_TORPN_OFFSET))(tokens, tokenCount, rpn);
		}
	};
}
