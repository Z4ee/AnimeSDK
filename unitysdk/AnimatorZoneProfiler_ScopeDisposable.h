#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ANIMATORZONEPROFILER_SCOPEDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x821520)
#define ANIMATORZONEPROFILER_SCOPEDISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x8214B0)

inline static constexpr unsigned int AnimatorZoneProfiler_ScopeDisposable_TypeDefinitionIndex = 87974;

struct alignas(1) AnimatorZoneProfiler_ScopeDisposable
{
	::System::Void _ctor(::System::String* functionName, ::System::UInt32 entityID, ::System::String* animatorName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SCOPEDISPOSABLE__CTOR_OFFSET))(this, functionName, entityID, animatorName);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SCOPEDISPOSABLE_DISPOSE_OFFSET))(this);
	}
};
