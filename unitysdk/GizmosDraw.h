#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GIZMOSDRAW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3EBC40)
#define GIZMOSDRAW_SELECTPARENT_OFFSET UNITYSDK_OFFSET(0x1C3EBC00)
#define GIZMOSDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3EBD10)

inline static constexpr unsigned int GizmosDraw_TypeDefinitionIndex = 26725;

class GizmosDraw : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color gizmoColor; // 0x18
	::System::Single gizmoSize; // 0x28
	::UnityEngine::Vector3 gizmoPosition; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIZMOSDRAW__CTOR_OFFSET))(this);
	}

	::System::Void SelectParent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIZMOSDRAW_SELECTPARENT_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIZMOSDRAW_ONENABLE_OFFSET))(this);
	}
};
