#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_CINEMACHINEBLEND_GET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x1FA31550)
#define CINEMACHINE_CINEMACHINEBLEND_GET_BLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x1FA31590)
#define CINEMACHINE_CINEMACHINEBLEND_GET_CAMA_OFFSET UNITYSDK_OFFSET(0x1FA31510)
#define CINEMACHINE_CINEMACHINEBLEND_GET_CAMB_OFFSET UNITYSDK_OFFSET(0x1FA31530)
#define CINEMACHINE_CINEMACHINEBLEND_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1FA317E0)
#define CINEMACHINE_CINEMACHINEBLEND_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1FA317C0)
#define CINEMACHINE_CINEMACHINEBLEND_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FA31620)
#define CINEMACHINE_CINEMACHINEBLEND_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FA31640)
#define CINEMACHINE_CINEMACHINEBLEND_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1FA32050)
#define CINEMACHINE_CINEMACHINEBLEND_GET_TIMEINBLEND_OFFSET UNITYSDK_OFFSET(0x1FA31570)
#define CINEMACHINE_CINEMACHINEBLEND_SET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x1FA31560)
#define CINEMACHINE_CINEMACHINEBLEND_SET_CAMA_OFFSET UNITYSDK_OFFSET(0x1FA31520)
#define CINEMACHINE_CINEMACHINEBLEND_SET_CAMB_OFFSET UNITYSDK_OFFSET(0x1FA31540)
#define CINEMACHINE_CINEMACHINEBLEND_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1FA317D0)
#define CINEMACHINE_CINEMACHINEBLEND_SET_TIMEINBLEND_OFFSET UNITYSDK_OFFSET(0x1FA31580)
#define CINEMACHINE_CINEMACHINEBLEND_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1FA31D30)
#define CINEMACHINE_CINEMACHINEBLEND_USES_OFFSET UNITYSDK_OFFSET(0x1FA31BF0)
#define CINEMACHINE_CINEMACHINEBLEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA31D00)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlend_TypeDefinitionIndex = 34730;

	class CinemachineBlend : public ::System::Object
	{
	public:
		::Cinemachine::ICinemachineCamera* _CamB_k__BackingField; // 0x10
		::UnityEngine::AnimationCurve* _BlendCurve_k__BackingField; // 0x18
		::Cinemachine::ICinemachineCamera* _CamA_k__BackingField; // 0x20
		::System::Single _Duration_k__BackingField; // 0x28
		::System::Single _TimeInBlend_k__BackingField; // 0x2C

		::System::Void _ctor(::Cinemachine::ICinemachineCamera* a, ::Cinemachine::ICinemachineCamera* b, ::UnityEngine::AnimationCurve* curve, ::System::Single duration, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND__CTOR_OFFSET))(this, a, b, curve, duration, t);
		}

		::Cinemachine::ICinemachineCamera* get_CamA()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_CAMA_OFFSET))(this);
		}

		::System::Void set_CamA(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_CAMA_OFFSET))(this, value);
		}

		::Cinemachine::ICinemachineCamera* get_CamB()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_CAMB_OFFSET))(this);
		}

		::System::Void set_CamB(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_CAMB_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_BlendCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_BLENDCURVE_OFFSET))(this);
		}

		::System::Void set_BlendCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_BLENDCURVE_OFFSET))(this, value);
		}

		::System::Single get_TimeInBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_TIMEINBLEND_OFFSET))(this);
		}

		::System::Void set_TimeInBlend(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_TIMEINBLEND_OFFSET))(this, value);
		}

		::System::Single get_BlendWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_BLENDWEIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_DURATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean Uses(::Cinemachine::ICinemachineCamera* cam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_USES_OFFSET))(this, cam);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_UPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_STATE_OFFSET))(this);
		}
	};
}
