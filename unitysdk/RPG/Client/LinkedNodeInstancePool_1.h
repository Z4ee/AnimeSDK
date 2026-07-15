#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int LinkedNodeInstancePool_1_TypeDefinitionIndex = 66376;

	template <typename T>
	class LinkedNodeInstancePool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::LinkedListNode_1<T>*>* m_References; // 0x0
		::System::Int32 m_UsingReferenceCount; // 0x0
		::System::Int32 m_AcquireReferenceCount; // 0x0
		::System::Int32 m_ReleaseReferenceCount; // 0x0
		::System::Int32 m_AddReferenceCount; // 0x0
		::System::Int32 m_RemoveReferenceCount; // 0x0
	};
}
