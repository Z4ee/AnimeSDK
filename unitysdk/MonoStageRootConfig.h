#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MONOSTAGEROOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1166C750)

inline static constexpr unsigned int MonoStageRootConfig_TypeDefinitionIndex = 68731;

class MonoStageRootConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::UnityEngine::GameObject*>* Meshes; // 0x18
	::Il2CppArray<::UnityEngine::GameObject*>* Lights; // 0x20
	::Il2CppArray<::UnityEngine::GameObject*>* Effects; // 0x28
	::Il2CppArray<::UnityEngine::GameObject*>* Colliders; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSTAGEROOTCONFIG__CTOR_OFFSET))(this);
	}
};
