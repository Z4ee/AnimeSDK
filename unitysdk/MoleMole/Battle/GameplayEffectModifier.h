#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0E82907678BD44BD.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B9019A799F77EC17;
class Class_1_CCC17A1447C28688;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x7D5030)
#define MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_1D60A9977D72CE8E_OFFSET UNITYSDK_OFFSET(0x7D4F30)
#define MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x7D4FD0)
#define MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x7D4E70)
#define MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_E2A7A1BA8D478058_OFFSET UNITYSDK_OFFSET(0x7D5040)
#define MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4D30)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int GameplayEffectModifier_TypeDefinitionIndex = 56358;

	struct alignas(8) GameplayEffectModifier
	{
		// static const ::System::String* fullNameFormat; // 0x0
		::System::String* AttributeFullName; // 0x10
		::System::String* AttributeSetName; // 0x18
		::System::String* AttributeShortName; // 0x20
		::System::Single ModiferMagnitude; // 0x28
		::Enum_3_0E82907678BD44BD Operation; // 0x2C
		::Class_1_B9019A799F77EC17* MMC; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3, ::Enum_3_0E82907678BD44BD a4, ::Class_1_B9019A799F77EC17* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::Enum_3_0E82907678BD44BD, ::Class_1_B9019A799F77EC17*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_2_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_2_1D60A9977D72CE8E(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_1D60A9977D72CE8E_OFFSET))(this, a1);
		}

		::System::Void Method_2_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_2_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Single Method_2_E2A7A1BA8D478058(::Class_1_CCC17A1447C28688* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::Class_1_CCC17A1447C28688*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_GAMEPLAYEFFECTMODIFIER_METHOD_2_E2A7A1BA8D478058_OFFSET))(this, a1, a2);
		}
	};
}
