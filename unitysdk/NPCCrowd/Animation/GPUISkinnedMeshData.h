#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace NPCCrowd::Animation { class GPUIBone; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_GPUISKINNEDMESHDATA_GETARRAYINDEXOFBONE_OFFSET UNITYSDK_OFFSET(0xD9395E0)
#define NPCCROWD_ANIMATION_GPUISKINNEDMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD939670)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GPUISkinnedMeshData_TypeDefinitionIndex = 86702;

	class GPUISkinnedMeshData : public ::System::Object
	{
	public:
		::System::String* transformName; // 0x10
		::Il2CppArray<::System::Int32>* boneIndexes; // 0x18
		::System::Int32 rootBoneIndex; // 0x20
		::System::Boolean hasBindPoseOffset; // 0x24
		::UnityEngine::Matrix4x4 bindPoseOffset; // 0x28
		::System::Boolean isOptional; // 0x68
		::System::Boolean isOptionalPrototypeGenerated; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUISKINNEDMESHDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 GetArrayIndexOfBone(::NPCCrowd::Animation::GPUIBone* bone)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::GPUIBone*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUISKINNEDMESHDATA_GETARRAYINDEXOFBONE_OFFSET))(this, bone);
		}
	};
}
