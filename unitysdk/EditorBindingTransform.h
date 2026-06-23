#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EditorUpdateScript.h"

namespace UnityEngine { class GameObject; }

#define EDITORBINDINGTRANSFORM_EDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x1E7A4DA0)
#define EDITORBINDINGTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A51B0)

inline static constexpr unsigned int EditorBindingTransform_TypeDefinitionIndex = 91050;

class EditorBindingTransform : public ::EditorUpdateScript
{
public:
	::UnityEngine::GameObject* goSrc; // 0x18
	::UnityEngine::GameObject* goDst; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORBINDINGTRANSFORM__CTOR_OFFSET))(this);
	}

	::System::Void EditorUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORBINDINGTRANSFORM_EDITORUPDATE_OFFSET))(this);
	}
};
