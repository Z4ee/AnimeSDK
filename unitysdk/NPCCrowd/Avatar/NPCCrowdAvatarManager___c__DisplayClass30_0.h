#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class IKSolverLookAt_LookAtBone; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10666F80)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__ENABLEIKCOMPONENT_B__0_OFFSET UNITYSDK_OFFSET(0x10666F90)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__ENABLEIKCOMPONENT_B__2_OFFSET UNITYSDK_OFFSET(0x10667190)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass30_0_TypeDefinitionIndex = 60725;

	class NPCCrowdAvatarManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* boneTransformDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* _EnableIKComponent_b__0(::System::Int32 spineBoneID)
		{
			return ((::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__ENABLEIKCOMPONENT_B__0_OFFSET))(this, spineBoneID);
		}

		::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* _EnableIKComponent_b__2(::System::Int32 eyeBoneID)
		{
			return ((::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__ENABLEIKCOMPONENT_B__2_OFFSET))(this, eyeBoneID);
		}
	};
}
