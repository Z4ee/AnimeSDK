#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCENEARTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x186F6290)

inline static constexpr unsigned int MonoSceneArtPrefab_TypeDefinitionIndex = 45713;

class MonoSceneArtPrefab : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEARTPREFAB__CTOR_OFFSET))(this);
	}
};
