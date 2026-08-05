#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define SPAWNPREFABONKEYDOWN_UPDATE_OFFSET UNITYSDK_OFFSET(0x1878D940)
#define SPAWNPREFABONKEYDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1878DB90)

inline static constexpr unsigned int SpawnPrefabOnKeyDown_TypeDefinitionIndex = 53814;

class SpawnPrefabOnKeyDown : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* m_Prefab; // 0x18
	::UnityEngine::KeyCode m_KeyCode; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPREFABONKEYDOWN__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPREFABONKEYDOWN_UPDATE_OFFSET))(this);
	}
};
