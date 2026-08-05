#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable.h"

namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedVariable_1_TypeDefinitionIndex = 33873;

	template <typename T>
	class SharedVariable_1 : public ::BehaviorDesigner::Runtime::SharedVariable
	{
	public:
		::System::Func_1<T>* mGetter; // 0x0
		::System::Action_1<T>* mSetter; // 0x0
		T mValue; // 0x0
	};
}
