#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/FieldInfo_EventInfo.h"
#include "unitysdk/MoleMole/Battle/FieldInfo_MonsterInfo.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_BATTLE_FIELDINFO_SUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x707530)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_Summary_TypeDefinitionIndex = 55037;

	struct alignas(8) FieldInfo_Summary
	{
		::MoleMole::Battle::FieldInfo_MonsterInfo MonsterInfo; // 0x10
		::MoleMole::Battle::FieldInfo_EventInfo EventInfo; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_SUMMARY__CTOR_OFFSET))(this, a1);
		}
	};
}
