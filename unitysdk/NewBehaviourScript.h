#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NEWBEHAVIOURSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0xF85F9C0)

inline static constexpr unsigned int NewBehaviourScript_TypeDefinitionIndex = 55552;

class NewBehaviourScript : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWBEHAVIOURSCRIPT__CTOR_OFFSET))(this);
	}
};
