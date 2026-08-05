#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define EDITORUPDATESCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7B4E0)

inline static constexpr unsigned int EditorUpdateScript_TypeDefinitionIndex = 94995;

class EditorUpdateScript : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORUPDATESCRIPT__CTOR_OFFSET))(this);
	}
};
