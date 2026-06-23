#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define DUNGEONMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x138FE3D0)
#define DUNGEONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x138FEA20)

inline static constexpr unsigned int DungeonManager_TypeDefinitionIndex = 73384;

class DungeonManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 m_Width; // 0x18
	::System::Int32 m_Height; // 0x1C
	::System::Single m_Spacing; // 0x20
	::Il2CppArray<::UnityEngine::GameObject*>* m_Tiles; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DUNGEONMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DUNGEONMANAGER_AWAKE_OFFSET))(this);
	}
};
