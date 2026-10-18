#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_QUADRICBEZIER_FORCEINIT_OFFSET UNITYSDK_OFFSET(0xDE02CD0)
#define RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDECONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xDE03780)
#define RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xDE03720)
#define RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xDE03750)
#define RPG_CLIENT_QUADRICBEZIER_SETCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xDE02FE0)
#define RPG_CLIENT_QUADRICBEZIER_SETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xDE02EC0)
#define RPG_CLIENT_QUADRICBEZIER_SETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xDE02F50)
#define RPG_CLIENT_QUADRICBEZIER_SETTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDE02C80)
#define RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDECONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xDE037A0)
#define RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xDE03740)
#define RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xDE03770)
#define RPG_CLIENT_QUADRICBEZIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDE03070)
#define RPG_CLIENT_QUADRICBEZIER__CALCULATEQUADRICBEZIERPOINT_OFFSET UNITYSDK_OFFSET(0xDE03520)
#define RPG_CLIENT_QUADRICBEZIER__CTOR_OFFSET UNITYSDK_OFFSET(0xDE037B0)
#define RPG_CLIENT_QUADRICBEZIER__GETCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xDE032D0)
#define RPG_CLIENT_QUADRICBEZIER__GETDEFAULTCONTROLPOSITION_OFFSET UNITYSDK_OFFSET(0xDE03670)
#define RPG_CLIENT_QUADRICBEZIER__GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xDE031D0)
#define RPG_CLIENT_QUADRICBEZIER__GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xDE03420)
#define RPG_CLIENT_QUADRICBEZIER__ISVALID_OFFSET UNITYSDK_OFFSET(0xDE030C0)
#define RPG_CLIENT_QUADRICBEZIER__STARTEQUALSTARGET_OFFSET UNITYSDK_OFFSET(0xDE03120)
#define RPG_CLIENT_QUADRICBEZIER__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xDE02D20)

namespace RPG::Client
{
	inline static constexpr unsigned int QuadricBezier_TypeDefinitionIndex = 72635;

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

		::System::Void SetTargetTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SETTARGETTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void ForceInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_FORCEINIT_OFFSET))(this);
		}

		::System::Void SetStartPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SETSTARTPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetTargetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SETTARGETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetControlPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SETCONTROLPOSITION_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdatePosition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__UPDATEPOSITION_OFFSET))(this, a1);
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

		::UnityEngine::Vector3 _CalculateQuadricBezierPoint(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__CALCULATEQUADRICBEZIERPOINT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 _GetDefaultControlPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER__GETDEFAULTCONTROLPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_OverrideStartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDESTARTPOSITION_OFFSET))(this);
		}

		::System::Void set_OverrideStartPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDESTARTPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_OverrideTargetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDETARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_OverrideTargetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDETARGETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_OverrideControlPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_GET_OVERRIDECONTROLPOSITION_OFFSET))(this);
		}

		::System::Void set_OverrideControlPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRICBEZIER_SET_OVERRIDECONTROLPOSITION_OFFSET))(this, a1);
		}
	};
}
