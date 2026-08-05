#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedActionWrapper.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { template <typename T> class ActionCall_1; }
namespace System { class Object; }

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedAction_1_TypeDefinitionIndex = 30268;

	template <typename T1>
	class ReflectedAction_1 : public ::NodeCanvas::Framework::Internal::ReflectedActionWrapper
	{
	public:
		::ParadoxNotion::ActionCall_1<T1>* call; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T1>* p1; // 0x0
	};
}
