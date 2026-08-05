#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define BATTLERECORDGMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x14471C80)

inline static constexpr unsigned int BattleRecordGMUtils_TypeDefinitionIndex = 50213;

class BattleRecordGMUtils : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERECORDGMUTILS__CTOR_OFFSET))(this);
	}
};
