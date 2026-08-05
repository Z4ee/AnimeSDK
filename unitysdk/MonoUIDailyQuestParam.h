#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOUIDAILYQUESTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10B018F0)

inline static constexpr unsigned int MonoUIDailyQuestParam_TypeDefinitionIndex = 55835;

class MonoUIDailyQuestParam : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single progressAnimLength; // 0x18
	::System::Single progressPointAnimDelay; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAILYQUESTPARAM__CTOR_OFFSET))(this);
	}
};
