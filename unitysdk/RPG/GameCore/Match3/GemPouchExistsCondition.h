#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_5_8E4CBE21998C37E2_OFFSET UNITYSDK_OFFSET(0x1D241000)
#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_5_ADEA620B69BDEDB6_OFFSET UNITYSDK_OFFSET(0x1D240EF0)
#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D240FF0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int GemPouchExistsCondition_TypeDefinitionIndex = 24606;

	class GemPouchExistsCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_ADEA620B69BDEDB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::GemPouchExistsCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::GemPouchExistsCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_5_ADEA620B69BDEDB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8E4CBE21998C37E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::GemPouchExistsCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::GemPouchExistsCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_5_8E4CBE21998C37E2_OFFSET))(a1, a2);
		}
	};
}
