#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryAnimationInfo_FollowMdbPose.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAnimationClipInfo; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimationInfo_DampingIK; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimationInfo_FollowAnimationClip; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MDBAvatar; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class TextAsset; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_ALLFOLLOWANIMATIONCLIPSETTINGS_OFFSET UNITYSDK_OFFSET(0x12D0F500)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_MDBCLOTHS_OFFSET UNITYSDK_OFFSET(0x12D0F750)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_MDBCONTROLLER_OFFSET UNITYSDK_OFFSET(0x12D0F9D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_MDBHUMAN_OFFSET UNITYSDK_OFFSET(0x12D0F590)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_REFRESHANIMDATA_OFFSET UNITYSDK_OFFSET(0x12D0FB90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_REFRESH_OFFSET UNITYSDK_OFFSET(0x12D100A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0x12D10230)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0x12D10500)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimationAssetsSO_TypeDefinitionIndex = 76093;

	class NPCAccessoryAnimationAssetsSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAnimationClipInfo*>* animationClips; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowAnimationClip*>* followAnimationClipSettings; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowAnimationClip*>* customFollowAnimationClipSettings; // 0x28
		::System::Boolean bUseDampingIK; // 0x30
		::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_DampingIK* dampingIKSettings; // 0x38
		::System::Boolean bUseMDB; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowMdbPose>* customFollowAnimationMdbPoses; // 0x48
		::UnityEngine::Vector3 gpuFollowOffsetEulerAngles; // 0x50
		::UnityEngine::Vector3 gpuFollowOffsetLocalPos; // 0x5C
		::System::Boolean overrideMdbClothStateForPathNPC; // 0x68
		::UnityEngine::MDBAvatar* mdbAvatar; // 0x70
		::Foundation::AssetPath mdbHumanAssetPath; // 0x78
		::UnityEngine::TextAsset* _mdbHumanAsset; // 0x88
		::Foundation::AssetRequestHandle _mdbHumanHandle; // 0x90
		::Il2CppArray<::Foundation::AssetPath>* mdbClothAssetPathList; // 0xB0
		::Il2CppArray<::UnityEngine::TextAsset*>* _mdbClothAssets; // 0xB8
		::Il2CppArray<::Foundation::AssetRequestHandle>* _mdbClothHandleList; // 0xC0
		::Foundation::AssetPath mdbControllerAssetPath; // 0xC8
		::UnityEngine::RuntimeAnimatorController* _mdbControllerAsset; // 0xD8
		::Foundation::AssetRequestHandle _mdbControllerHandle; // 0xE0
		::System::Boolean bIsInited; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Accessories::NPCAccessoryAnimationClipInfo*>* animationDict; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* followNPCAnimDict; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowAnimationClip*>* get_allFollowAnimationClipSettings()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowAnimationClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_ALLFOLLOWANIMATIONCLIPSETTINGS_OFFSET))(this);
		}

		::UnityEngine::TextAsset* get_MdbHuman()
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_MDBHUMAN_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::TextAsset*>* get_MdbCloths()
		{
			return ((::Il2CppArray<::UnityEngine::TextAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_MDBCLOTHS_OFFSET))(this);
		}

		::UnityEngine::RuntimeAnimatorController* get_MdbController()
		{
			return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_GET_MDBCONTROLLER_OFFSET))(this);
		}

		::System::Void RefreshAnimData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_REFRESHANIMDATA_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_REFRESH_OFFSET))(this);
		}

		::System::Void UnLoadedAssets(::NPCCrowd::EUnloadAssetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONASSETSSO_UNLOADEDASSETS_OFFSET))(this, reason);
		}
	};
}
