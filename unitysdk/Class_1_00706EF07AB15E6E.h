#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatInsertAbilityPriority.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/InsertAbilityState.h"
#include "unitysdk/System/Object.h"

class Class_2_305B57DBA79213AA;
class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace System { class String; }

#define CLASS_1_00706EF07AB15E6E_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17C2F720)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x17C2F880)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x17C2F7F0)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x17C2F910)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_A78ED43ED0590FB6_OFFSET UNITYSDK_OFFSET(0x17C2F740)
#define CLASS_1_00706EF07AB15E6E_METHOD_1_D3CE97DCC13D88F7_OFFSET UNITYSDK_OFFSET(0x17C2F760)
#define CLASS_1_00706EF07AB15E6E__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2F770)

inline static constexpr unsigned int Class_1_00706EF07AB15E6E_TypeDefinitionIndex = 34215;

class Class_1_00706EF07AB15E6E : public ::System::Object
{
public:
	::Class_2_843468DEB2C89684* Field_1_1; // 0x10
	::RPG::GameCore::DiceCombatInsertAbilityConfig* Field_1_0; // 0x18
	::Class_2_305B57DBA79213AA* Field_1_3; // 0x20
	::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState Field_1_2; // 0x28

	::System::Void _ctor(::Class_2_843468DEB2C89684* a1, ::RPG::GameCore::DiceCombatInsertAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_843468DEB2C89684*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00706EF07AB15E6E_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
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
