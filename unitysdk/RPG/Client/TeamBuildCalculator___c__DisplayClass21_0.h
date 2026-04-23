#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_819F0DD6CB28FAB6;

#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A0420)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0___FILLWITHALTERNATIVEAVATARS_B__0_OFFSET UNITYSDK_OFFSET(0xB2A3CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator___c__DisplayClass21_0_TypeDefinitionIndex = 62773;

	class TeamBuildCalculator___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Int32 altIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void __FillWithAlternativeAvatars_b__0(::Class_1_819F0DD6CB28FAB6* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_819F0DD6CB28FAB6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__DISPLAYCLASS21_0___FILLWITHALTERNATIVEAVATARS_B__0_OFFSET))(this, builder);
		}
	};
}
