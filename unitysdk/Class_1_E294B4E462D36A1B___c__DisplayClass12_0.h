#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_1_27E511E181CEAAFF;

#define CLASS_1_E294B4E462D36A1B___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4F6A0)
#define CLASS_1_E294B4E462D36A1B___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET UNITYSDK_OFFSET(0x17B51850)

inline static constexpr unsigned int Class_1_E294B4E462D36A1B___c__DisplayClass12_0_TypeDefinitionIndex = 37714;

class Class_1_E294B4E462D36A1B___c__DisplayClass12_0 : public ::System::Object
{
public:
	::RPG::Client::ByteHash16 hash; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E294B4E462D36A1B___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsFileExistByShortPathHash_b__0(::Class_1_27E511E181CEAAFF* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_27E511E181CEAAFF*))((::PBYTE)hIl2Cpp + CLASS_1_E294B4E462D36A1B___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET))(this, e);
	}
};
