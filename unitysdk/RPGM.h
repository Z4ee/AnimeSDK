#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B520B00)

inline static constexpr unsigned int RPGM_TypeDefinitionIndex = 48048;

class RPGM : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGM__CTOR_OFFSET))(this);
	}
};
