#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MONORENDERENTITY_MULTIPLESKELETONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E659AD0)

inline static constexpr unsigned int MonoRenderEntity_MultipleSkeletons_TypeDefinitionIndex = 27697;

class MonoRenderEntity_MultipleSkeletons : public ::System::Object
{
public:
	::UnityEngine::SkinnedMeshRenderer* rendererFlag; // 0x10
	::UnityEngine::Transform* middlePoint; // 0x18
	::UnityEngine::Transform* headBone; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_MULTIPLESKELETONS__CTOR_OFFSET))(this);
	}
};
