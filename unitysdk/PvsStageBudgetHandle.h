#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSSTAGEBUDGETHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17468EA0)

inline static constexpr unsigned int PvsStageBudgetHandle_TypeDefinitionIndex = 45609;

class PvsStageBudgetHandle : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 Budget; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSSTAGEBUDGETHANDLE__CTOR_OFFSET))(this);
	}
};
