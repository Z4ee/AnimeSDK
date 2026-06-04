#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5B19D77356A451DE;
class Class_2_B9E8C2EEAA5C96EC;
namespace Entitas { class IEntity; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_5B19D77356A451DE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA651CF0)
#define CLASS_1_5B19D77356A451DE___C__DISPLAYCLASS32_0__INITBORDERPLATEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA655060)

inline static constexpr unsigned int Class_1_5B19D77356A451DE___c__DisplayClass32_0_TypeDefinitionIndex = 71417;

class Class_1_5B19D77356A451DE___c__DisplayClass32_0 : public ::System::Object
{
public:
	::Class_1_5B19D77356A451DE* __4__this; // 0x10
	::Class_2_B9E8C2EEAA5C96EC* enterEntityCaptured; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B19D77356A451DE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Void _InitBorderPlatEffect_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5B19D77356A451DE___C__DISPLAYCLASS32_0__INITBORDERPLATEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
