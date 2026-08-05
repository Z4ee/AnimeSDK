#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NEWBEHAVIOURSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x112B2010)

inline static constexpr unsigned int NewBehaviourScript_TypeDefinitionIndex = 78441;

class NewBehaviourScript : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWBEHAVIOURSCRIPT__CTOR_OFFSET))(this);
	}
};
