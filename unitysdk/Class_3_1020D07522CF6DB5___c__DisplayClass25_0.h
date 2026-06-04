#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_113;
class Class_3_1020D07522CF6DB5;

#define CLASS_3_1020D07522CF6DB5___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB050210)
#define CLASS_3_1020D07522CF6DB5___C__DISPLAYCLASS25_0___STARTUPDATEPRE_B__0_OFFSET UNITYSDK_OFFSET(0xB051740)

inline static constexpr unsigned int Class_3_1020D07522CF6DB5___c__DisplayClass25_0_TypeDefinitionIndex = 57173;

class Class_3_1020D07522CF6DB5___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_3_1020D07522CF6DB5* __4__this; // 0x10
	::System::Boolean haveDownloadedFullAssets; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1020D07522CF6DB5___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartUpdatePre_b__0(::Class_1_43BD383C98B4C0C5_113* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_113*))((::PBYTE)hIl2Cpp + CLASS_3_1020D07522CF6DB5___C__DISPLAYCLASS25_0___STARTUPDATEPRE_B__0_OFFSET))(this, a1);
	}
};
