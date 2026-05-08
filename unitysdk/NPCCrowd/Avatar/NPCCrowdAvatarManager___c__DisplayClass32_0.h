#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class IKSolverLookAt_LookAtBone; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D96330)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__ENABLEIKCOMPONENT_B__0_OFFSET UNITYSDK_OFFSET(0x11D96340)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__ENABLEIKCOMPONENT_B__2_OFFSET UNITYSDK_OFFSET(0x11D96540)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass32_0_TypeDefinitionIndex = 58949;

	class NPCCrowdAvatarManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* boneTransformDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* _EnableIKComponent_b__0(::System::Int32 spineBoneID)
		{
			return ((::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__ENABLEIKCOMPONENT_B__0_OFFSET))(this, spineBoneID);
		}

		::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* _EnableIKComponent_b__2(::System::Int32 eyeBoneID)
		{
			return ((::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__ENABLEIKCOMPONENT_B__2_OFFSET))(this, eyeBoneID);
		}
	};
}
