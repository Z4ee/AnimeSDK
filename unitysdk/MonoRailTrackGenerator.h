#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONORAILTRACKGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x933AB50)

inline static constexpr unsigned int MonoRailTrackGenerator_TypeDefinitionIndex = 44248;

class MonoRailTrackGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORAILTRACKGENERATOR__CTOR_OFFSET))(this);
	}
};
