#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SRDYNAMICSCALE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x103452F0)
#define SRDYNAMICSCALE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x103452B0)
#define SRDYNAMICSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x10345330)

inline static constexpr unsigned int SRDynamicScale_TypeDefinitionIndex = 85955;

class SRDynamicScale : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDYNAMICSCALE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDYNAMICSCALE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDYNAMICSCALE_ONDISABLE_OFFSET))(this);
	}
};
