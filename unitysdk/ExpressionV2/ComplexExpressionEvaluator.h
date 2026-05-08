#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/ExprValue.h"
#include "unitysdk/System/Object.h"

namespace ExpressionV2 { class ExpressionEvalContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR_EVALEXPR_OFFSET UNITYSDK_OFFSET(0x16C1E1D0)
#define EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR_EVALRPN_OFFSET UNITYSDK_OFFSET(0x16C1E350)
#define EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR_INTERPOLATEBRACES_OFFSET UNITYSDK_OFFSET(0x16C1DE80)
#define EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1E490)

namespace ExpressionV2
{
	inline static constexpr unsigned int ComplexExpressionEvaluator_TypeDefinitionIndex = 38317;

	class ComplexExpressionEvaluator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::String* InterpolateBraces(::System::String* expr, ::System::Func_4<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>*, ::ExpressionV2::ExpressionEvalContext*, ::System::String*>* evalExpr, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>* varMap, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::System::String*(*)(::System::String*, ::System::Func_4<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>*, ::ExpressionV2::ExpressionEvalContext*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>*, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR_INTERPOLATEBRACES_OFFSET))(expr, evalExpr, varMap, context);
		}

		static ::System::String* EvalExpr(::System::String* exp, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>* varMap, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>*, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR_EVALEXPR_OFFSET))(exp, varMap, context);
		}

		static ::ExpressionV2::ExprValue EvalRpn(::System::String* expr, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>* varMap, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>*, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_COMPLEXEXPRESSIONEVALUATOR_EVALRPN_OFFSET))(expr, varMap, context);
		}
	};
}
