#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedActionWrapper.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { template <typename T1, typename T2, typename T3> class ActionCall_3; }
namespace System { class Object; }

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedAction_3_TypeDefinitionIndex = 29356;

	template <typename T1, typename T2, typename T3>
	class ReflectedAction_3 : public ::NodeCanvas::Framework::Internal::ReflectedActionWrapper
	{
	public:
		::ParadoxNotion::ActionCall_3<T1, T2, T3>* call; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T1>* p1; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T2>* p2; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T3>* p3; // 0x0
	};
}
