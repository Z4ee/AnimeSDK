#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MFixedSizeRingQueue_1_TypeDefinitionIndex = 33820;

	template <typename T>
	class MFixedSizeRingQueue_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _Buffer; // 0x0
		::System::UInt32 _Head; // 0x0
		::System::UInt32 _Tail; // 0x0
		::System::UInt32 Capacity; // 0x0
		::System::UInt32 CurStateSize; // 0x0
	};
}
