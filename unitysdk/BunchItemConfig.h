#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define BUNCHITEMCONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0x9B96A30)
#define BUNCHITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B96C10)

inline static constexpr unsigned int BunchItemConfig_TypeDefinitionIndex = 44107;

class BunchItemConfig : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* InstanceItemParent; // 0x0
	::System::String* HLODPath; // 0x18
	::System::String* BunchLodTemplateName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNCHITEMCONFIG__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNCHITEMCONFIG_AWAKE_OFFSET))(this);
	}
};
