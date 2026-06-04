#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpritePresetRecord; }
namespace UnityEngine { class Component; }

#define CLASS_1_8BAB76041E1310C5_METHOD_1_4F4FD572700C1D57_OFFSET UNITYSDK_OFFSET(0xAAE9810)
#define CLASS_1_8BAB76041E1310C5_METHOD_1_D9614D0DC425D959_OFFSET UNITYSDK_OFFSET(0xAAE9540)
#define CLASS_1_8BAB76041E1310C5__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE9A40)

inline static constexpr unsigned int Class_1_8BAB76041E1310C5_TypeDefinitionIndex = 64554;

class Class_1_8BAB76041E1310C5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BAB76041E1310C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D9614D0DC425D959(::UnityEngine::Component* a1, ::RPG::GameCore::SpritePresetRecord* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + CLASS_1_8BAB76041E1310C5_METHOD_1_D9614D0DC425D959_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SpritePresetRecord* Method_1_4F4FD572700C1D57(::UnityEngine::Component* a1)
	{
		return ((::RPG::GameCore::SpritePresetRecord*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_8BAB76041E1310C5_METHOD_1_4F4FD572700C1D57_OFFSET))(this, a1);
	}
};
