#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedFunctionWrapper.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { template <typename T1, typename T2> class FunctionCall_2; }
namespace System { class Object; }

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedFunction_2_TypeDefinitionIndex = 30057;

	template <typename TResult, typename T1>
	class ReflectedFunction_2 : public ::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper
	{
	public:
		::ParadoxNotion::FunctionCall_2<T1, TResult>* call; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T1>* p1; // 0x0
		::NodeCanvas::Framework::BBParameter_1<TResult>* result; // 0x0
	};
}
