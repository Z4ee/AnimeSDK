#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define LAIMPORTANTSIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1312A160)

inline static constexpr unsigned int LaImportantSign_TypeDefinitionIndex = 64904;

class LaImportantSign : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIMPORTANTSIGN__CTOR_OFFSET))(this);
	}
};
