#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_3_B6862CB7D55DC621_OFFSET UNITYSDK_OFFSET(0x1973A9C0)
#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_3_FDCB759A46A0B218_OFFSET UNITYSDK_OFFSET(0x1972DE20)
#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972DDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnableIntervalSpawnAction_TypeDefinitionIndex = 17767;

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

		static ::System::Void Method_3_B6862CB7D55DC621(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_3_B6862CB7D55DC621_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FDCB759A46A0B218(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_METHOD_3_FDCB759A46A0B218_OFFSET))(a1, a2);
		}
	};
}
