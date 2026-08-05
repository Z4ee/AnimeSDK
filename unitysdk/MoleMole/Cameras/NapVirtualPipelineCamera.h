#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Enum_3_2BD1943B012482C0.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_447;
class Class_0_16E4307DCC419505_625;
namespace Cinemachine { class ICinemachineCamera; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace PipelineCamera { class ICameraCommand; }
namespace PipelineCamera { template <typename T> class ICameraController_1; }
namespace PipelineCamera::Module { class InPlaceBlender; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1623E5B0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDING_OFFSET UNITYSDK_OFFSET(0x1623E430)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CREATEDEFAULTCOLLISIONFILTER_OFFSET UNITYSDK_OFFSET(0x1623E1D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_FORCEINITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1623E840)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1623DB50)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLATESTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1623DCB0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSEQUENCEPLAYER_OFFSET UNITYSDK_OFFSET(0x1623D1D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSUCCESSOR_OFFSET UNITYSDK_OFFSET(0x1623E7B0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1623AF90)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1623AFB0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1623AFD0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_HANDLECAMERACOMMAND_OFFSET UNITYSDK_OFFSET(0x1623DA40)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1623D250)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1623B8F0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDINGREQUIRED_OFFSET UNITYSDK_OFFSET(0x1623E770)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x1623E730)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_06C0C76AF8EC50C5_OFFSET UNITYSDK_OFFSET(0x1623F260)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_21D8228E44360CE8_OFFSET UNITYSDK_OFFSET(0x1623F020)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1623D3D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_67EE00D0D5156D71_OFFSET UNITYSDK_OFFSET(0x1623C4E0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_809790EF08578BDB_OFFSET UNITYSDK_OFFSET(0x1623EC90)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_8F3BAA25FB566B78_OFFSET UNITYSDK_OFFSET(0x1623ECF0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_C4D99CFCA628428A_OFFSET UNITYSDK_OFFSET(0x1623F0B0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_FEED647D1A65D14D_OFFSET UNITYSDK_OFFSET(0x1623EA00)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1623B650)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1623B000)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x1623D0D0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSWITCHTONEWSTAGE_OFFSET UNITYSDK_OFFSET(0x1623D160)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1623CA50)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1623AFA0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1623AFC0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1623DE30)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1623E890)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1623E930)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1623E9A0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1623E9B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera_TypeDefinitionIndex = 69714;

	class NapVirtualPipelineCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::PipelineCamera::ICameraController_1<::Class_0_16E4307DCC419505_447*>* Field_6_1; // 0x68
		::System::Boolean Field_6_0; // 0x70
		::Class_0_16E4307DCC419505_447* Field_6_7; // 0x78
		::Il2CppArray<::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*>* Field_6_6; // 0x80
		::System::Collections::Generic::List_1<::PipelineCamera::Module::InPlaceBlender*>* Field_6_5; // 0x88
		::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_6_4; // 0x90
		::System::Boolean Field_6_11; // 0x98
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Field_6_10; // 0x9C
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Field_6_9; // 0xCC
		::UnityEngine::Transform* lookAt; // 0x100
		::UnityEngine::Transform* follow; // 0x108
		::Cinemachine::CameraState Field_6_14; // 0x110

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStartNewGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSTARTNEWGAME_OFFSET))(this);
		}

		::System::Void OnSwitchToNewStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ONSWITCHTONEWSTAGE_OFFSET))(this);
		}

		::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* GetSequencePlayer(::Enum_3_2BD1943B012482C0 a1)
		{
			return ((::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::Enum_3_2BD1943B012482C0))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSEQUENCEPLAYER_OFFSET))(this, a1);
		}

		::System::Void InitCameraData(::Class_0_16E4307DCC419505_447* a1, ::MoleMole::Cameras::NapVirtual3DActionCamera_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_447*, ::MoleMole::Cameras::NapVirtual3DActionCamera_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_INITCAMERADATA_OFFSET))(this, a1, a2);
		}

		::System::Void HandleCameraCommand(::PipelineCamera::ICameraCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCommand*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_HANDLECAMERACOMMAND_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> GetLastCameraData()
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLASTCAMERADATA_OFFSET))(this);
		}

		::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> GetLatestCameraData()
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETLATESTCAMERADATA_OFFSET))(this);
		}

		static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* CreateDefaultCollisionFilter()
		{
			return ((::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CREATEDEFAULTCOLLISIONFILTER_OFFSET))();
		}

		::System::Void CancelBlending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDING_OFFSET))(this);
		}

		::System::Void CancelBlendingRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_CANCELBLENDINGREQUEST_OFFSET))(this);
		}

		::System::Boolean IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDING_OFFSET))(this);
		}

		::System::Boolean IsBlendingRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_ISBLENDINGREQUIRED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_625* GetSuccessor()
		{
			return ((::Class_0_16E4307DCC419505_625*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_GETSUCCESSOR_OFFSET))(this);
		}

		::System::Void ForceInitCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_FORCEINITCAMERADATA_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___BASE_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_6_FEED647D1A65D14D(::PipelineCamera::WorldBasicCameraData& a1, ::PipelineCamera::WorldBasicCameraData& a2, ::Cinemachine::CameraState& a3)
		{
			return ((::System::Void(*)(::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_FEED647D1A65D14D_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_6_809790EF08578BDB(::PipelineCamera::Module::InPlaceBlender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_809790EF08578BDB_OFFSET))(this, a1);
		}

		::System::Void Method_6_8F3BAA25FB566B78(::Cinemachine::CameraState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_8F3BAA25FB566B78_OFFSET))(this, a1);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_6_21D8228E44360CE8(::Enum_3_2BD1943B012482C0 a1, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_2BD1943B012482C0, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_21D8228E44360CE8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C4D99CFCA628428A(::Cinemachine::CameraState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_C4D99CFCA628428A_OFFSET))(this, a1);
		}

		static ::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData> Method_6_06C0C76AF8EC50C5(::Cinemachine::CameraState& a1)
		{
			return ((::System::ValueTuple_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData>(*)(::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_06C0C76AF8EC50C5_OFFSET))(a1);
		}

		::System::Void Method_6_67EE00D0D5156D71(::PipelineCamera::WorldBasicCameraData a1, ::PipelineCamera::WorldBasicCameraData a2)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA_METHOD_6_67EE00D0D5156D71_OFFSET))(this, a1, a2);
		}
	};
}
