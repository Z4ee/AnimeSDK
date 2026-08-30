#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xD4D72D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0xD4D6D30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETDAMPTARGETSPACE_OFFSET UNITYSDK_OFFSET(0xD4D6BD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETFOLLOWDAMPENTITYMOVE_OFFSET UNITYSDK_OFFSET(0xD4D6C90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0xD4D7560)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCinemachineMoveFollowTargetInSpecificSpace_TypeDefinitionIndex = 76385;

	class FiveDimCinemachineMoveFollowTargetInSpecificSpace : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Boolean BIONPINEFAL; // 0x28
		::Class_2_B9E8C2EEAA5C96EC* KHDOEMCMAEF; // 0x30
		::Struct_2_EAC1BB0F093534A5 POMDAPNLEAF; // 0x38
		::Struct_2_EAC1BB0F093534A5 OGOLNNFJJEI; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE__CTOR_OFFSET))(this);
		}

		::System::Void SetDampTargetSpace(::Class_2_B9E8C2EEAA5C96EC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETDAMPTARGETSPACE_OFFSET))(this, a1);
		}

		::System::Void SetFollowDampEntityMove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETFOLLOWDAMPENTITYMOVE_OFFSET))(this, a1);
		}

		::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CameraState& a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
