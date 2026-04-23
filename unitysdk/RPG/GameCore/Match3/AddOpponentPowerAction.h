#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_5_0344763E9D46A380_OFFSET UNITYSDK_OFFSET(0x18AAD8B0)
#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_5_093617CEC283FC47_OFFSET UNITYSDK_OFFSET(0x18AAD9D0)
#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAD960)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AddOpponentPowerAction_TypeDefinitionIndex = 23703;

	class AddOpponentPowerAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Int32 Power; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0344763E9D46A380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddOpponentPowerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddOpponentPowerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_5_0344763E9D46A380_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_093617CEC283FC47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddOpponentPowerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddOpponentPowerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_5_093617CEC283FC47_OFFSET))(a1, a2);
		}
	};
}
