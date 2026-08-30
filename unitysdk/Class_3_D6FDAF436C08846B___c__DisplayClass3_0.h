#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13526D20)
#define CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_0__FILTERMODIFIERTOINFECT_B__0_OFFSET UNITYSDK_OFFSET(0x13526E00)

inline static constexpr unsigned int Class_3_D6FDAF436C08846B___c__DisplayClass3_0_TypeDefinitionIndex = 55316;

class Class_3_D6FDAF436C08846B___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::EnumStatusType>* status; // 0x10
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* flags; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _FilterModifierToInfect_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__DISPLAYCLASS3_0__FILTERMODIFIERTOINFECT_B__0_OFFSET))(this, a1);
	}
};
