#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_185A388C9275732B;

#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE183F80)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0___FILLWITHALTERNATIVEAVATARS_B__0_OFFSET UNITYSDK_OFFSET(0xE187990)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator___c__DisplayClass21_0_TypeDefinitionIndex = 68084;

	class TeamBuildCalculator___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Int32 altIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void __FillWithAlternativeAvatars_b__0(::Class_1_185A388C9275732B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_185A388C9275732B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0___FILLWITHALTERNATIVEAVATARS_B__0_OFFSET))(this, a1);
		}
	};
}
