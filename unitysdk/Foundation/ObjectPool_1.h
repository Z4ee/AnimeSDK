#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPool_1_TypeDefinitionIndex = 8454;

	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 DEFAULT_RESERVED = 0x10; // 0x0
		// static const ::System::Int32 DEFAULT_CAPCITY = 0x20; // 0x0
		::System::Collections::Generic::Stack_1<T>* m_Stack; // 0x0
		::System::Func_1<T>* m_ActionCreated; // 0x0
		::System::Action_1<T>* m_ActionOnGet; // 0x0
		::System::Action_1<T>* m_ActionOnRelease; // 0x0
		::System::Int32 m_Capcity; // 0x0
		::System::Int32 _countAll_k__BackingField; // 0x0
	};
}
