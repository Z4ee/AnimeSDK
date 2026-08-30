#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCENEARTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x19C96710)

inline static constexpr unsigned int MonoSceneArtPrefab_TypeDefinitionIndex = 47965;

class MonoSceneArtPrefab : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEARTPREFAB__CTOR_OFFSET))(this);
	}
};
