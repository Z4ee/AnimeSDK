#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedFunctionWrapper.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { template <typename T> class FunctionCall_1; }
namespace System { class Object; }

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedFunction_1_TypeDefinitionIndex = 26844;

	template <typename TResult>
	class ReflectedFunction_1 : public ::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper
	{
	public:
		::ParadoxNotion::FunctionCall_1<TResult>* call; // 0x0
		::NodeCanvas::Framework::BBParameter_1<TResult>* result; // 0x0
	};
}
