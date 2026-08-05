#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace UnityEngine { class Renderer; }

#define NPCAVATARUTILS___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF847EB0)
#define NPCAVATARUTILS___C__DISPLAYCLASS41_0__OVERRIDEPARTRENDERERMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0xF847EC0)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass41_0_TypeDefinitionIndex = 53565;

class NPCAvatarUtils___c__DisplayClass41_0 : public ::System::Object
{
public:
	::UnityEngine::Renderer* renderer; // 0x10
	::System::UInt16 matIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
	}

	::System::Void _OverridePartRendererMaterial_b__0(::System::Int32 napMatProperty, ::UnityEngine::Color32 color)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS41_0__OVERRIDEPARTRENDERERMATERIAL_B__0_OFFSET))(this, napMatProperty, color);
	}
};
