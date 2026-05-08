#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define PLANARREFLECTIONPROXY_REFLECTIONCAMERADEBUGVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6806B0)

inline static constexpr unsigned int PlanarReflectionProxy_ReflectionCameraDebugViewData_TypeDefinitionIndex = 29482;

class PlanarReflectionProxy_ReflectionCameraDebugViewData : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Plane>* frustumPlanes; // 0x10
	::UnityEngine::Vector4 clipPlaneCS; // 0x18
	::UnityEngine::Vector4 clipPlaneWS; // 0x28
	::UnityEngine::Vector3 centerPosition; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_REFLECTIONCAMERADEBUGVIEWDATA__CTOR_OFFSET))(this);
	}
};
