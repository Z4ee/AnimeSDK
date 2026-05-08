#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class Class_1_5AA2BE468EDCE452;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERCAMERA_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x13986260)
#define MOLEMOLE_BATTLE_MONOSTEERCAMERA_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x13986150)
#define MOLEMOLE_BATTLE_MONOSTEERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x13986370)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerCamera_TypeDefinitionIndex = 45154;

	class MonoSteerCamera : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single NormalStrength; // 0x20
		::System::Single TangentStrength; // 0x24
		::System::Single viewPortMinX; // 0x28
		::System::Single viewPortMaxX; // 0x2C
		::System::Single viewPortMinY; // 0x30
		::System::Single viewPortMaxY; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERCAMERA__CTOR_OFFSET))(this);
		}

		::Class_1_5AA2BE468EDCE452* OnSteerCreate(::MoleMole::MonoSteer* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::Class_1_5AA2BE468EDCE452*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERCAMERA_ONSTEERCREATE_OFFSET))(this, a1, a2);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERCAMERA_GETWEIGHT_OFFSET))(this, a1);
		}
	};
}
