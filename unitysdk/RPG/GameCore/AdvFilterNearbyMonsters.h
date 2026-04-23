#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_METHOD_3_00CA38B22DA54640_OFFSET UNITYSDK_OFFSET(0x186508E0)
#define RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_METHOD_3_6CAA3F5049DE1E39_OFFSET UNITYSDK_OFFSET(0x18650960)
#define RPG_GAMECORE_ADVFILTERNEARBYMONSTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18650930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFilterNearbyMonsters_TypeDefinitionIndex = 20596;

	class AdvFilterNearbyMonsters : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFILTERNEARBYMONSTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_00CA38B22DA54640(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFilterNearbyMonsters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFilterNearbyMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_METHOD_3_00CA38B22DA54640_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CAA3F5049DE1E39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFilterNearbyMonsters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFilterNearbyMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_METHOD_3_6CAA3F5049DE1E39_OFFSET))(a1, a2);
		}
	};
}
