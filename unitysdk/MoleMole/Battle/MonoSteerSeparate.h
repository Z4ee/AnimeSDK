#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class Class_1_D33A7AE9308D51C5;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERSEPARATE_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x12A173F0)
#define MOLEMOLE_BATTLE_MONOSTEERSEPARATE_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x12A17320)
#define MOLEMOLE_BATTLE_MONOSTEERSEPARATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A17500)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerSeparate_TypeDefinitionIndex = 55830;

	class MonoSteerSeparate : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single strength; // 0x20
		::System::Single radius; // 0x24
		::System::Single distance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERSEPARATE__CTOR_OFFSET))(this);
		}

		::Class_1_D33A7AE9308D51C5* OnSteerCreate(::MoleMole::MonoSteer* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::Class_1_D33A7AE9308D51C5*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERSEPARATE_ONSTEERCREATE_OFFSET))(this, a1, a2);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERSEPARATE_GETWEIGHT_OFFSET))(this, a1);
		}
	};
}
