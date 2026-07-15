#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIParticleInternal { template <typename T> class InternalObjectPool_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FastActionBase_1_TypeDefinitionIndex = 42323;

	template <typename T>
	class FastActionBase_1 : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::InternalObjectPool_1<::System::Collections::Generic::LinkedListNode_1<T>*>** StaticGet_s_NodePool()
		{
			return (::Coffee::UIParticleInternal::InternalObjectPool_1<::System::Collections::Generic::LinkedListNode_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(FastActionBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::LinkedList_1<T>* _delegates; // 0x0
	};
}
