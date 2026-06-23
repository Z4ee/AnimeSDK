#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/ExprValue.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_EXPRESSIONOPERATOR_DOLLAR_OFFSET UNITYSDK_OFFSET(0x1226FB80)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_EVALOP_OFFSET UNITYSDK_OFFSET(0x1226FCD0)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_GETPRECEDENCE_OFFSET UNITYSDK_OFFSET(0x1226F4A0)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_ISDOUBLECHAROPERATOR_OFFSET UNITYSDK_OFFSET(0x1226F810)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_ISSINGLECHAROPERATOR_OFFSET UNITYSDK_OFFSET(0x1226F6E0)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_ISUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1226F550)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_NEG_OFFSET UNITYSDK_OFFSET(0x1226F940)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_SHARP_OFFSET UNITYSDK_OFFSET(0x1226FA30)
#define EXPRESSIONV2_EXPRESSIONOPERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x12270300)
#define EXPRESSIONV2_EXPRESSIONOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x122702F0)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionOperator_TypeDefinitionIndex = 79170;

	class ExpressionOperator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>** StaticGet_s_opPrecedenceMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x48E00);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_doubleCharOperator()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x48E08);
		}
		static ::System::String** StaticGet_s_unaryOperatorStr()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x48E10);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_singleCharOperator()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x48E18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetPrecedence(::System::UInt16 op)
		{
			return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_GETPRECEDENCE_OFFSET))(op);
		}

		static ::System::Boolean IsUnaryOperator(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_ISUNARYOPERATOR_OFFSET))(ch);
		}

		static ::System::Boolean IsSingleCharOperator(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_ISSINGLECHAROPERATOR_OFFSET))(ch);
		}

		static ::System::Boolean IsDoubleCharOperator(::System::UInt16 op)
		{
			return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_ISDOUBLECHAROPERATOR_OFFSET))(op);
		}

		static ::ExpressionV2::ExprValue Neg(::ExpressionV2::ExprValue a)
		{
			return ((::ExpressionV2::ExprValue(*)(::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_NEG_OFFSET))(a);
		}

		static ::ExpressionV2::ExprValue Sharp(::ExpressionV2::ExprValue a)
		{
			return ((::ExpressionV2::ExprValue(*)(::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_SHARP_OFFSET))(a);
		}

		static ::ExpressionV2::ExprValue Dollar(::ExpressionV2::ExprValue a)
		{
			return ((::ExpressionV2::ExprValue(*)(::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_DOLLAR_OFFSET))(a);
		}

		static ::ExpressionV2::ExprValue EvalOp(::System::UInt16 op, ::ExpressionV2::ExprValue a, ::ExpressionV2::ExprValue b)
		{
			return ((::ExpressionV2::ExprValue(*)(::System::UInt16, ::ExpressionV2::ExprValue, ::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_EVALOP_OFFSET))(op, a, b);
		}
	};
}
