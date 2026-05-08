#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOUIFOCUSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x126D0130)

inline static constexpr unsigned int MonoUIFocusBase_TypeDefinitionIndex = 82921;

class MonoUIFocusBase : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean IsFirst; // 0x18
	::System::Boolean IsAutoShow; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFOCUSBASE__CTOR_OFFSET))(this);
	}
};
