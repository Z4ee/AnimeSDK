#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdvancedCollisionConfigData_ResolutionStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }

#define MOLEMOLE_ADVANCEDCOLLISIONCONFIGDATA_BUILDRUNNINGTAG_OFFSET UNITYSDK_OFFSET(0x10CCB8F0)
#define MOLEMOLE_ADVANCEDCOLLISIONCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCBA00)

namespace MoleMole
{
	inline static constexpr unsigned int AdvancedCollisionConfigData_TypeDefinitionIndex = 74255;

	class AdvancedCollisionConfigData : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask COLLIDER_AGAINSTMASK; // 0x10
		::System::String* COLLIDER_IGNORETAG; // 0x18
		::Il2CppArray<::System::String*>* TransparentCollisionTagV2; // 0x20
		::Il2CppArray<::System::String*>* StageCollisionTagV2; // 0x28
		::UnityEngine::LayerMask COLLIDER_TRANSPARENTLAYERS; // 0x30
		::System::Single COLLIDER_MINDISFROMTARGET; // 0x34
		::System::Single COLLIDER_DISTANCELIMIT; // 0x38
		::System::Single COLLIDER_CAMERARADIUS; // 0x3C
		::System::Single COLLIDERGROUND_CAMERARADIUS; // 0x40
		::System::Single m_MinimumOcclusionTime; // 0x44
		::MoleMole::AdvancedCollisionConfigData_ResolutionStrategy COLLIDER_STRATEGY; // 0x48
		::System::Int32 m_MaximumEffort; // 0x4C
		::System::Single m_SmoothingTime; // 0x50
		::System::Single m_RadiusAscSmoothingTime; // 0x54
		::System::Single m_RadiusDescSmoothingTime; // 0x58
		::System::Single m_Damping; // 0x5C
		::System::Single m_DampingWhenOccluded; // 0x60
		::System::Single m_DampingWhenOccludedDelayCorrection; // 0x64
		::System::Single m_DampingDeltaWhenOccludedInShot; // 0x68
		::System::Int32 RunningIgnoreTag; // 0x6C
		::Il2CppArray<::System::Int32>* RunningTransparentTag; // 0x70
		::Il2CppArray<::System::Int32>* RunningStageColliderTag; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADVANCEDCOLLISIONCONFIGDATA__CTOR_OFFSET))(this);
		}

		::System::Void BuildRunningTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADVANCEDCOLLISIONCONFIGDATA_BUILDRUNNINGTAG_OFFSET))(this);
		}
	};
}
