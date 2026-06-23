#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DA97A58F5C2AF439.h"
#include "unitysdk/Struct_2_E216A78B21524381.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_0_16E4307DCC419505_198;

#define MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_GET_PULLDATA_OFFSET UNITYSDK_OFFSET(0xE9498D0)
#define MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_SET_PULLDATA_OFFSET UNITYSDK_OFFSET(0xE9498E0)
#define MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xE9498F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelEnvironmentFeatureSubsystem_InnerPullDataService_TypeDefinitionIndex = 41082;

	class LevelEnvironmentFeatureSubsystem_InnerPullDataService : public ::System::Object
	{
	public:
		::Struct_2_E216A78B21524381 _PullData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE__CTOR_OFFSET))(this);
		}

		::Struct_2_E216A78B21524381 get_PullData()
		{
			return ((::Struct_2_E216A78B21524381(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_GET_PULLDATA_OFFSET))(this);
		}

		::System::Void set_PullData(::Struct_2_E216A78B21524381 value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_E216A78B21524381))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_SET_PULLDATA_OFFSET))(this, value);
		}
	};
}
