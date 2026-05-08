#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CHROMATICABERRATIONPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x11E5A260)
#define CHROMATICABERRATIONPROXY_COPYVALUEFROM_OFFSET UNITYSDK_OFFSET(0x11E5A630)
#define CHROMATICABERRATIONPROXY_SETVALUETO_OFFSET UNITYSDK_OFFSET(0x11E5A810)
#define CHROMATICABERRATIONPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x11E5A7C0)
#define CHROMATICABERRATIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x11E5A9A0)

inline static constexpr unsigned int ChromaticAberrationProxy_TypeDefinitionIndex = 76909;

class ChromaticAberrationProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single intensity; // 0x18
	::UnityEngine::Rendering::Universal::ChromaticAberration* _chromaticAberration; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFrom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_COPYVALUEFROM_OFFSET))(this);
	}

	::System::Void SetValueTo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_SETVALUETO_OFFSET))(this);
	}
};
