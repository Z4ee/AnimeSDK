#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define DEBUGTEXTATLASSETTER_START_OFFSET UNITYSDK_OFFSET(0x1C5297D0)
#define DEBUGTEXTATLASSETTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C5299B0)
#define DEBUGTEXTATLASSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5299F0)

inline static constexpr unsigned int DebugTextAtlasSetter_TypeDefinitionIndex = 85898;

class DebugTextAtlasSetter : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGTEXTATLASSETTER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGTEXTATLASSETTER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGTEXTATLASSETTER_UPDATE_OFFSET))(this);
	}
};
