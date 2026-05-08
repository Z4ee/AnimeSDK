#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_SAMPLEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6B8F00)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_SAMPLEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8EF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCustomIdleManager_SampleJob_TypeDefinitionIndex = 38863;

	struct alignas(8) NPCCustomIdleManager_SampleJob
	{
		::System::Int32 _napAnimatorInstanceID; // 0x10
		::System::IntPtr _jobRequests; // 0x18
		::System::Int32 _size; // 0x20

		::System::Void _ctor(::System::Int32 instanceID, ::System::IntPtr request, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_SAMPLEJOB__CTOR_OFFSET))(this, instanceID, request, size);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_SAMPLEJOB_EXECUTE_OFFSET))(this);
		}
	};
}
