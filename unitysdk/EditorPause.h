#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EditorUpdateScript.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define EDITORPAUSE_EDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x1E7A5250)
#define EDITORPAUSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E7A5260)
#define EDITORPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A5270)

inline static constexpr unsigned int EditorPause_TypeDefinitionIndex = 91062;

class EditorPause : public ::EditorUpdateScript
{
public:
	::UnityEngine::KeyCode pauseKey; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORPAUSE__CTOR_OFFSET))(this);
	}

	::System::Void EditorUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORPAUSE_EDITORUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORPAUSE_UPDATE_OFFSET))(this);
	}
};
