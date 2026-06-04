#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_5_2F32E3B47FCDB448_OFFSET UNITYSDK_OFFSET(0x198EB4D0)
#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_5_3B5BE9022E6A124E_OFFSET UNITYSDK_OFFSET(0x198E3B30)
#define RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x198E3AC0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetBirdSkillDisableAction_TypeDefinitionIndex = 23549;

	class SetBirdSkillDisableAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Disable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2F32E3B47FCDB448(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_5_2F32E3B47FCDB448_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3B5BE9022E6A124E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetBirdSkillDisableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetBirdSkillDisableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETBIRDSKILLDISABLEACTION_METHOD_5_3B5BE9022E6A124E_OFFSET))(a1, a2);
		}
	};
}
