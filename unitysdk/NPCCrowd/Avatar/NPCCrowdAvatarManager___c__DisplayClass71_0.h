#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryAnimationInfo_FollowMdbPose.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Accessories { class NPCAccessoryMDBPose; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE57C180)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS71_0__INITACCESSORYMDBPOSE_B__0_OFFSET UNITYSDK_OFFSET(0xE57C190)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS71_0__INITACCESSORYMDBPOSE_B__1_OFFSET UNITYSDK_OFFSET(0xE57C1B0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass71_0_TypeDefinitionIndex = 60729;

	class NPCCrowdAvatarManager___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshAss; // 0x10
		::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowMdbPose poseInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitAccessoryMdbPose_b__0(::NPCCrowd::Accessories::NPCAccessoryMDBPose* poseConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryMDBPose*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS71_0__INITACCESSORYMDBPOSE_B__0_OFFSET))(this, poseConfig);
		}

		::System::Boolean _InitAccessoryMdbPose_b__1(::NPCCrowd::Accessories::NPCAccessoryMDBPose* poseConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryMDBPose*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS71_0__INITACCESSORYMDBPOSE_B__1_OFFSET))(this, poseConfig);
		}
	};
}
