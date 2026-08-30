#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1A589F8D4B1F727D;
class Class_2_B9E8C2EEAA5C96EC;
namespace Entitas { class IEntity; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_1A589F8D4B1F727D___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB977930)
#define CLASS_1_1A589F8D4B1F727D___C__DISPLAYCLASS46_0__INITBORDERPLATEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB97AFE0)

inline static constexpr unsigned int Class_1_1A589F8D4B1F727D___c__DisplayClass46_0_TypeDefinitionIndex = 76416;

class Class_1_1A589F8D4B1F727D___c__DisplayClass46_0 : public ::System::Object
{
public:
	::Class_2_B9E8C2EEAA5C96EC* enterEntityCaptured; // 0x10
	::Class_1_1A589F8D4B1F727D* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A589F8D4B1F727D___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
	}

	::System::Void _InitBorderPlatEffect_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1A589F8D4B1F727D___C__DISPLAYCLASS46_0__INITBORDERPLATEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
