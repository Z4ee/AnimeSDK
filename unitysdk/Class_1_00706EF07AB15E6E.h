#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatInsertAbilityPriority.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/InsertAbilityState.h"
#include "unitysdk/System/Object.h"

class Class_2_48488E8DBD9F6BCE;
class Class_2_85F04A82B3DCEB31;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace System { class String; }

#define CLASS_1_00706EF07AB15E6E_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x19767440)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x197675A0)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0x19767510)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x19767630)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_A78ED43ED0590FB6_OFFSET UNITYSDK_OFFSET(0x19767460)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_D3CE97DCC13D88F7_OFFSET UNITYSDK_OFFSET(0x19767480)
#define CLASS_1_00706EF07AB15E6E__CTOR_OFFSET UNITYSDK_OFFSET(0x19767490)

inline static constexpr unsigned int Class_1_00706EF07AB15E6E_TypeDefinitionIndex = 35740;

class Class_1_00706EF07AB15E6E : public ::System::Object
{
public:
	::RPG::GameCore::DiceCombatInsertAbilityConfig* IGHAHBNLIJA; // 0x10
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::Class_2_85F04A82B3DCEB31* INJAFKILCKC; // 0x20
	::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState DLNIGFGLPLJ; // 0x28

	::System::Void _ctor(::Class_2_48488E8DBD9F6BCE* a1, ::RPG::GameCore::DiceCombatInsertAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48488E8DBD9F6BCE*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatInsertAbilityPriority Method_1_A78ED43ED0590FB6()
	{
		return ((::RPG::GameCore::DiceCombatInsertAbilityPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E_METHOD_1_A78ED43ED0590FB6_OFFSET))(this);
	}

	::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState Method_1_D3CE97DCC13D88F7()
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E_METHOD_1_D3CE97DCC13D88F7_OFFSET))(this);
	}

	::System::Void Method_1_6D8B8CD47CD59618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
