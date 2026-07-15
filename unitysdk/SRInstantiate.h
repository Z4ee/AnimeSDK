#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define SRINSTANTIATE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1CEDF040)

inline static constexpr unsigned int SRInstantiate_TypeDefinitionIndex = 33915;

class SRInstantiate : public ::System::Object
{
public:
	static ::UnityEngine::GameObject* Instantiate(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SRINSTANTIATE_INSTANTIATE_OFFSET))(a1);
	}
};
