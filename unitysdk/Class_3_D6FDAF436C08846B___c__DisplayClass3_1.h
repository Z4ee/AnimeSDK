#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierDispelFilterType.h"
#include "unitysdk/System/Object.h"

class Class_3_D6FDAF436C08846B___c__DisplayClass3_0;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1191C450)
#define CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_1__FILTERMODIFIERTOINFECT_B__3_OFFSET UNITYSDK_OFFSET(0x1191C540)

inline static constexpr unsigned int Class_3_D6FDAF436C08846B___c__DisplayClass3_1_TypeDefinitionIndex = 51476;

class Class_3_D6FDAF436C08846B___c__DisplayClass3_1 : public ::System::Object
{
public:
	::Class_3_D6FDAF436C08846B___c__DisplayClass3_0* CS___8__locals1; // 0x10
	::RPG::GameCore::ModifierDispelFilterType dispelFilterType; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _FilterModifierToInfect_b__3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_1__FILTERMODIFIERTOINFECT_B__3_OFFSET))(this, a1);
	}
};
