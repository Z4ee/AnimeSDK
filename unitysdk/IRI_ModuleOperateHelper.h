#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_MODULEOPERATEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1241C140)

inline static constexpr unsigned int IRI_ModuleOperateHelper_TypeDefinitionIndex = 44300;

class IRI_ModuleOperateHelper : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_MODULEOPERATEHELPER__CTOR_OFFSET))(this);
	}
};
