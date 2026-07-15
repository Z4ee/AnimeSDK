#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SWRT_BVH8_WNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13E320)

namespace SWRT
{
	inline static constexpr unsigned int BVH8_WNode_TypeDefinitionIndex = 35951;

	class BVH8_WNode : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* CPrimCount; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* CAABBMax; // 0x18
		::Il2CppArray<::System::Int32>* CType; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* CAABBMin; // 0x28
		::Il2CppArray<::System::Int32>* CNodeIndex; // 0x30
		::Il2CppArray<::System::Int32>* CPrimIndex; // 0x38
		::UnityEngine::Vector3 AABBMax; // 0x40
		::UnityEngine::Vector3 AABBMin; // 0x4C
		::System::Int32 CNodeBaseIndex; // 0x58
		::System::Int32 CPrimBaseIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH8_WNODE__CTOR_OFFSET))(this);
		}
	};
}
