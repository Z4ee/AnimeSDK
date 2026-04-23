#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdPrototype_AnimationClipInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::CrowdAnimator { class BoneData; }
namespace RPG::Client::CrowdAnimator { class ClipData; }
namespace RPG::Client::CrowdAnimator { class SkinnedMeshData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_GET_ISBAKEREQUIRED_OFFSET UNITYSDK_OFFSET(0xA0D7B20)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_0E18B07CF5405C59_OFFSET UNITYSDK_OFFSET(0xA0D7B80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_CB05EF9A7B7BC592_OFFSET UNITYSDK_OFFSET(0xA0D7CA0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D7DA0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdPrototype_TypeDefinitionIndex = 67853;

	class CrowdPrototype : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* prefabObjectPath; // 0x18
		::System::String* rootBoneName; // 0x20
		::System::Int32 frameRate; // 0x28
		::System::Boolean useDualQuaternionSkinning; // 0x2C
		::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdPrototype_AnimationClipInfo>* clipInfos; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::ClipData*>* clipDataList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::SkinnedMeshData*>* skinnedMeshDataList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::BoneData*>* boneDataList; // 0x48
		::UnityEngine::Vector3 rootBoundMin; // 0x50
		::UnityEngine::Vector3 rootBoundMax; // 0x5C
		::UnityEngine::Texture2D* animationTexture; // 0x68
		::System::Int32 totalFrameCount; // 0x70
		::System::Int32 totalBoneCount; // 0x74
		::UnityEngine::Vector2Int textureSize; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBakeRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_GET_ISBAKEREQUIRED_OFFSET))(this);
		}

		::RPG::Client::CrowdAnimator::BoneData* Method_3_0E18B07CF5405C59(::System::String* a1)
		{
			return ((::RPG::Client::CrowdAnimator::BoneData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_0E18B07CF5405C59_OFFSET))(this, a1);
		}

		::RPG::Client::CrowdAnimator::SkinnedMeshData* Method_3_CB05EF9A7B7BC592(::System::String* a1)
		{
			return ((::RPG::Client::CrowdAnimator::SkinnedMeshData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_CB05EF9A7B7BC592_OFFSET))(this, a1);
		}
	};
}
