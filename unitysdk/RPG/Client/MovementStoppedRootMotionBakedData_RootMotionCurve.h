#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_ROOTMOTIONCURVE_GET_PROTECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1537A0)
#define RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_ROOTMOTIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x153800)

namespace RPG::Client
{
	inline static constexpr unsigned int MovementStoppedRootMotionBakedData_RootMotionCurve_TypeDefinitionIndex = 68781;

	struct alignas(8) MovementStoppedRootMotionBakedData_RootMotionCurve
	{
		::System::Single normalizedTime; // 0x10
		::System::Single length; // 0x14
		::System::Single protectLength; // 0x18
		::System::Single distance; // 0x1C
		::UnityEngine::AnimationCurve* curve; // 0x20

		/*
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Keyframe>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_ROOTMOTIONCURVE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		::System::Single get_ProtectDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_ROOTMOTIONCURVE_GET_PROTECTDISTANCE_OFFSET))(this);
		}
	};
}
