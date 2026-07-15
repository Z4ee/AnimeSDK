#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpritePresetRecord; }
namespace UnityEngine { class Component; }

#define CLASS_1_C2377A6F27A5EB40_METHOD_1_4E0D2517A600E7CE_OFFSET UNITYSDK_OFFSET(0x18392E90)
#define CLASS_1_C2377A6F27A5EB40_METHOD_1_5FFF54C1FB3AE2A2_OFFSET UNITYSDK_OFFSET(0x18392BF0)
#define CLASS_1_C2377A6F27A5EB40__CTOR_OFFSET UNITYSDK_OFFSET(0x18393090)

inline static constexpr unsigned int Class_1_C2377A6F27A5EB40_TypeDefinitionIndex = 65954;

class Class_1_C2377A6F27A5EB40 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2377A6F27A5EB40__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FFF54C1FB3AE2A2(::UnityEngine::Component* a1, ::RPG::GameCore::SpritePresetRecord* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + CLASS_1_C2377A6F27A5EB40_METHOD_1_5FFF54C1FB3AE2A2_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SpritePresetRecord* Method_1_4E0D2517A600E7CE(::UnityEngine::Component* a1)
	{
		return ((::RPG::GameCore::SpritePresetRecord*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_C2377A6F27A5EB40_METHOD_1_4E0D2517A600E7CE_OFFSET))(this, a1);
	}
};
