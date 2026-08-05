#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBasicMultiChannelPerlin; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class NoiseSettings; }
namespace MoleMole::Cameras { class AnimationVirtualCamera; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DB05F30C4FA73B75_METHOD_2_002A3C2EF46C74CF_1_OFFSET UNITYSDK_OFFSET(0x12A93650)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_002A3C2EF46C74CF_OFFSET UNITYSDK_OFFSET(0x12A934B0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x12A90E30)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x12A912E0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_052DDC2C89ED0155_OFFSET UNITYSDK_OFFSET(0x12A93340)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x12A93D80)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12A93640)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_383DEEFB6D71D0DE_OFFSET UNITYSDK_OFFSET(0x12A91320)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12A91F70)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12A936B0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x12A936F0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_88F6275BBF5CEEE6_OFFSET UNITYSDK_OFFSET(0x12A95C40)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_8F2DCAD9E1C9162C_OFFSET UNITYSDK_OFFSET(0x12A95830)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_9610DA88633BD997_OFFSET UNITYSDK_OFFSET(0x12A95360)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_973EFCC97D38C5FB_OFFSET UNITYSDK_OFFSET(0x12A93940)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_9DFB944617E9D473_OFFSET UNITYSDK_OFFSET(0x12A92150)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_A2FF54C1635414B6_OFFSET UNITYSDK_OFFSET(0x12A95180)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_A431C422012C89F6_OFFSET UNITYSDK_OFFSET(0x12A956F0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_A43E50D4ABCBF27B_OFFSET UNITYSDK_OFFSET(0x12A93DE0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_AAB6D3F3E1CA2337_OFFSET UNITYSDK_OFFSET(0x12A91D10)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x12A90E70)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_D829E6D0E724EC3D_OFFSET UNITYSDK_OFFSET(0x12A91FE0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12A95C30)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_E802D1E1749DEB29_OFFSET UNITYSDK_OFFSET(0x12A96450)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_ECA105CA81B6B39D_OFFSET UNITYSDK_OFFSET(0x12A95070)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_F2622267815E986F_OFFSET UNITYSDK_OFFSET(0x12A921E0)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_F62AC8127720E0D3_OFFSET UNITYSDK_OFFSET(0x12A96390)
#define CLASS_2_DB05F30C4FA73B75_METHOD_2_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0x12A93510)
#define CLASS_2_DB05F30C4FA73B75_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12A932D0)
#define CLASS_2_DB05F30C4FA73B75_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12A8F110)
#define CLASS_2_DB05F30C4FA73B75__CTOR_OFFSET UNITYSDK_OFFSET(0x12A93330)

inline static constexpr unsigned int Class_2_DB05F30C4FA73B75_TypeDefinitionIndex = 86917;

class Class_2_DB05F30C4FA73B75 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Boolean Field_2_0; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	::Cinemachine::CinemachineVirtualCamera* Field_2_5; // 0x10
	::Cinemachine::CinemachineVirtualCamera* Field_2_6; // 0x18
	::Cinemachine::CinemachineBasicMultiChannelPerlin* Field_2_9; // 0x20
	::Cinemachine::NoiseSettings* Field_2_15; // 0x28
	::MoleMole::Cameras::AnimationVirtualCamera* Field_2_11; // 0x30
	::UnityEngine::Camera* Field_2_4; // 0x38
	::Cinemachine::CinemachineBrain* Field_2_10; // 0x40
	::UnityEngine::Vector2 Field_2_28; // 0x48
	::UnityEngine::Quaternion Field_2_33; // 0x50
	::UnityEngine::Vector3 Field_2_16; // 0x60
	::UnityEngine::Quaternion Field_2_25; // 0x6C
	::System::Single Field_2_30; // 0x7C
	::Cinemachine::LensSettings Field_2_22; // 0x80
	::System::Single Field_2_13; // 0xB0
	::System::Single Field_2_14; // 0xB4
	::UnityEngine::Vector3 Field_2_19; // 0xB8
	::UnityEngine::Vector3 Field_2_21; // 0xC4
	::UnityEngine::Quaternion Field_2_20; // 0xD0
	::System::Single Field_2_24; // 0xE0
	::System::Single Field_2_29; // 0xE4
	::UnityEngine::Quaternion Field_2_23; // 0xE8
	::UnityEngine::Vector3 Field_2_26; // 0xF8
	::System::Boolean Field_2_27; // 0x104
	::System::Boolean Field_2_8; // 0x105
	::System::Single Field_2_31; // 0x108
	::UnityEngine::Vector3 Field_2_34; // 0x10C
	::System::Boolean Field_2_35; // 0x118
	::System::Boolean Field_2_18; // 0x119
	::System::Boolean Field_2_12; // 0x11A
	::System::Boolean Field_2_17; // 0x11B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_052DDC2C89ED0155(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_052DDC2C89ED0155_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_002A3C2EF46C74CF(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_002A3C2EF46C74CF_OFFSET))(a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	static ::System::Void Method_2_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_2_FC26FA0DD9B4AAF4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_FC26FA0DD9B4AAF4_OFFSET))(this);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_002A3C2EF46C74CF_1(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_002A3C2EF46C74CF_1_OFFSET))(a1);
	}

	::System::Void Method_2_383DEEFB6D71D0DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_383DEEFB6D71D0DE_OFFSET))(this);
	}

	static ::Cinemachine::CinemachineBasicMultiChannelPerlin* Method_2_AAB6D3F3E1CA2337(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::Cinemachine::CinemachineBasicMultiChannelPerlin*(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_AAB6D3F3E1CA2337_OFFSET))(a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_973EFCC97D38C5FB(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineBrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_973EFCC97D38C5FB_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_5790A55946AA509D_OFFSET))();
	}

	static ::System::Single Method_2_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Single Method_2_9DFB944617E9D473(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_9DFB944617E9D473_OFFSET))(a1, a2);
	}

	::System::Void Method_2_A43E50D4ABCBF27B(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_A43E50D4ABCBF27B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	static ::System::String* Method_2_9610DA88633BD997(::Cinemachine::LensSettings a1)
	{
		return ((::System::String*(*)(::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_9610DA88633BD997_OFFSET))(a1);
	}

	::MoleMole::Cameras::AnimationVirtualCamera* Method_2_A431C422012C89F6(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineBrain* a2)
	{
		return ((::MoleMole::Cameras::AnimationVirtualCamera*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_A431C422012C89F6_OFFSET))(this, a1, a2);
	}

	static ::Cinemachine::CameraState Method_2_8F2DCAD9E1C9162C(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::Cinemachine::CameraState(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_8F2DCAD9E1C9162C_OFFSET))(a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::System::String* Method_2_ECA105CA81B6B39D(::UnityEngine::Vector3 a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_ECA105CA81B6B39D_OFFSET))(a1);
	}

	::System::Boolean Method_2_88F6275BBF5CEEE6(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CameraState a2, ::Cinemachine::CinemachineBrain* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CameraState, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_88F6275BBF5CEEE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F2622267815E986F(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_F2622267815E986F_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	::System::Void Method_2_E802D1E1749DEB29(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CameraState a2, ::Cinemachine::CinemachineBrain* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CameraState, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_E802D1E1749DEB29_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Single Method_2_D829E6D0E724EC3D(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Single(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_D829E6D0E724EC3D_OFFSET))(a1);
	}

	static ::System::String* Method_2_A2FF54C1635414B6(::UnityEngine::Quaternion a1)
	{
		return ((::System::String*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_A2FF54C1635414B6_OFFSET))(a1);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_F62AC8127720E0D3(::Cinemachine::CinemachineBrain* a1)
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CLASS_2_DB05F30C4FA73B75_METHOD_2_F62AC8127720E0D3_OFFSET))(this, a1);
	}
};
