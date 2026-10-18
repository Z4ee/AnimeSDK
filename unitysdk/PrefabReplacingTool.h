#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PREFABREPLACINGTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3948C0)

inline static constexpr unsigned int PrefabReplacingTool_TypeDefinitionIndex = 47559;

class PrefabReplacingTool : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABREPLACINGTOOL__CTOR_OFFSET))(this);
	}
};
