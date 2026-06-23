#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd { template <typename T> class NPCSoftAssetPathList_1; }
namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BCANFOLLOWGPUBONE_OFFSET UNITYSDK_OFFSET(0xEBCB250)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BHASANIMATION_OFFSET UNITYSDK_OFFSET(0xEBCB1F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BREADGPUSLOTDATA_OFFSET UNITYSDK_OFFSET(0xEBCB190)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCB360)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryReferenceComponentInfo_TypeDefinitionIndex = 51184;

	class NPCAccessoryReferenceComponentInfo : public ::System::Object
	{
	public:
		::NPCCrowd::NPCSoftAssetPathList_1<::UnityEngine::Material*>* materialsAssetRef; // 0x10
		::UnityEngine::SkinnedMeshRenderer* skMeshRenderer; // 0x18
		::NapRenderer* napRenderer; // 0x20
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD0AssetRef; // 0x28
		::UnityEngine::GameObject* go; // 0x30
		::UnityEngine::MeshRenderer* simpleMeshRenderer; // 0x38
		::UnityEngine::Material* commonSimpleDitherMaterial; // 0x40
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x48
		::UnityEngine::GameObject* part; // 0x50
		::UnityEngine::MeshFilter* meshFilter; // 0x58
		::UnityEngine::MeshFilter* simpleMeshFilter; // 0x60
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* mdbPoseAssetRef; // 0x68
		::UnityEngine::Mesh* meshLOD1; // 0x70
		::UnityEngine::MeshRenderer* meshRenderer; // 0x78
		::UnityEngine::GameObject* simpleGo; // 0x80
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD2AssetRef; // 0x88
		::UnityEngine::Material* commonSimpleMaterial; // 0x90
		::System::Threading::CancellationTokenSource* mdbtaskToken; // 0x98
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD1AssetRef; // 0xA0
		::UnityEngine::MdbComponent* mdbComponent; // 0xA8
		::UnityEngine::Mesh* meshLOD3; // 0xB0
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD3AssetRef; // 0xB8
		::UnityEngine::Avatar* avatar; // 0xC0
		::UnityEngine::Animator* animator; // 0xC8
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Avatar*>* avatarAssetRef; // 0xD0
		::UnityEngine::Mesh* meshLOD2; // 0xD8
		::UnityEngine::Mesh* commonSimpleMesh; // 0xE0
		::UnityEngine::Mesh* mesh; // 0xE8
		::System::Int32 attachedNpcGpuAnimationInstanceId; // 0xF0
		::System::Boolean bMix; // 0xF4
		::System::Boolean bAvatarAssetHasAnimation; // 0xF5
		::System::Boolean bNeedReadGpuSlotData; // 0xF6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_bReadGpuSlotData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BREADGPUSLOTDATA_OFFSET))(this);
		}

		::System::Boolean get_bHasAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BHASANIMATION_OFFSET))(this);
		}

		::System::Boolean get_bCanFollowGpuBone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BCANFOLLOWGPUBONE_OFFSET))(this);
		}
	};
}
