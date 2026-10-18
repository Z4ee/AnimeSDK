#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_4_0016D04CC393C9C3_OFFSET UNITYSDK_OFFSET(0x1D6BB0D0)
#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_4_5C8F1EB0F09E78CA_OFFSET UNITYSDK_OFFSET(0x1D6BB080)
#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnableIntervalSpawnAction_TypeDefinitionIndex = 18673;

	class FiveDimEnableIntervalSpawnAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean OverrideInterval; // 0x11
		::System::Single SpawnInterval; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5C8F1EB0F09E78CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_4_5C8F1EB0F09E78CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0016D04CC393C9C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_4_0016D04CC393C9C3_OFFSET))(a1, a2);
		}
	};
}
