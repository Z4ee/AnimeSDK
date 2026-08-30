#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_3_9E89A4A5C8890B9E_OFFSET UNITYSDK_OFFSET(0x1D86F210)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_3_D97C02CFADC79E9B_OFFSET UNITYSDK_OFFSET(0x1D86F130)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMutePlayerSkillAction_TypeDefinitionIndex = 18559;

	class FiveDimMutePlayerSkillAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D97C02CFADC79E9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_3_D97C02CFADC79E9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E89A4A5C8890B9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_3_9E89A4A5C8890B9E_OFFSET))(a1, a2);
		}
	};
}
