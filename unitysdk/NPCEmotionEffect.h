#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCEMOTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD4464D0)

inline static constexpr unsigned int NPCEmotionEffect_TypeDefinitionIndex = 66122;

class NPCEmotionEffect : public ::System::Object
{
public:
	::System::String* facialKey; // 0x10
	::System::String* effectKey; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONEFFECT__CTOR_OFFSET))(this);
	}
};
