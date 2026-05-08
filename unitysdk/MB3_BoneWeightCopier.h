#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MB3_BONEWEIGHTCOPIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66FC90)

inline static constexpr unsigned int MB3_BoneWeightCopier_TypeDefinitionIndex = 84963;

class MB3_BoneWeightCopier : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* inputGameObject; // 0x18
	::UnityEngine::GameObject* outputPrefab; // 0x20
	::System::Single radius; // 0x28
	::UnityEngine::SkinnedMeshRenderer* seamMesh; // 0x30
	::System::String* outputFolder; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_BONEWEIGHTCOPIER__CTOR_OFFSET))(this);
	}
};
