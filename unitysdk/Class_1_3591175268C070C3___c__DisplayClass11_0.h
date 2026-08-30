#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3591175268C070C3;
class Class_2_B8E38BF47138A2E5;

#define CLASS_1_3591175268C070C3___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF862F0)
#define CLASS_1_3591175268C070C3___C__DISPLAYCLASS11_0___REGISTERONCLOSEINDOORCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xCF86300)

inline static constexpr unsigned int Class_1_3591175268C070C3___c__DisplayClass11_0_TypeDefinitionIndex = 76339;

class Class_1_3591175268C070C3___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_1_3591175268C070C3* __4__this; // 0x10
	::Class_2_B8E38BF47138A2E5* doorEntity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3591175268C070C3___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void __RegisterOnCloseInDoorCallback_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_3591175268C070C3___C__DISPLAYCLASS11_0___REGISTERONCLOSEINDOORCALLBACK_B__0_OFFSET))(this, a1);
	}
};
