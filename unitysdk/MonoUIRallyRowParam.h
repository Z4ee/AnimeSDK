#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOUIRALLYROWPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xF648580)

inline static constexpr unsigned int MonoUIRallyRowParam_TypeDefinitionIndex = 72321;

class MonoUIRallyRowParam : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single SubItemExpandDelayTime; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIRALLYROWPARAM__CTOR_OFFSET))(this);
	}
};
