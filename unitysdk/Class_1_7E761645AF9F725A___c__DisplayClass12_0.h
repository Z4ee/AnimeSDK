#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_1_27E511E181CEAAFF;

#define CLASS_1_7E761645AF9F725A___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16509260)
#define CLASS_1_7E761645AF9F725A___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET UNITYSDK_OFFSET(0x1650B300)

inline static constexpr unsigned int Class_1_7E761645AF9F725A___c__DisplayClass12_0_TypeDefinitionIndex = 31994;

class Class_1_7E761645AF9F725A___c__DisplayClass12_0 : public ::System::Object
{
public:
	::RPG::Client::ByteHash16 hash; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E761645AF9F725A___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsFileExistByShortPathHash_b__0(::Class_1_27E511E181CEAAFF* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_27E511E181CEAAFF*))((::PBYTE)hIl2Cpp + CLASS_1_7E761645AF9F725A___C__DISPLAYCLASS12_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET))(this, e);
	}
};
