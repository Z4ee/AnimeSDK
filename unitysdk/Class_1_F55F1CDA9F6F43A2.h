#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpritePresetRecord; }
namespace UnityEngine { class Component; }

#define CLASS_1_F55F1CDA9F6F43A2_METHOD_1_4F4FD572700C1D57_OFFSET UNITYSDK_OFFSET(0x11DC2BA0)
#define CLASS_1_F55F1CDA9F6F43A2_METHOD_1_EBDFA5AA17084425_OFFSET UNITYSDK_OFFSET(0x11DC29C0)
#define CLASS_1_F55F1CDA9F6F43A2__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC2DD0)

inline static constexpr unsigned int Class_1_F55F1CDA9F6F43A2_TypeDefinitionIndex = 63634;

class Class_1_F55F1CDA9F6F43A2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F55F1CDA9F6F43A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBDFA5AA17084425(::UnityEngine::Component* a1, ::RPG::GameCore::SpritePresetRecord* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + CLASS_1_F55F1CDA9F6F43A2_METHOD_1_EBDFA5AA17084425_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SpritePresetRecord* Method_1_4F4FD572700C1D57(::UnityEngine::Component* a1)
	{
		return ((::RPG::GameCore::SpritePresetRecord*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_F55F1CDA9F6F43A2_METHOD_1_4F4FD572700C1D57_OFFSET))(this, a1);
	}
};
