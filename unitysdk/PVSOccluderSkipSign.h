#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSOCCLUDERSKIPSIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x16826EB0)

inline static constexpr unsigned int PVSOccluderSkipSign_TypeDefinitionIndex = 84454;

class PVSOccluderSkipSign : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSOCCLUDERSKIPSIGN__CTOR_OFFSET))(this);
	}
};
