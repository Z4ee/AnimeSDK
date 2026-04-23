#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"

class Class_2_9DD8A46984F1AFFD;
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xA69CAD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0xA69C630)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETDAMPTARGETSPACE_OFFSET UNITYSDK_OFFSET(0xA69C4E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETFOLLOWDAMPENTITYMOVE_OFFSET UNITYSDK_OFFSET(0xA69C590)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA69CD60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE___IFIXBASEPROXY_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0xA69CD70)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCinemachineMoveFollowTargetInSpecificSpace_TypeDefinitionIndex = 70569;

	class FiveDimCinemachineMoveFollowTargetInSpecificSpace : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Boolean Field_6_0; // 0x28
		::Class_2_9DD8A46984F1AFFD* Field_6_1; // 0x30
		::Struct_2_EAC1BB0F093534A5 Field_6_2; // 0x38
		::Struct_2_EAC1BB0F093534A5 Field_6_3; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE__CTOR_OFFSET))(this);
		}

		::System::Void SetDampTargetSpace(::Class_2_9DD8A46984F1AFFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE_SETDAMPTARGETSPACE_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* P0, ::Cinemachine::CameraState& P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCINEMACHINEMOVEFOLLOWTARGETINSPECIFICSPACE___IFIXBASEPROXY_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, P0, P1, P2);
		}
	};
}
