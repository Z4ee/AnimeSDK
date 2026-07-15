#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace DesperateDevs::Utils
{
	inline static constexpr unsigned int ObjectPool_1_TypeDefinitionIndex = 7100;

	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		::System::Func_1<T>* _factoryMethod; // 0x0
		::System::Action_1<T>* _resetMethod; // 0x0
		::System::Collections::Generic::Stack_1<T>* _objectPool; // 0x0
	};
}
