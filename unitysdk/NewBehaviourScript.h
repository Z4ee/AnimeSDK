#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NEWBEHAVIOURSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8CFF0)

inline static constexpr unsigned int NewBehaviourScript_TypeDefinitionIndex = 42302;

class NewBehaviourScript : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWBEHAVIOURSCRIPT__CTOR_OFFSET))(this);
	}
};
