#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define EDITORLIGHTPREVIEWER_CLASS_1_128EA0FF53AE8A47__CTOR_OFFSET UNITYSDK_OFFSET(0x1357A180)

inline static constexpr unsigned int EditorLightPreviewer_Class_1_128EA0FF53AE8A47_TypeDefinitionIndex = 44673;

class EditorLightPreviewer_Class_1_128EA0FF53AE8A47 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CLASS_1_128EA0FF53AE8A47__CTOR_OFFSET))(this);
	}
};
