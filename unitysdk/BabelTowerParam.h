#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define BABELTOWERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11430910)

inline static constexpr unsigned int BabelTowerParam_TypeDefinitionIndex = 76256;

class BabelTowerParam : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single RefreshRankDelay; // 0x18
	::System::Single ShowUnlockDelay; // 0x1C
	::System::Single ShowUnlockDelay2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABELTOWERPARAM__CTOR_OFFSET))(this);
	}
};
