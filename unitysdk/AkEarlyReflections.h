#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace AK::Wwise { class AuxBus; }

#define AKEARLYREFLECTIONS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B42ED60)
#define AKEARLYREFLECTIONS_SETEARLYREFLECTIONSVOLUME_OFFSET UNITYSDK_OFFSET(0x1B42EE70)
#define AKEARLYREFLECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42EF10)

inline static constexpr unsigned int AkEarlyReflections_TypeDefinitionIndex = 41297;

class AkEarlyReflections : public ::UnityEngine::MonoBehaviour
{
public:
	::AK::Wwise::AuxBus* reflectionsAuxBus; // 0x18
	::System::Single reflectionsVolume; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEARLYREFLECTIONS__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEARLYREFLECTIONS_ONENABLE_OFFSET))(this);
	}

	::System::Void SetEarlyReflectionsVolume(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKEARLYREFLECTIONS_SETEARLYREFLECTIONSVOLUME_OFFSET))(this, a1);
	}
};
