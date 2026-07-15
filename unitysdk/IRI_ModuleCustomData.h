#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_MODULECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1750A510)

inline static constexpr unsigned int IRI_ModuleCustomData_TypeDefinitionIndex = 45390;

class IRI_ModuleCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_MODULECUSTOMDATA__CTOR_OFFSET))(this);
	}
};
