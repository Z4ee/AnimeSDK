#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
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
template <typename T> class NPCSoftAssetPathList_1;
template <typename T> class NPCSoftAssetPath_1;

#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BCANFOLLOWGPUBONE_OFFSET UNITYSDK_OFFSET(0xFB55D60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BHASANIMATION_OFFSET UNITYSDK_OFFSET(0xFB55D00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO_GET_BREADGPUSLOTDATA_OFFSET UNITYSDK_OFFSET(0xFB55CA0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYREFERENCECOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xFB55E70)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryReferenceComponentInfo_TypeDefinitionIndex = 42546;

	class NPCAccessoryReferenceComponentInfo : public ::System::Object
	{
	public:
		::System::Threading::CancellationTokenSource* mdbtaskToken; // 0x10
		::UnityEngine::Avatar* avatar; // 0x18
		::UnityEngine::GameObject* go; // 0x20
		::NPCSoftAssetPath_1<::UnityEngine::Avatar*>* avatarAssetRef; // 0x28
		::UnityEngine::MeshRenderer* meshRenderer; // 0x30
		::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD1AssetRef; // 0x38
		::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD3AssetRef; // 0x40
		::NapRenderer* napRenderer; // 0x48
		::NPCSoftAssetPathList_1<::UnityEngine::Material*>* materialsAssetRef; // 0x50
		::UnityEngine::Mesh* meshLOD3; // 0x58
		::NPCSoftAssetPath_1<::UnityEngine::AnimationClip*>* mdbPoseAssetRef; // 0x60
		::UnityEngine::Mesh* mesh; // 0x68
		::UnityEngine::Mesh* meshLOD2; // 0x70
		::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD2AssetRef; // 0x78
		::UnityEngine::Animator* animator; // 0x80
		::UnityEngine::SkinnedMeshRenderer* skMeshRenderer; // 0x88
		::UnityEngine::MeshFilter* meshFilter; // 0x90
		::UnityEngine::MdbComponent* mdbComponent; // 0x98
		::UnityEngine::GameObject* part; // 0xA0
		::UnityEngine::Mesh* meshLOD1; // 0xA8
		::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* meshLOD0AssetRef; // 0xB0
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0xB8
		::System::Int32 attachedNpcGpuAnimationInstanceId; // 0xC0
		::System::Boolean bAvatarAssetHasAnimation; // 0xC4
		::System::Boolean bNeedReadGpuSlotData; // 0xC5
		::System::Boolean bMix; // 0xC6

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
