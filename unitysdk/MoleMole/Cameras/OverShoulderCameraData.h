#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraAxisState.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x8163F0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_ISINFOCUSTARGETMODE_OFFSET UNITYSDK_OFFSET(0x816420)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET UNITYSDK_OFFSET(0x816400)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET UNITYSDK_OFFSET(0x816410)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x78CE30)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_01DD87652E0552FE_OFFSET UNITYSDK_OFFSET(0x150E1FA0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x816860)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1302A164EE4E310C_OFFSET UNITYSDK_OFFSET(0x8165B0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_162A7A6AD55533F2_OFFSET UNITYSDK_OFFSET(0x8165C0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1750B3D267C59C5C_OFFSET UNITYSDK_OFFSET(0x150E0D50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2261B997D0CEAB94_OFFSET UNITYSDK_OFFSET(0x8165A0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2923CE4B2F0850CF_OFFSET UNITYSDK_OFFSET(0x8167A0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x816670)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2D69DEA94F4D6D5B_OFFSET UNITYSDK_OFFSET(0x816AC0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_30A6DC3A61562D07_OFFSET UNITYSDK_OFFSET(0x816C70)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_43F7F5C3E587A224_OFFSET UNITYSDK_OFFSET(0x816C80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4598DED14A91B743_OFFSET UNITYSDK_OFFSET(0x816890)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4B75E1858CDBA430_OFFSET UNITYSDK_OFFSET(0x816570)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5DBD0C9CB5B2C268_OFFSET UNITYSDK_OFFSET(0x816AA0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x816880)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6A7F69A381F965E9_OFFSET UNITYSDK_OFFSET(0x816B30)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6E9A69E078D639A9_OFFSET UNITYSDK_OFFSET(0x816C90)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x150DFB80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_851D7650AB039B8E_OFFSET UNITYSDK_OFFSET(0x816980)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_99A2136794C075E7_OFFSET UNITYSDK_OFFSET(0x8168B0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_9F9F1B488F43C59E_OFFSET UNITYSDK_OFFSET(0x816850)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_A0A1BDA10381BB7E_OFFSET UNITYSDK_OFFSET(0x150E18D0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_AB508AA7C4C9D894_OFFSET UNITYSDK_OFFSET(0x150E0E80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x8166E0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_C8A5A4E24104372A_1_OFFSET UNITYSDK_OFFSET(0x816BC0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_C8A5A4E24104372A_OFFSET UNITYSDK_OFFSET(0x816B20)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x8168E0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0x8168A0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_E57456F36F09A25C_OFFSET UNITYSDK_OFFSET(0x816780)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x8169B0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x816790)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FD91F0343DA6FC30_OFFSET UNITYSDK_OFFSET(0x816BD0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FDFA9E89965D071D_OFFSET UNITYSDK_OFFSET(0x816460)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x816430)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraData_TypeDefinitionIndex = 71843;

	struct alignas(8) OverShoulderCameraData
	{
		::PipelineCamera::EulerRotation _cameraRotation; // 0x10
		::Foundation::Variable_1<::UnityEngine::Vector3> _characterPosition; // 0x58
		::System::Single _startFov; // 0x78
		::System::Single _currentFov; // 0x7C
		::UnityEngine::Vector3 _dampingTargetPosition; // 0x80
		::MoleMole::Cameras::OverShoulderCameraConfig* _config; // 0x90
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* _overrideConfig; // 0x98
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendIn; // 0xA0
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendOut; // 0xA8
		::System::Boolean _enableYawAngleLimit; // 0xB0
		::Foundation::Variable_1<::System::Single> _centerYawAngle; // 0xB8
		::System::Single _yawAngleLimitThreshold; // 0xD0
		::System::Boolean _enableYawAngleLimitMinMax; // 0xD4
		::System::Single _yawAngleLimitLeft; // 0xD8
		::System::Single _yawAngleLimitRight; // 0xDC
		::MoleMole::Cameras::OverShoulderCameraAxisState _xAxisState; // 0xE0
		::MoleMole::Cameras::OverShoulderCameraAxisState _yAxisState; // 0xEC
		::System::Boolean _isInFocusTargetMode; // 0xF8
		::UnityEngine::Vector3 _curFocusTargetPos; // 0xFC
		::System::Single _focusTargetRotateDampSpeed; // 0x108
		::Struct_2_52A902145F5BE513 _context; // 0x110
		::UnityEngine::Vector3 _xzDampingVelocity; // 0x238
		::System::Single _yDampingVelocity; // 0x244
		::UnityEngine::Vector3 _lastPositionDampingCharacterPosition; // 0x248
		::System::Boolean _hasLastPositionDampingCharacterPosition; // 0x254

		/*
		::System::Void _ctor(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::Struct_2_52A902145F5BE513& a4, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::UnityEngine::Quaternion, ::System::Single, ::Struct_2_52A902145F5BE513&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		::MoleMole::Cameras::OverShoulderCameraConfig* get_Config()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* get_OverrideConfig()
		{
			return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendIn()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendOut()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET))(this);
		}

		::System::Boolean get_IsInFocusTargetMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_ISINFOCUSTARGETMODE_OFFSET))(this);
		}

		::PipelineCamera::EulerRotation Method_2_FDFA9E89965D071D(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::EulerRotation(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FDFA9E89965D071D_OFFSET))(this, a1, a2);
		}

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_4B75E1858CDBA430(::UnityEngine::Vector3 a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4B75E1858CDBA430_OFFSET))(this, a1);
		}
		*/

		::System::Void Method_2_2261B997D0CEAB94(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2261B997D0CEAB94_OFFSET))(this, a1);
		}

		::System::Void Method_2_1302A164EE4E310C(::System::Single a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1302A164EE4E310C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_162A7A6AD55533F2(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_162A7A6AD55533F2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_2BC55A66CB2B0118()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
		}

		static ::System::Single Method_2_7B5CF29097D2700A(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_7B5CF29097D2700A_OFFSET))(a1);
		}

		::UnityEngine::Vector3 Method_2_C2245EC58D417830()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_C2245EC58D417830_OFFSET))(this);
		}

		::System::Void Method_2_E57456F36F09A25C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_E57456F36F09A25C_OFFSET))(this);
		}

		::System::Void Method_2_FBF2CB29FD3B55E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
		}

		/*
		::PipelineCamera::WorldBasicCameraData Method_2_2923CE4B2F0850CF(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2923CE4B2F0850CF_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::Vector2 Method_2_9F9F1B488F43C59E(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_9F9F1B488F43C59E_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Void Method_2_10FFF5D129383396(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_10FFF5D129383396_OFFSET))(this, a1);
		}
		*/

		::System::Void Method_2_602B796CAD5DBEDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_602B796CAD5DBEDB_OFFSET))(this, a1);
		}

		::System::Void Method_2_4598DED14A91B743(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4598DED14A91B743_OFFSET))(this, a1);
		}

		::System::Single Method_2_DAC9219D09D338F5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_DAC9219D09D338F5_OFFSET))(this);
		}

		::System::Void Method_2_99A2136794C075E7(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_99A2136794C075E7_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_2_CED7A2E9A352C6FD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_CED7A2E9A352C6FD_OFFSET))(this);
		}

		/*
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Method_2_851D7650AB039B8E(::PipelineCamera::WorldBasicCameraData& a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_851D7650AB039B8E_OFFSET))(this, a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Method_2_1750B3D267C59C5C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1750B3D267C59C5C_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Boolean Method_2_A0A1BDA10381BB7E(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_A0A1BDA10381BB7E_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		/*
		::UnityEngine::Quaternion Method_2_FA7F07669215B524()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FA7F07669215B524_OFFSET))(this);
		}
		*/

		/*
		::PipelineCamera::WorldBasicCameraData Method_2_5DBD0C9CB5B2C268(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5DBD0C9CB5B2C268_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void Method_2_2D69DEA94F4D6D5B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2D69DEA94F4D6D5B_OFFSET))(this, a1);
		}

		::System::Single Method_2_C8A5A4E24104372A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_C8A5A4E24104372A_OFFSET))(this);
		}

		/*
		static ::PipelineCamera::WorldBasicCameraData Method_2_01DD87652E0552FE(::MoleMole::Cameras::OverShoulderCameraData& a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Cameras::OverShoulderCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_01DD87652E0552FE_OFFSET))(a1);
		}
		*/

		::System::Boolean Method_2_6A7F69A381F965E9(::System::Single& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6A7F69A381F965E9_OFFSET))(this, a1);
		}

		::System::Single Method_2_C8A5A4E24104372A_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_C8A5A4E24104372A_1_OFFSET))(this);
		}

		::System::Void Method_2_FD91F0343DA6FC30(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FD91F0343DA6FC30_OFFSET))(this, a1);
		}

		/*
		::System::Void Method_2_30A6DC3A61562D07(::PipelineCamera::WorldBasicCameraData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_30A6DC3A61562D07_OFFSET))(this, a1);
		}
		*/

		static ::System::Single Method_2_AB508AA7C4C9D894(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_AB508AA7C4C9D894_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean Method_2_43F7F5C3E587A224(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_43F7F5C3E587A224_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6E9A69E078D639A9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6E9A69E078D639A9_OFFSET))(this, a1);
		}
	};
}
