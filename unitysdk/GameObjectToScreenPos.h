#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define GAMEOBJECTTOSCREENPOS_START_OFFSET UNITYSDK_OFFSET(0x10A48A80)
#define GAMEOBJECTTOSCREENPOS_UPDATE_OFFSET UNITYSDK_OFFSET(0x10A48AD0)
#define GAMEOBJECTTOSCREENPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x10A49160)

inline static constexpr unsigned int GameObjectToScreenPos_TypeDefinitionIndex = 38184;

class GameObjectToScreenPos : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 posSS; // 0x18
	::UnityEngine::Vector3 OffsetRotation; // 0x24
	::UnityEngine::Transform* Field_5_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTTOSCREENPOS__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTTOSCREENPOS_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTTOSCREENPOS_UPDATE_OFFSET))(this);
	}
};
