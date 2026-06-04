#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36E937D84726B70A;

#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC18BEC0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0__GETOPTIONRATIO_B__0_OFFSET UNITYSDK_OFFSET(0xC18BF90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolySelectOptionDisplayData___c__DisplayClass1_0_TypeDefinitionIndex = 61980;

	class MonopolySelectOptionDisplayData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 optionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOptionRatio_b__0(::Class_1_36E937D84726B70A* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_36E937D84726B70A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0__GETOPTIONRATIO_B__0_OFFSET))(this, a1);
		}
	};
}
