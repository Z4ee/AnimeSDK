#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_GenerateGeoCache_HEU_ColliderInfo_ColliderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_HEU_COLLIDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8C56F50)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache_HEU_ColliderInfo_TypeDefinitionIndex = 43692;

	class HEU_GenerateGeoCache_HEU_ColliderInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _collisionIndices; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _collisionVertices; // 0x18
		::System::String* _collisionGroupName; // 0x20
		::UnityEngine::Vector3 _colliderSize; // 0x28
		::UnityEngine::Vector3 _colliderCenter; // 0x34
		::System::Boolean _isTrigger; // 0x40
		::System::Boolean _convexCollider; // 0x41
		::UnityEngine::MeshTopology _meshTopology; // 0x44
		::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo_ColliderType _colliderType; // 0x48
		::System::Single _colliderRadius; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_HEU_COLLIDERINFO__CTOR_OFFSET))(this);
		}
	};
}
