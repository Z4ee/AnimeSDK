#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PROFILINGRECORDER_ECSRECORDER_ECSSNAPSHOT_TOJSON_OFFSET UNITYSDK_OFFSET(0xA2A5A0)
#define PROFILINGRECORDER_ECSRECORDER_ECSSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2A550)
#define PROFILINGRECORDER_ECSRECORDER_ECSSNAPSHOT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2A5B0)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int EcsRecorder_EcsSnapshot_TypeDefinitionIndex = 42554;

	struct alignas(8) EcsRecorder_EcsSnapshot
	{
		::System::Int32 TotalComponentCount; // 0x10
		::System::Int32 TotalArchetypeCount; // 0x14
		::System::Int32 TotalEntityCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ComponentCountByType; // 0x20
		::System::DateTime Timestamp; // 0x28

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_ECSSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_ECSSNAPSHOT_TOJSON_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_ECSSNAPSHOT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
