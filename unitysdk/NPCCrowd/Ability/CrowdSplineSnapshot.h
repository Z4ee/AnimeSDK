#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineBakeRange.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_CROWDSPLINESNAPSHOT_ISVALIDFORSAMPLING_OFFSET UNITYSDK_OFFSET(0x6A53F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineSnapshot_TypeDefinitionIndex = 68526;

	struct alignas(8) CrowdSplineSnapshot
	{
		::System::Boolean HasActiveSplineFollow; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions; // 0x18
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Tangents; // 0x28
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Normals; // 0x38
		::Unity::Collections::NativeArray_1<::System::Single> Distances; // 0x48
		::Unity::Collections::NativeHashMap_2<::System::Int32, ::NPCCrowd::Ability::CrowdSplineBakeRange> Ranges; // 0x58

		::System::Boolean IsValidForSampling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINESNAPSHOT_ISVALIDFORSAMPLING_OFFSET))(this);
		}
	};
}
