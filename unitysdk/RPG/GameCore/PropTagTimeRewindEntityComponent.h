#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BindTimeRewindMultiControlType.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PropTagComponent.h"
#include "unitysdk/RPG/GameCore/TimeRewindObjectType.h"
#include "unitysdk/RPG/GameCore/TimeRewindSelectPointBlendMode.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ContainerAndSeedBind; }
namespace RPG::GameCore { class DestructibleBridgeBind; }
namespace RPG::GameCore { class FoundationAndBallBind; }
namespace RPG::GameCore { class PerformanceSplitObjectBind; }
namespace RPG::GameCore { class TimeRewindEntityAnimOverride; }
namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPTAGTIMEREWINDENTITYCOMPONENT_METHOD_3_5C92603549AF3E1E_OFFSET UNITYSDK_OFFSET(0x1D188E70)
#define RPG_GAMECORE_PROPTAGTIMEREWINDENTITYCOMPONENT_METHOD_3_99012EB67144EAD7_OFFSET UNITYSDK_OFFSET(0x1D1882D0)
#define RPG_GAMECORE_PROPTAGTIMEREWINDENTITYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1882B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagTimeRewindEntityComponent_TypeDefinitionIndex = 17355;

	class PropTagTimeRewindEntityComponent : public ::RPG::GameCore::PropTagComponent
	{
	public:
		::RPG::GameCore::TimeRewindObjectType TimeRewindObjectType; // 0x18
		::System::Boolean EnablePersistence; // 0x1C
		::System::Boolean EnableOverrideEraStateType; // 0x1D
		::RPG::GameCore::EraStateType OverrideEraStateType; // 0x20
		::System::Boolean RebuildWhenHitPlayer; // 0x24
		::System::Boolean IgnoreOtherTimeRewindHit; // 0x25
		::System::Boolean HitPlayerWhenRewind; // 0x26
		::System::Boolean RewindDisableCameraDamp; // 0x27
		::System::String* InitState; // 0x28
		::System::Boolean OptimizeCameraLookAt; // 0x30
		::System::Boolean ResetCameraAxisWhenRewindFinish; // 0x31
		::System::String* LookAtAttachPoint; // 0x38
		::System::String* BackupLookAtAttachPoint; // 0x40
		::System::Single LockRangeOverride; // 0x48
		::System::Single MaxRewindTimeOverride; // 0x4C
		::System::String* SelectTargetAttachPoint; // 0x50
		::System::String* BackupSelectTargetAttachPoint; // 0x58
		::RPG::GameCore::TimeRewindSelectPointBlendMode SelectPointBlendType; // 0x60
		::RPG::MVector3 LookAtOffsetOverride; // 0x64
		::Il2CppArray<::RPG::GameCore::TimeRewindEntityAnimOverride*>* AnimStateOverride; // 0x70
		::System::String* TimeRewindAnimEventJson; // 0x78
		::System::UInt32 ResetPlayerAnchorID; // 0x80
		::System::String* DetectColliderAttachPoint; // 0x88
		::System::Boolean UseSpecialRewindView; // 0x90
		::System::Boolean EnableReverseRewind; // 0x91
		::System::Boolean EnableLoopRewindControl; // 0x92
		::System::Boolean EnableLoopRewindSnap; // 0x93
		::System::Single EnableLoopRewindSnapRatio; // 0x94
		::System::Boolean ConstraintLoopRewindTime; // 0x98
		::RPG::GameCore::BindTimeRewindMultiControlType BindSpecialControl; // 0x9C
		::RPG::GameCore::FoundationAndBallBind* FoundationAndBallBind; // 0xA0
		::RPG::GameCore::DestructibleBridgeBind* DestructibleBridgeBind; // 0xA8
		::RPG::GameCore::ContainerAndSeedBind* ContainerAndSeedBind; // 0xB0
		::RPG::GameCore::PerformanceSplitObjectBind* PerformanceSplitObjectBind; // 0xB8
		::System::Boolean EnableOverrideOverlayConfig; // 0xC0
		::RPG::GameCore::TimeRewindMaterialOverlayConfig* OverrideOverlayConfig; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGTIMEREWINDENTITYCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5C92603549AF3E1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagTimeRewindEntityComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagTimeRewindEntityComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGTIMEREWINDENTITYCOMPONENT_METHOD_3_5C92603549AF3E1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99012EB67144EAD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagTimeRewindEntityComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagTimeRewindEntityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGTIMEREWINDENTITYCOMPONENT_METHOD_3_99012EB67144EAD7_OFFSET))(a1, a2);
		}
	};
}
