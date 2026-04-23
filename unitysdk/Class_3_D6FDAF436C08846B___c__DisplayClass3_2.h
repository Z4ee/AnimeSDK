#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11D57A40)
#define CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_2__FILTERMODIFIERTOINFECT_B__4_OFFSET UNITYSDK_OFFSET(0x11D57C20)

inline static constexpr unsigned int Class_3_D6FDAF436C08846B___c__DisplayClass3_2_TypeDefinitionIndex = 50809;

class Class_3_D6FDAF436C08846B___c__DisplayClass3_2 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* caster; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_2__CTOR_OFFSET))(this);
	}

	::System::Boolean _FilterModifierToInfect_b__4(::RPG::GameCore::TurnBasedModifierInstance* instance)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_2__FILTERMODIFIERTOINFECT_B__4_OFFSET))(this, instance);
	}
};
