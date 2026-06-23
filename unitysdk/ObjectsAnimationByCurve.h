#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObjectsAnimationByCurve_AxisType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace UnityEngine { class GameObject; }

#define OBJECTSANIMATIONBYCURVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A4E7F60)
#define OBJECTSANIMATIONBYCURVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A4E7E10)
#define OBJECTSANIMATIONBYCURVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4E80B0)
#define OBJECTSANIMATIONBYCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E8CB0)

inline static constexpr unsigned int ObjectsAnimationByCurve_TypeDefinitionIndex = 56136;

class ObjectsAnimationByCurve : public ::UnityEngine::MonoBehaviour
{
public:
	::FluffyUnderware::Curvy::CurvySpline* animationCurve; // 0x18
	::Il2CppArray<::UnityEngine::GameObject*>* animatedObjects; // 0x20
	::System::Single gapRatio; // 0x28
	::System::Single speed; // 0x2C
	::System::Boolean loop; // 0x30
	::ObjectsAnimationByCurve_AxisType facingAxis; // 0x34
	::System::Single selfRotationSpeed; // 0x38
	::System::Single selfRotationPhaseStep; // 0x3C
	::UnityEngine::Vector3 firstOffset; // 0x40
	::UnityEngine::Vector3 lastOffset; // 0x4C
	::UnityEngine::Vector3 firstScale; // 0x58
	::UnityEngine::Vector3 lastScale; // 0x64
	::System::Single progress; // 0x70
	::System::Single currentRotationAngle; // 0x74
	::System::Boolean finishRegister; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCURVE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCURVE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCURVE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCURVE_ONUPDATE_OFFSET))(this);
	}
};
