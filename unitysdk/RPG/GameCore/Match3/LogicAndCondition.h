#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_5_40C0EDE73753DB75_OFFSET UNITYSDK_OFFSET(0x1D25EBF0)
#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_5_9CF379A0468E7C45_OFFSET UNITYSDK_OFFSET(0x1D25EC50)
#define RPG_GAMECORE_MATCH3_LOGICANDCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D25EC40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int LogicAndCondition_TypeDefinitionIndex = 24612;

	class LogicAndCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3ConditionBase*>* Conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_40C0EDE73753DB75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicAndCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicAndCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_5_40C0EDE73753DB75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9CF379A0468E7C45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicAndCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicAndCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICANDCONDITION_METHOD_5_9CF379A0468E7C45_OFFSET))(a1, a2);
		}
	};
}
