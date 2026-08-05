#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class Class_1_D33A7AE9308D51C5;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERRVO_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1279CC90)
#define MOLEMOLE_BATTLE_MONOSTEERRVO_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x1279CBD0)
#define MOLEMOLE_BATTLE_MONOSTEERRVO__CTOR_OFFSET UNITYSDK_OFFSET(0x1279CDA0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerRVO_TypeDefinitionIndex = 89583;

	class MonoSteerRVO : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single strength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO__CTOR_OFFSET))(this);
		}

		::Class_1_D33A7AE9308D51C5* OnSteerCreate(::MoleMole::MonoSteer* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::Class_1_D33A7AE9308D51C5*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO_ONSTEERCREATE_OFFSET))(this, a1, a2);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO_GETWEIGHT_OFFSET))(this, a1);
		}
	};
}
