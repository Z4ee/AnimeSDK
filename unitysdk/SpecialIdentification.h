#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SPECIALIDENTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x11091580)

inline static constexpr unsigned int SpecialIdentification_TypeDefinitionIndex = 27142;

class SpecialIdentification : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean noAddMonoRenderEntity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPECIALIDENTIFICATION__CTOR_OFFSET))(this);
	}
};
