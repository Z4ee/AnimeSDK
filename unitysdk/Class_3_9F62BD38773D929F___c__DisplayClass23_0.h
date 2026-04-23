#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_102;
class Class_3_9F62BD38773D929F;

#define CLASS_3_9F62BD38773D929F___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1190E190)
#define CLASS_3_9F62BD38773D929F___C__DISPLAYCLASS23_0___STARTUPDATEPRE_B__0_OFFSET UNITYSDK_OFFSET(0x1190F510)

inline static constexpr unsigned int Class_3_9F62BD38773D929F___c__DisplayClass23_0_TypeDefinitionIndex = 56411;

class Class_3_9F62BD38773D929F___c__DisplayClass23_0 : public ::System::Object
{
public:
	::Class_3_9F62BD38773D929F* __4__this; // 0x10
	::System::Boolean haveDownloadedFullAssets; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F62BD38773D929F___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartUpdatePre_b__0(::Class_1_43BD383C98B4C0C5_102* result)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_102*))((::PBYTE)hIl2Cpp + CLASS_3_9F62BD38773D929F___C__DISPLAYCLASS23_0___STARTUPDATEPRE_B__0_OFFSET))(this, result);
	}
};
