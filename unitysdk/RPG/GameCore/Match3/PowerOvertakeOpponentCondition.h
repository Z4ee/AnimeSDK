#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_5_13B315FFD2698E93_OFFSET UNITYSDK_OFFSET(0x198E7CC0)
#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_5_267BDA83494A14AA_OFFSET UNITYSDK_OFFSET(0x198EAB40)
#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x198E7C40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PowerOvertakeOpponentCondition_TypeDefinitionIndex = 23531;

	class PowerOvertakeOpponentCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_267BDA83494A14AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_5_267BDA83494A14AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_13B315FFD2698E93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_METHOD_5_13B315FFD2698E93_OFFSET))(a1, a2);
		}
	};
}
