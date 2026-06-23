#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO_METHOD_2_65585810E2458BA4_OFFSET UNITYSDK_OFFSET(0x7C8EA0)
#define MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x7C8D50)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_MonsterInfo_TypeDefinitionIndex = 73541;

	struct alignas(8) FieldInfo_MonsterInfo
	{
		::System::Int32 totalCount; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* monsterCountByID; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterFunctionType, ::System::Int32>* monsterCountByFunctionID; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO__CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void Method_2_65585810E2458BA4(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO_METHOD_2_65585810E2458BA4_OFFSET))(this, a1);
		}
		*/
	};
}
