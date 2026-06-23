#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SRDYNAMICSCALE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11A6A5D0)
#define SRDYNAMICSCALE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A6A590)
#define SRDYNAMICSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6A610)

inline static constexpr unsigned int SRDynamicScale_TypeDefinitionIndex = 91471;

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
