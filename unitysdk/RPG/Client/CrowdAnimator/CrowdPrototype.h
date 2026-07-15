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

#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_GET_ISBAKEREQUIRED_OFFSET UNITYSDK_OFFSET(0x1802F210)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_3FA8F4962E04AA53_OFFSET UNITYSDK_OFFSET(0x1802F3A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_9679BF1F01124F44_OFFSET UNITYSDK_OFFSET(0x1802F270)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1802F4B0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdPrototype_TypeDefinitionIndex = 70311;

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

		::RPG::Client::CrowdAnimator::BoneData* Method_3_9679BF1F01124F44(::System::String* a1)
		{
			return ((::RPG::Client::CrowdAnimator::BoneData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_9679BF1F01124F44_OFFSET))(this, a1);
		}

		::RPG::Client::CrowdAnimator::SkinnedMeshData* Method_3_3FA8F4962E04AA53(::System::String* a1)
		{
			return ((::RPG::Client::CrowdAnimator::SkinnedMeshData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE_METHOD_3_3FA8F4962E04AA53_OFFSET))(this, a1);
		}
	};
}
