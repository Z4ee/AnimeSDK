#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_OPTIMIZEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x111DEAA0)

inline static constexpr unsigned int IRI_OptimizeData_TypeDefinitionIndex = 38093;

class IRI_OptimizeData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_OPTIMIZEDATA__CTOR_OFFSET))(this);
	}
};
