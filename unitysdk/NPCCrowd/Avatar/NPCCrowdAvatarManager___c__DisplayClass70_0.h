#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryAnimationInfo_FollowMdbPose.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/MDB_StateType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10667390)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS70_0__INITACCESSORYMDBCOMPONENT_B__0_OFFSET UNITYSDK_OFFSET(0x106673A0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS70_0__INITACCESSORYMDBCOMPONENT_G__GETMDBSTATE_1_OFFSET UNITYSDK_OFFSET(0x106673B0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass70_0_TypeDefinitionIndex = 60734;

	class NPCCrowdAvatarManager___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::NPCCrowd::Accessories::NPCAccessory* accessory; // 0x10
		::System::Int32 animationID; // 0x18
		::System::Boolean isPathNpc; // 0x1C
		::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowMdbPose poseInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitAccessoryMdbComponent_b__0(::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowMdbPose pose)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowMdbPose))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS70_0__INITACCESSORYMDBCOMPONENT_B__0_OFFSET))(this, pose);
		}

		::System::Boolean _InitAccessoryMdbComponent_g__GetMdbState_1(::UnityEngine::MDB_StateType& stateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MDB_StateType&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS70_0__INITACCESSORYMDBCOMPONENT_G__GETMDBSTATE_1_OFFSET))(this, stateType);
		}
	};
}
