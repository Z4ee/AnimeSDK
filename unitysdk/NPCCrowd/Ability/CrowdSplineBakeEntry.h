#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_CROWDSPLINEBAKEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFFAA130)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineBakeEntry_TypeDefinitionIndex = 51179;

	class CrowdSplineBakeEntry : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* Normals; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* Tangents; // 0x18
		::Il2CppArray<::System::Single>* Distances; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* Positions; // 0x28
		::System::Int32 SplineInstanceId; // 0x30
		::System::Int32 RefCount; // 0x34
		::System::Int32 CacheId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKEENTRY__CTOR_OFFSET))(this);
		}
	};
}
