#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define BATTLERECORDGMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x12D45D80)

inline static constexpr unsigned int BattleRecordGMUtils_TypeDefinitionIndex = 85189;

class BattleRecordGMUtils : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLERECORDGMUTILS__CTOR_OFFSET))(this);
	}
};
