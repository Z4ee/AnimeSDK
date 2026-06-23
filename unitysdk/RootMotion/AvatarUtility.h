#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/HumanBodyBones.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RootMotion { class BakerHumanoidQT; }
namespace RootMotion { class TQ; }
namespace UnityEngine { class Avatar; }

#define ROOTMOTION_AVATARUTILITY_GETIKGOALTQ_OFFSET UNITYSDK_OFFSET(0x1E62D500)
#define ROOTMOTION_AVATARUTILITY_GETPOSTROTATION_OFFSET UNITYSDK_OFFSET(0x1E62D1F0)
#define ROOTMOTION_AVATARUTILITY_GETWORLDSPACEIKGOAL_OFFSET UNITYSDK_OFFSET(0x1E62E8E0)
#define ROOTMOTION_AVATARUTILITY_HUMANIDFROMAVATARIKGOAL_OFFSET UNITYSDK_OFFSET(0x1E62D4E0)
#define ROOTMOTION_AVATARUTILITY_WORLDSPACEIKGOALTOBONE_OFFSET UNITYSDK_OFFSET(0x1E62E0B0)
#define ROOTMOTION_AVATARUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62EB60)

namespace RootMotion
{
	inline static constexpr unsigned int AvatarUtility_TypeDefinitionIndex = 38291;

	class AvatarUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_AVATARUTILITY__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Quaternion GetPostRotation(::UnityEngine::Avatar* avatar, ::UnityEngine::AvatarIKGoal avatarIKGoal)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Avatar*, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_AVATARUTILITY_GETPOSTROTATION_OFFSET))(avatar, avatarIKGoal);
		}

		static ::RootMotion::TQ* GetIKGoalTQ(::UnityEngine::Avatar* avatar, ::System::Single humanScale, ::UnityEngine::AvatarIKGoal avatarIKGoal, ::RootMotion::TQ* bodyPositionRotation, ::RootMotion::TQ* boneTQ)
		{
			return ((::RootMotion::TQ*(*)(::UnityEngine::Avatar*, ::System::Single, ::UnityEngine::AvatarIKGoal, ::RootMotion::TQ*, ::RootMotion::TQ*))((::PBYTE)hIl2Cpp + ROOTMOTION_AVATARUTILITY_GETIKGOALTQ_OFFSET))(avatar, humanScale, avatarIKGoal, bodyPositionRotation, boneTQ);
		}

		static ::RootMotion::TQ* WorldSpaceIKGoalToBone(::RootMotion::TQ* goalTQ, ::UnityEngine::Avatar* avatar, ::UnityEngine::AvatarIKGoal avatarIKGoal)
		{
			return ((::RootMotion::TQ*(*)(::RootMotion::TQ*, ::UnityEngine::Avatar*, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_AVATARUTILITY_WORLDSPACEIKGOALTOBONE_OFFSET))(goalTQ, avatar, avatarIKGoal);
		}

		static ::RootMotion::TQ* GetWorldSpaceIKGoal(::RootMotion::BakerHumanoidQT* ikQT, ::RootMotion::BakerHumanoidQT* rootQT, ::System::Single time, ::System::Single humanScale)
		{
			return ((::RootMotion::TQ*(*)(::RootMotion::BakerHumanoidQT*, ::RootMotion::BakerHumanoidQT*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_AVATARUTILITY_GETWORLDSPACEIKGOAL_OFFSET))(ikQT, rootQT, time, humanScale);
		}

		static ::UnityEngine::HumanBodyBones HumanIDFromAvatarIKGoal(::UnityEngine::AvatarIKGoal avatarIKGoal)
		{
			return ((::UnityEngine::HumanBodyBones(*)(::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_AVATARUTILITY_HUMANIDFROMAVATARIKGOAL_OFFSET))(avatarIKGoal);
		}
	};
}
