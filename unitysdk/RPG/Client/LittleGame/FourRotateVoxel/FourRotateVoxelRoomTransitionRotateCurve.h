#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_3_912CC478F2B21832;
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD515530)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_METHOD_6_71BDFB9DD92E722F_OFFSET UNITYSDK_OFFSET(0xD5151F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_METHOD_6_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xD515590)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xD514CF0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD5158C0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelRoomTransitionRotateCurve_TypeDefinitionIndex = 76370;

	class FourRotateVoxelRoomTransitionRotateCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single RotateAngle; // 0x78
		::System::Boolean UseGlobalRotateDuration; // 0x7C
		::System::Single LocalRotateDuration; // 0x80
		::System::Single GlobalRotateDurationScale; // 0x84
		::System::Boolean UseGlobalRotateCurve; // 0x88
		::System::Boolean PreRotateResetPlayerVisual; // 0x89
		::System::Boolean PreRotateApplyShadowRule; // 0x8A
		::System::Single PreRotateSettleDelay; // 0x8C
		::System::Boolean PreRotateFixPlayerDepth; // 0x90
		::System::Int32 PreRotateDepthToScreenOffset; // 0x94
		::System::Single ExitOpenMaskProgress; // 0x98
		::System::Single ExitFullMaskProgress; // 0x9C
		::System::Single ExitMaskFadeInDuration; // 0xA0
		::System::Single ExitOpenLeadTime; // 0xA4
		::System::Boolean RequireFullMaskBeforeTeleport; // 0xA8
		::System::Single TeleportDelayAfterFullMask; // 0xAC
		::System::Single EnterCloseMaskProgress; // 0xB0
		::System::Single EnterMaskFadeOutDuration; // 0xB4
		::System::Single EnterCloseLeadTime; // 0xB8
		::System::Single CurveTimeoutSeconds; // 0xBC
		::System::Single CurveTimeoutBufferSeconds; // 0xC0
		::System::Boolean ForceCloseMaskOnAbort; // 0xC4
		::System::Action* BJLJAHMLKIO; // 0xC8
		::UnityEngine::Vector3 OPJFANBFDEJ; // 0xD0
		::UnityEngine::Vector3 PLLHAANIOPC; // 0xDC
		::UnityEngine::Quaternion ABDCCPNENMK; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE__CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*, ::Class_1_8385F95FFA7FAA1C*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_D2A08F3D951A0C1D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_METHOD_6_D2A08F3D951A0C1D_OFFSET))(this, a1);
		}

		::System::Void Method_6_71BDFB9DD92E722F(::Class_1_2CDF619C23140440* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELROOMTRANSITIONROTATECURVE_METHOD_6_71BDFB9DD92E722F_OFFSET))(this, a1);
		}
	};
}
