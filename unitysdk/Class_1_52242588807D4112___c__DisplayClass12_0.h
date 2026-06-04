#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_1_42A5121F85009164;

#define CLASS_1_52242588807D4112___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1891B370)
#define CLASS_1_52242588807D4112___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET UNITYSDK_OFFSET(0x1891D410)

inline static constexpr unsigned int Class_1_52242588807D4112___c__DisplayClass12_0_TypeDefinitionIndex = 38446;

class Class_1_52242588807D4112___c__DisplayClass12_0 : public ::System::Object
{
public:
	::RPG::Client::ByteHash16 hash; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52242588807D4112___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsFileExistByShortPathHash_b__0(::Class_1_42A5121F85009164* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_42A5121F85009164*))((::PBYTE)hIl2Cpp + CLASS_1_52242588807D4112___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET))(this, a1);
	}
};
