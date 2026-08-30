#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_LockFovReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class Freelook3rdModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class ZoomModuleConfig; }

#define RPG_CLIENT_RPGCINEMACHINEZOOM_AWAKE_OFFSET UNITYSDK_OFFSET(0xDDCBAC0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_CLEARLOCKEDFIELDOFVIEWRATIO_OFFSET UNITYSDK_OFFSET(0xDDCBA70)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xDDCB710)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0xDDCB670)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GET_ENABLEZOOMCHANGEDATA_OFFSET UNITYSDK_OFFSET(0xDDCE280)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GET_FIELDOFVIEWRATIO_OFFSET UNITYSDK_OFFSET(0xDDCE2A0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_LOCKFOV_OFFSET UNITYSDK_OFFSET(0xDDCB880)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_04C3EB7C71C7F711_OFFSET UNITYSDK_OFFSET(0xDDCD630)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xDDCD480)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xDDCDBC0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xDDCD3A0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xDDCD960)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDDCE130)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xDDCDB40)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xDDCDA00)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_69D7C9E34E9233CC_OFFSET UNITYSDK_OFFSET(0xDDCC5E0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_A64A73F9FA074B2D_OFFSET UNITYSDK_OFFSET(0xDDCDD50)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0xDDCE180)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xDDCC500)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_C94001EE8BDC2D15_OFFSET UNITYSDK_OFFSET(0xDDCDC30)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDDCE230)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xDDCDAF0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDDCD910)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xDDCDA80)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xDDCE0C0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_E5CFBBB7C35D9EA3_OFFSET UNITYSDK_OFFSET(0xDDCCD20)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xDDCD340)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDCB5B0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xDDCBC90)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_RELOADMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xDDCB760)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_RESETZOOMDISTANCEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xDDCB4F0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_SETLOCKEDFIELDOFVIEWRATIO_OFFSET UNITYSDK_OFFSET(0xDDCBA10)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_SET_ENABLEZOOMCHANGEDATA_OFFSET UNITYSDK_OFFSET(0xDDCE290)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_STOPUPDATE_OFFSET UNITYSDK_OFFSET(0xDDCB6C0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_UNLOCKFOV_OFFSET UNITYSDK_OFFSET(0xDDCB950)
#define RPG_CLIENT_RPGCINEMACHINEZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xDDCE300)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineZoom_TypeDefinitionIndex = 69672;

	class RPGCinemachineZoom : public ::Cinemachine::CinemachineExtension
	{
	public:
		// static const ::System::Single GIJGKOPNDBJ; // 0x0
		::System::Single m_ZoomSensitive; // 0x28
		::System::Single m_Damping; // 0x2C
		::System::Nullable_1<::System::Single> KGABOELBDFI; // 0x30
		::System::Single ACHCADLBGHB; // 0x38
		::System::Single GFFODDDOJCL; // 0x3C
		::System::Boolean AGLOGGODABF; // 0x40
		::System::Single JJJMDDBOJGA; // 0x44
		::System::Nullable_1<::System::Single> BCCHKOFHHIG; // 0x48
		::System::Single EGIIBCLDKBA; // 0x50
		::System::Single IAALGINAHEI; // 0x54
		::System::Single IHJCLMFJCFI; // 0x58
		::System::Nullable_1<::System::Single> BEBNHKJCBLL; // 0x5C
		::System::Nullable_1<::System::Single> BAJDACPIKJI; // 0x64
		::Class_1_D27BF54F25500E5F* MGMKAEJAEOE; // 0x70
		::RPG::Client::PipelineCameraEngine* EGBDJHPFMCD; // 0x78
		::RPG::Client::CameraDataAndFlags* OEPENBEJDCN; // 0x80
		::RPG::Client::ZoomModuleConfig* OECNIGBFPLI; // 0x88
		::RPG::Client::Freelook3rdModuleConfig* HEGMHCKPMHE; // 0x90
		::Cinemachine::CinemachineFreeLook* ODIDIJIBJKK; // 0x98
		::System::Boolean IMKFKHKDNDH; // 0xA0
		::UnityEngine::Vector3 FENLCMOEDMP; // 0xA4
		::System::Single JJNLIEIDEGK; // 0xB0
		::System::Int32 IAHELHLIFND; // 0xB4
		::System::Single GJECNDIGFMD; // 0xB8
		::System::Boolean KIOADONMNJM; // 0xBC
		::System::Single IHKMAPCDELD; // 0xC0
		::System::Single DDMMDBKCHJE; // 0xC4
		::System::Single JAKNBHFCHNN; // 0xC8
		::System::Single DLAKLIOGHFJ; // 0xCC
		::System::Boolean IBNGJNPOMAF; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM__CTOR_OFFSET))(this);
		}

		::System::Void ResetZoomDistanceImmediately(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Nullable_1<::System::Single> a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_RESETZOOMDISTANCEIMMEDIATELY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ONDESTROY_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void StopUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_STOPUPDATE_OFFSET))(this);
		}

		::System::Void EnableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ENABLEUPDATE_OFFSET))(this);
		}

		::System::Void ReloadModuleConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_RELOADMODULECONFIG_OFFSET))(this);
		}

		::System::Void LockFov(::RPG::Client::CameraDataAndFlags_LockFovReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_LockFovReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_LOCKFOV_OFFSET))(this, a1, a2);
		}

		::System::Void UnlockFov(::RPG::Client::CameraDataAndFlags_LockFovReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_LockFovReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_UNLOCKFOV_OFFSET))(this, a1);
		}

		::System::Void SetLockedFieldOfViewRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_SETLOCKEDFIELDOFVIEWRATIO_OFFSET))(this, a1);
		}

		::System::Void ClearLockedFieldOfViewRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_CLEARLOCKEDFIELDOFVIEWRATIO_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_AWAKE_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_6_69D7C9E34E9233CC(::Cinemachine::CameraState& a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_69D7C9E34E9233CC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_E5CFBBB7C35D9EA3(::Cinemachine::CameraState& a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_E5CFBBB7C35D9EA3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_6_A64A73F9FA074B2D(::RPG::Client::Freelook3rdModuleConfig* a1, ::RPG::Client::CameraDataAndFlags* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::Freelook3rdModuleConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_A64A73F9FA074B2D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C94001EE8BDC2D15(::Cinemachine::CameraState& a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::RPG::Client::CameraDataAndFlags*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_C94001EE8BDC2D15_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_6_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Single Method_6_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Single Method_6_D64FD9A228A1C4E0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_D64FD9A228A1C4E0_1_OFFSET))(this);
		}

		::System::Boolean Method_6_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_6_AA972BE565DAF9E3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_AA972BE565DAF9E3_OFFSET))(this);
		}

		::System::Void Method_6_04C3EB7C71C7F711()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_04C3EB7C71C7F711_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Boolean Method_6_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_4DA6D4A624E42CAB_OFFSET))(this);
		}

		::System::Boolean Method_6_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Single Method_6_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_6_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_6_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Single Method_6_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_METHOD_6_3422201382CE593B_OFFSET))(this);
		}

		::System::Boolean get_EnableZoomChangeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GET_ENABLEZOOMCHANGEDATA_OFFSET))(this);
		}

		::System::Void set_EnableZoomChangeData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_SET_ENABLEZOOMCHANGEDATA_OFFSET))(this, a1);
		}

		::System::Single get_FieldOfViewRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GET_FIELDOFVIEWRATIO_OFFSET))(this);
		}
	};
}
