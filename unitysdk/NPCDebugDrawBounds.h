#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshRenderer; }

#define NPCDEBUGDRAWBOUNDS_DRAWBOUNDS_OFFSET UNITYSDK_OFFSET(0x13DF5C30)
#define NPCDEBUGDRAWBOUNDS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13DF5A40)
#define NPCDEBUGDRAWBOUNDS_UPDATE_OFFSET UNITYSDK_OFFSET(0x13DF5B20)
#define NPCDEBUGDRAWBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF6220)

inline static constexpr unsigned int NPCDebugDrawBounds_TypeDefinitionIndex = 85490;

class NPCDebugDrawBounds : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::UnityEngine::MeshRenderer*>* renderers; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCDEBUGDRAWBOUNDS__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCDEBUGDRAWBOUNDS_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCDEBUGDRAWBOUNDS_UPDATE_OFFSET))(this);
	}

	::System::Void DrawBounds(::UnityEngine::Bounds b, ::System::Single delay)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::System::Single))((::PBYTE)hIl2Cpp + NPCDEBUGDRAWBOUNDS_DRAWBOUNDS_OFFSET))(this, b, delay);
	}
};
