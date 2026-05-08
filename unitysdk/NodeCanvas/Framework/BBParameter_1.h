#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/BBParameter.h"

namespace NodeCanvas::Framework { class Variable; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int BBParameter_1_TypeDefinitionIndex = 27799;

	template <typename T>
	class BBParameter_1 : public ::NodeCanvas::Framework::BBParameter
	{
	public:
		T _value; // 0x0
		::System::Func_1<T>* getter; // 0x0
		::System::Action_1<T>* setter; // 0x0
	};
}
