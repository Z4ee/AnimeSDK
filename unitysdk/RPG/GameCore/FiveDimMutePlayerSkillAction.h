#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_4_106F46B206A85B76_OFFSET UNITYSDK_OFFSET(0x1D6CEB70)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_4_911BFFEAA1BB1DB3_OFFSET UNITYSDK_OFFSET(0x1D6CEC50)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CEC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMutePlayerSkillAction_TypeDefinitionIndex = 18769;

	class FiveDimMutePlayerSkillAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_106F46B206A85B76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_4_106F46B206A85B76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_911BFFEAA1BB1DB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_METHOD_4_911BFFEAA1BB1DB3_OFFSET))(a1, a2);
		}
	};
}
