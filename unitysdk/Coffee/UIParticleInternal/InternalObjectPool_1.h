#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int InternalObjectPool_1_TypeDefinitionIndex = 42335;

	template <typename T>
	class InternalObjectPool_1 : public ::System::Object
	{
	public:
		::System::Func_1<T>* _onCreate; // 0x0
		::System::Action_1<T>* _onReturn; // 0x0
		::System::Predicate_1<T>* _onValid; // 0x0
		::System::Collections::Generic::Stack_1<T>* _pool; // 0x0
		::System::Int32 _count; // 0x0
	};
}
