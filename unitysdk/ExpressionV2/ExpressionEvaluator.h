#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/ExprValue.h"
#include "unitysdk/System/Object.h"

namespace ExpressionV2 { class ExpressionCompiler; }
namespace ExpressionV2 { class ExpressionEvalContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_EXPRESSIONEVALUATOR_EVALRPN_OFFSET UNITYSDK_OFFSET(0x15A0B8D0)
#define EXPRESSIONV2_EXPRESSIONEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15A0C330)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionEvaluator_TypeDefinitionIndex = 53117;

	class ExpressionEvaluator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::ExpressionV2::ExprValue EvalRpn(::ExpressionV2::ExpressionCompiler* compiler, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>* varMap, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::ExpressionV2::ExpressionCompiler*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>*, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONEVALUATOR_EVALRPN_OFFSET))(compiler, varMap, context);
		}
	};
}
