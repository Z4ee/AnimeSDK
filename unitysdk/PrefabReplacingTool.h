#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PREFABREPLACINGTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA92F0)

inline static constexpr unsigned int PrefabReplacingTool_TypeDefinitionIndex = 48019;

class PrefabReplacingTool : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABREPLACINGTOOL__CTOR_OFFSET))(this);
	}
};
