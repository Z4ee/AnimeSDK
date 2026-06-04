#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_356;
class Class_3_12C3ED04B580CAC3;

#define CLASS_3_12C3ED04B580CAC3___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA952050)
#define CLASS_3_12C3ED04B580CAC3___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET UNITYSDK_OFFSET(0xA952060)

inline static constexpr unsigned int Class_3_12C3ED04B580CAC3___c__DisplayClass1_0_TypeDefinitionIndex = 50986;

class Class_3_12C3ED04B580CAC3___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_3_12C3ED04B580CAC3* __4__this; // 0x10
	::RPG::GameCore::FixPoint compareValue; // 0x18
	::System::Nullable_1<::System::Boolean> ret; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12C3ED04B580CAC3___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _Evaluate_b__0(::Class_0_16E4307DCC419505_356* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + CLASS_3_12C3ED04B580CAC3___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET))(this, a1);
	}
};
