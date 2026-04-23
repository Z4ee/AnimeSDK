#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_5_0BB67E5A857DE9E5_OFFSET UNITYSDK_OFFSET(0x18AB0160)
#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_5_7B52671BD1AFE48C_OFFSET UNITYSDK_OFFSET(0x18AAFF40)
#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB00E0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int HasPropInputCondition_TypeDefinitionIndex = 23696;

	class HasPropInputCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7B52671BD1AFE48C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::HasPropInputCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::HasPropInputCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_5_7B52671BD1AFE48C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0BB67E5A857DE9E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::HasPropInputCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::HasPropInputCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_METHOD_5_0BB67E5A857DE9E5_OFFSET))(a1, a2);
		}
	};
}
