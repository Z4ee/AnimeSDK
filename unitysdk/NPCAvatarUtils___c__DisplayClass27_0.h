#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapMaterialProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace UnityEngine { class Renderer; }

#define NPCAVATARUTILS___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF846D40)
#define NPCAVATARUTILS___C__DISPLAYCLASS27_0__OVERRIDEPARTRENDERERMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0xF846D50)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass27_0_TypeDefinitionIndex = 59882;

class NPCAvatarUtils___c__DisplayClass27_0 : public ::System::Object
{
public:
	::UnityEngine::Renderer* renderer; // 0x10
	::System::UInt16 matIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::System::Void _OverridePartRendererMaterial_b__0(::NapMaterialProperty napMatProperty, ::UnityEngine::Color32 color)
	{
		return ((::System::Void(*)(::PVOID, ::NapMaterialProperty, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS27_0__OVERRIDEPARTRENDERERMATERIAL_B__0_OFFSET))(this, napMatProperty, color);
	}
};
