#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define REFLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11091520)

inline static constexpr unsigned int Reflector_TypeDefinitionIndex = 27760;

class Reflector : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color m_Color; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFLECTOR__CTOR_OFFSET))(this);
	}
};
