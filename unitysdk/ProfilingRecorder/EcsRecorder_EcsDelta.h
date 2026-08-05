#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PROFILINGRECORDER_ECSRECORDER_ECSDELTA_TOJSON_OFFSET UNITYSDK_OFFSET(0x8FF490)
#define PROFILINGRECORDER_ECSRECORDER_ECSDELTA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8FF440)
#define PROFILINGRECORDER_ECSRECORDER_ECSDELTA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8FF4A0)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int EcsRecorder_EcsDelta_TypeDefinitionIndex = 85711;

	struct alignas(8) EcsRecorder_EcsDelta
	{
		::System::Int32 ComponentDelta; // 0x10
		::System::Int32 ArchetypeDelta; // 0x14
		::System::Int32 EntityDelta; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ComponentDeltaByType; // 0x20
		::System::TimeSpan Duration; // 0x28

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_ECSDELTA_TOSTRING_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_ECSDELTA_TOJSON_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_ECSDELTA___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
