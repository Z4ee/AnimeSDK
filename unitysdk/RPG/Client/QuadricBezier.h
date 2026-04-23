#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_QUADRICBEZIER_FORCEINIT_OFFSET UNITYSDK_OFFSET(0xAF34F30)
#define RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDECONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xAF358D0)
#define RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xAF35870)
#define RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xAF358A0)
#define RPG_CLIENT_QUADRICBEZIER_SETTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAF34EE0)
#define RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDECONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xAF358F0)
#define RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xAF35890)
#define RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xAF358C0)
#define RPG_CLIENT_QUADRICBEZIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAF351C0)
#define RPG_CLIENT_QUADRICBEZIER__CALCULATEQUADRICBEZIERPOINT_OFFSET UNITYSDK_OFFSET(0xAF35670)
#define RPG_CLIENT_QUADRICBEZIER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF35900)
#define RPG_CLIENT_QUADRICBEZIER__GETCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xAF35420)
#define RPG_CLIENT_QUADRICBEZIER__GETDEFAULTCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xAF357C0)
#define RPG_CLIENT_QUADRICBEZIER__GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xAF35320)
#define RPG_CLIENT_QUADRICBEZIER__GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xAF35570)
#define RPG_CLIENT_QUADRICBEZIER__ISVALID_OFFSET UNITYSDK_OFFSET(0xAF35210)
#define RPG_CLIENT_QUADRICBEZIER__STARTEQUALSTARGET_OFFSET UNITYSDK_OFFSET(0xAF35270)
#define RPG_CLIENT_QUADRICBEZIER__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xAF34F80)

namespace RPG::Client
{
	inline static constexpr unsigned int QuadricBezier_TypeDefinitionIndex = 66926;

	class QuadricBezier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 _OverrideStartPosition_k__BackingField; // 0x18
		::UnityEngine::Vector3 _OverrideTargetPosition_k__BackingField; // 0x24
		::UnityEngine::Vector3 _OverrideControlPosition_k__BackingField; // 0x30
		::UnityEngine::Transform* _StartTransform; // 0x40
		::UnityEngine::Transform* _ControlTransform; // 0x48
		::UnityEngine::Transform* _TargetTransform; // 0x50
		::UnityEngine::Transform* _MoveTransform; // 0x58
		::System::Single _MoveRatio; // 0x60
		::UnityEngine::Vector3 _ControlPosition; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__CTOR_OFFSET))(this);
		}

		::System::Void SetTargetTransform(::UnityEngine::Transform* targetTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SETTARGETTRANSFORM_OFFSET))(this, targetTransform);
		}

		::System::Void ForceInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_FORCEINIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdatePosition(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__UPDATEPOSITION_OFFSET))(this, ratio);
		}

		::System::Boolean _IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__ISVALID_OFFSET))(this);
		}

		::System::Boolean _StartEqualsTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__STARTEQUALSTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetStartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__GETSTARTPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetTargetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__GETTARGETPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetControlPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__GETCONTROLPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _CalculateQuadricBezierPoint(::System::Single t, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__CALCULATEQUADRICBEZIERPOINT_OFFSET))(this, t, p0, p1, p2);
		}

		::UnityEngine::Vector3 _GetDefaultControlPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__GETDEFAULTCONTROLPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_OverrideStartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDESTARTPOSITION_OFFSET))(this);
		}

		::System::Void set_OverrideStartPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDESTARTPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_OverrideTargetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDETARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_OverrideTargetPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDETARGETPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_OverrideControlPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDECONTROLPOSITION_OFFSET))(this);
		}

		::System::Void set_OverrideControlPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDECONTROLPOSITION_OFFSET))(this, value);
		}
	};
}
