#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FORCESETMASTERTEXTURELIMIT_METHOD_5_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x191213E0)
#define FORCESETMASTERTEXTURELIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19121430)

inline static constexpr unsigned int ForceSetMasterTextureLimit_TypeDefinitionIndex = 48049;

class ForceSetMasterTextureLimit : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORCESETMASTERTEXTURELIMIT__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FORCESETMASTERTEXTURELIMIT_METHOD_5_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
