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

#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BCANFOLLOWGPUBONE_OFFSET UNITYSDK_OFFSET(0xF603750)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BHASANIMATION_OFFSET UNITYSDK_OFFSET(0xF6036F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BREADGPUSLOTDATA_OFFSET UNITYSDK_OFFSET(0xF603690)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xF603860)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryReferenceComponentInfo_TypeDefinitionIndex = 42111;

	class NPCAccessoryReferenceComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::Animator* animator; // 0x10
		::UnityEngine::Mesh* meshLOD3; // 0x18
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD0AssetRef; // 0x20
		::UnityEngine::Material* commonSimpleDitherMaterial; // 0x28
		::UnityEngine::Avatar* avatar; // 0x30
		::UnityEngine::GameObject* go; // 0x38
		::UnityEngine::MdbComponent* mdbComponent; // 0x40
		::UnityEngine::SkinnedMeshRenderer* skMeshRenderer; // 0x48
		::UnityEngine::Material* commonSimpleMaterial; // 0x50
		::UnityEngine::Mesh* meshLOD2; // 0x58
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD3AssetRef; // 0x60
		::NPCCrowd::NPCSoftAssetPathList_1<::UnityEngine::Material*>* materialsAssetRef; // 0x68
		::UnityEngine::Mesh* meshLOD1; // 0x70
		::UnityEngine::MeshRenderer* meshRenderer; // 0x78
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD1AssetRef; // 0x80
		::UnityEngine::GameObject* part; // 0x88
		::UnityEngine::Mesh* mesh; // 0x90
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* mdbPoseAssetRef; // 0x98
		::System::Threading::CancellationTokenSource* mdbtaskToken; // 0xA0
		::UnityEngine::MeshFilter* meshFilter; // 0xA8
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Avatar*>* avatarAssetRef; // 0xB0
		::UnityEngine::MeshFilter* simpleMeshFilter; // 0xB8
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD2AssetRef; // 0xC0
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0xC8
		::UnityEngine::GameObject* simpleGo; // 0xD0
		::NapRenderer* napRenderer; // 0xD8
		::UnityEngine::MeshRenderer* simpleMeshRenderer; // 0xE0
		::UnityEngine::Mesh* commonSimpleMesh; // 0xE8
		::System::Boolean bNeedReadGpuSlotData; // 0xF0
		::System::Boolean bMix; // 0xF1
		::System::Boolean bAvatarAssetHasAnimation; // 0xF2
		::System::Int32 attachedNpcGpuAnimationInstanceId; // 0xF4

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
