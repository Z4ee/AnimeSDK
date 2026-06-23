#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshRenderer; }

#define OPAQUEMOTIONVECTORRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B06B040)
#define OPAQUEMOTIONVECTORRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B06AD40)
#define OPAQUEMOTIONVECTORRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06B1F0)

inline static constexpr unsigned int OpaqueMotionVectorRenderer_TypeDefinitionIndex = 26290;

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
