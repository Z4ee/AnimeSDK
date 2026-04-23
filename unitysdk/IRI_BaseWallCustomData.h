#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_BASEWALLCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12418250)

inline static constexpr unsigned int IRI_BaseWallCustomData_TypeDefinitionIndex = 43959;

class IRI_BaseWallCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BASEWALLCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
