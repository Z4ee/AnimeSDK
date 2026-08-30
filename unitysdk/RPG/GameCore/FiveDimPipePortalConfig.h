#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCardinalDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPipeCameraActiveCondition.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPipeCameraConfig; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMPIPEPORTALCONFIG_METHOD_3_0C0D5A34FF44B0AD_OFFSET UNITYSDK_OFFSET(0x1D870560)
#define RPG_GAMECORE_FIVEDIMPIPEPORTALCONFIG_METHOD_3_403B772D5D698D70_OFFSET UNITYSDK_OFFSET(0x1D870520)
#define RPG_GAMECORE_FIVEDIMPIPEPORTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D870550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPipePortalConfig_TypeDefinitionIndex = 18359;

	class FiveDimPipePortalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPipePortal; // 0x10
		::RPG::GameCore::FiveDimTriggerShape* HintTrigger; // 0x18
		::RPG::GameCore::FiveDimCardinalDirection Direction; // 0x20
		::System::Single VerticalOffset; // 0x24
		::System::Single HorizontalOffset; // 0x28
		::System::Single CenterTolerance; // 0x2C
		::System::Single SnapTolerance; // 0x30
		::System::Single SnapLerpDuration; // 0x34
		::System::Single InDistance; // 0x38
		::System::Single OutExtraDistance; // 0x3C
		::System::Boolean HasValidTarget; // 0x40
		::System::Boolean HasCustomTeleport; // 0x41
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x48
		::System::Boolean SyncLoadTargetLevel; // 0x50
		::System::Boolean UsePipeCamera; // 0x51
		::RPG::GameCore::FiveDimPipeCameraActiveCondition PipeCameraType; // 0x54
		::RPG::GameCore::FiveDimPipeCameraConfig* PipeCameraConfig; // 0x58
		::System::Boolean NoCameraBlend; // 0x60
		::System::Boolean TriggerFiveDimLoadingView; // 0x61
		::System::Boolean ReverseEnterGravity; // 0x62
		::System::Boolean GravityUseNegativeY; // 0x63
		::RPG::GameCore::LittleGameEvent* StartHintEvent; // 0x68
		::RPG::GameCore::LittleGameEvent* StopHintEvent; // 0x70
		::RPG::GameCore::LittleGameEvent* EnterPipeEvent; // 0x78
		::RPG::GameCore::LittleGameEvent* ExitPipeEvent; // 0x80
		::RPG::GameCore::LittleGameEvent* StartTeleportEvent; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPEPORTALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_403B772D5D698D70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipePortalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipePortalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPEPORTALCONFIG_METHOD_3_403B772D5D698D70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C0D5A34FF44B0AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPipePortalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPEPORTALCONFIG_METHOD_3_0C0D5A34FF44B0AD_OFFSET))(a1, a2);
		}
	};
}
