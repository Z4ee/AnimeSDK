#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CHECKDUPLICATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A05670)

inline static constexpr unsigned int CheckDuplicateNode_TypeDefinitionIndex = 91439;

class CheckDuplicateNode : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKDUPLICATENODE__CTOR_OFFSET))(this);
	}
};
