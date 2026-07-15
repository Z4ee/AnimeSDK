#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_4_1D6364E517886E38_OFFSET UNITYSDK_OFFSET(0x1BD26E70)
#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_4_D30CFC42DE5C7064_OFFSET UNITYSDK_OFFSET(0x1BD27700)
#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD24300)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ConditionBase_TypeDefinitionIndex = 24011;

	class Match3ConditionBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D6364E517886E38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ConditionBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ConditionBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_4_1D6364E517886E38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D30CFC42DE5C7064(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ConditionBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_METHOD_4_D30CFC42DE5C7064_OFFSET))(a1, a2);
		}
	};
}
