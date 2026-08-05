#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshRenderer; }

#define OPAQUEMOTIONVECTORRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C4CB220)
#define OPAQUEMOTIONVECTORRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C4CAF20)
#define OPAQUEMOTIONVECTORRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CB3D0)

inline static constexpr unsigned int OpaqueMotionVectorRenderer_TypeDefinitionIndex = 27805;

class OpaqueMotionVectorRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::MeshRenderer* renderer; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUEMOTIONVECTORRENDERER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUEMOTIONVECTORRENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUEMOTIONVECTORRENDERER_ONDISABLE_OFFSET))(this);
	}
};
