#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/HitReactionVRIK_Offset.h"

namespace RootMotion::FinalIK { class HitReactionVRIK_PositionOffset_PositionOffsetLink; }
namespace RootMotion::FinalIK { class VRIK; }
namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_CROSSFADESTART_OFFSET UNITYSDK_OFFSET(0x1FA15C90)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1FA15A50)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_ONAPPLY_OFFSET UNITYSDK_OFFSET(0x1FA15D00)
#define ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA16110)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReactionVRIK_PositionOffset_TypeDefinitionIndex = 38890;

	class HitReactionVRIK_PositionOffset : public ::RootMotion::FinalIK::HitReactionVRIK_Offset
	{
	public:
		::System::Int32 forceDirCurveIndex; // 0x48
		::System::Int32 upDirCurveIndex; // 0x4C
		::Il2CppArray<::RootMotion::FinalIK::HitReactionVRIK_PositionOffset_PositionOffsetLink*>* offsetLinks; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET__CTOR_OFFSET))(this);
		}

		::System::Single GetLength(::Il2CppArray<::UnityEngine::AnimationCurve*>* curves)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::UnityEngine::AnimationCurve*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_GETLENGTH_OFFSET))(this, curves);
		}

		::System::Void CrossFadeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_CROSSFADESTART_OFFSET))(this);
		}

		::System::Void OnApply(::RootMotion::FinalIK::VRIK* ik, ::Il2CppArray<::UnityEngine::AnimationCurve*>* curves, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIK*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTIONVRIK_POSITIONOFFSET_ONAPPLY_OFFSET))(this, ik, curves, weight);
		}
	};
}
