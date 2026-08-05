#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/Machine.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define FOUNDATION_STATEMACHINE_MACHINECACHE_BUILD_OFFSET UNITYSDK_OFFSET(0x1FC0BE40)
#define FOUNDATION_STATEMACHINE_MACHINECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0BEA0)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int MachineCache_TypeDefinitionIndex = 8501;

	class MachineCache : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* parameters; // 0x10
		::Il2CppArray<::System::Byte>* conditions; // 0x18
		::Il2CppArray<::System::Byte>* states; // 0x20
		::Il2CppArray<::System::Byte>* transitions; // 0x28
		::Il2CppArray<::System::Byte>* layers; // 0x30
		::System::Byte machineCount; // 0x38
		::System::Byte anyTransitionCount; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINECACHE__CTOR_OFFSET))(this);
		}

		::Foundation::StateMachine::Machine Build(::Unity::Collections::Allocator allocator)
		{
			return ((::Foundation::StateMachine::Machine(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINECACHE_BUILD_OFFSET))(this, allocator);
		}
	};
}
