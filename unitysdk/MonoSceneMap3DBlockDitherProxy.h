#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define MONOSCENEMAP3DBLOCKDITHERPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD571710)
#define MONOSCENEMAP3DBLOCKDITHERPROXY_TRIGGER_OFFSET UNITYSDK_OFFSET(0xD571800)
#define MONOSCENEMAP3DBLOCKDITHERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xD571B80)

inline static constexpr unsigned int MonoSceneMap3DBlockDitherProxy_TypeDefinitionIndex = 74333;

class MonoSceneMap3DBlockDitherProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::BoxCollider* boxCollider; // 0x18
	::System::Single dither; // 0x20
	::UnityEngine::MaterialPropertyBlock* block; // 0x28
	::UnityEngine::MeshRenderer* meshRenderer; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DBLOCKDITHERPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DBLOCKDITHERPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void Trigger(::UnityEngine::Vector3 arrowPosition)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DBLOCKDITHERPROXY_TRIGGER_OFFSET))(this, arrowPosition);
	}
};
