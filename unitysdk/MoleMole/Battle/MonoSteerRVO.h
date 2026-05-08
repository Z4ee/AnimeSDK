#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class Class_1_5AA2BE468EDCE452;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERRVO_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x141D5E40)
#define MOLEMOLE_BATTLE_MONOSTEERRVO_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x141D5D80)
#define MOLEMOLE_BATTLE_MONOSTEERRVO__CTOR_OFFSET UNITYSDK_OFFSET(0x141D5F50)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerRVO_TypeDefinitionIndex = 80481;

	class MonoSteerRVO : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single strength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO__CTOR_OFFSET))(this);
		}

		::Class_1_5AA2BE468EDCE452* OnSteerCreate(::MoleMole::MonoSteer* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::Class_1_5AA2BE468EDCE452*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO_ONSTEERCREATE_OFFSET))(this, a1, a2);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO_GETWEIGHT_OFFSET))(this, a1);
		}
	};
}
