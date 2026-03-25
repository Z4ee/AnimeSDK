#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EC356161B2F831D7;
class Class_2_9DD8A46984F1AFFD;
namespace Entitas { class IEntity; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_EC356161B2F831D7___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8C4F620)
#define CLASS_1_EC356161B2F831D7___C__DISPLAYCLASS23_0__INITBORDERPLATEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x8C52A40)

inline static constexpr unsigned int Class_1_EC356161B2F831D7___c__DisplayClass23_0_TypeDefinitionIndex = 62586;

class Class_1_EC356161B2F831D7___c__DisplayClass23_0 : public ::System::Object
{
public:
	::Class_1_EC356161B2F831D7* __4__this; // 0x10
	::Class_2_9DD8A46984F1AFFD* enterEntityCaptured; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC356161B2F831D7___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void _InitBorderPlatEffect_b__0(::Entitas::IEntity* e, ::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EC356161B2F831D7___C__DISPLAYCLASS23_0__INITBORDERPLATEFFECT_B__0_OFFSET))(this, e, go);
	}
};
