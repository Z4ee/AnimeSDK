#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_5_8B6514FD33236E21_OFFSET UNITYSDK_OFFSET(0x198DEEC0)
#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_5_A5CF75682A7804A2_OFFSET UNITYSDK_OFFSET(0x198DF000)
#define RPG_GAMECORE_MATCH3_ACTIONROLECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x198DEF80)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ActionRoleCondition_TypeDefinitionIndex = 23530;

	class ActionRoleCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::RPG::GameCore::Match3::ActionRole Role; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8B6514FD33236E21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ActionRoleCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ActionRoleCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_5_8B6514FD33236E21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A5CF75682A7804A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ActionRoleCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ActionRoleCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ACTIONROLECONDITION_METHOD_5_A5CF75682A7804A2_OFFSET))(a1, a2);
		}
	};
}
