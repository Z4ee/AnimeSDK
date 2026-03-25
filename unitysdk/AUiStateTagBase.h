#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AUISTATETAGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BF7130)

inline static constexpr unsigned int AUiStateTagBase_TypeDefinitionIndex = 38438;

class AUiStateTagBase : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGBASE__CTOR_OFFSET))(this);
	}
};
