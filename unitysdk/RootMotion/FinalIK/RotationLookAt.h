#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_APPLY_OFFSET UNITYSDK_OFFSET(0x1E069560)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E069100)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_FIXDIR_OFFSET UNITYSDK_OFFSET(0x1E069710)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x1E06A9F0)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETNORMAL_OFFSET UNITYSDK_OFFSET(0x1E06AA10)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETPITCHDOWN_OFFSET UNITYSDK_OFFSET(0x1E069070)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETPITCHUP_OFFSET UNITYSDK_OFFSET(0x1E069040)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETYAWLEFT_OFFSET UNITYSDK_OFFSET(0x1E0690D0)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETYAWRIGHT_OFFSET UNITYSDK_OFFSET(0x1E0690A0)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_RECORD_OFFSET UNITYSDK_OFFSET(0x1E069280)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT_START_OFFSET UNITYSDK_OFFSET(0x1E069270)
#define ROOTMOTION_FINALIK_ROTATIONLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E06AA60)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLookAt_TypeDefinitionIndex = 38123;

	class RotationLookAt : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single PitchUp; // 0x18
		::System::Single PitchDown; // 0x1C
		::System::Single YawLeft; // 0x20
		::System::Single YawRight; // 0x24
		::UnityEngine::Vector3 axis; // 0x28
		::System::Boolean UseAnimation; // 0x34
		::UnityEngine::Vector3 RealForward; // 0x38
		::UnityEngine::Vector3 RealUp; // 0x44
		::UnityEngine::Vector3 _debugXZ; // 0x50
		::UnityEngine::Vector3 _debugUp; // 0x5C
		::UnityEngine::Vector3 _debugRight; // 0x68
		::UnityEngine::Vector3 _oriUp; // 0x74
		::UnityEngine::Vector3 _ori; // 0x80
		::UnityEngine::Vector3 _debugNormal; // 0x8C
		::UnityEngine::Vector3 curDir; // 0x98
		::UnityEngine::Vector3 lastDir; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT__CTOR_OFFSET))(this);
		}

		::System::Single get_GetPitchUp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETPITCHUP_OFFSET))(this);
		}

		::System::Single get_GetPitchDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETPITCHDOWN_OFFSET))(this);
		}

		::System::Single get_GetYawRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETYAWRIGHT_OFFSET))(this);
		}

		::System::Single get_GetYawLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETYAWLEFT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_START_OFFSET))(this);
		}

		::System::Void Record()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_RECORD_OFFSET))(this);
		}

		::System::Void Apply(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_APPLY_OFFSET))(this, weight);
		}

		::UnityEngine::Vector3 get_GetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_GetNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_GET_GETNORMAL_OFFSET))(this);
		}

		::System::Void FixDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLOOKAT_FIXDIR_OFFSET))(this);
		}
	};
}
