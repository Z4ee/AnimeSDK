#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedFunctionWrapper.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4> class FunctionCall_4; }
namespace System { class Object; }

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedFunction_4_TypeDefinitionIndex = 30243;

	template <typename TResult, typename T1, typename T2, typename T3>
	class ReflectedFunction_4 : public ::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper
	{
	public:
		::ParadoxNotion::FunctionCall_4<T1, T2, T3, TResult>* call; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T1>* p1; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T2>* p2; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T3>* p3; // 0x0
		::NodeCanvas::Framework::BBParameter_1<TResult>* result; // 0x0
	};
}
