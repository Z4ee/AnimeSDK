#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_STRUTUREPRESERVEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1241C1C0)

inline static constexpr unsigned int IRI_StruturePreserveManager_TypeDefinitionIndex = 44303;

class IRI_StruturePreserveManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_STRUTUREPRESERVEMANAGER__CTOR_OFFSET))(this);
	}
};
