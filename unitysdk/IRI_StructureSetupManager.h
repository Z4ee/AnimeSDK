#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_STRUCTURESETUPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E70660)

inline static constexpr unsigned int IRI_StructureSetupManager_TypeDefinitionIndex = 48017;

class IRI_StructureSetupManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_STRUCTURESETUPMANAGER__CTOR_OFFSET))(this);
	}
};
