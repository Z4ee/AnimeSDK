#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_1_24B84A23937930DB;

#define CLASS_1_3833970CC4FA195E___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CD630)
#define CLASS_1_3833970CC4FA195E___C__DISPLAYCLASS18_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET UNITYSDK_OFFSET(0x1A4D00E0)

inline static constexpr unsigned int Class_1_3833970CC4FA195E___c__DisplayClass18_0_TypeDefinitionIndex = 40126;

class Class_1_3833970CC4FA195E___c__DisplayClass18_0 : public ::System::Object
{
public:
	::RPG::Client::ByteHash16 hash; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3833970CC4FA195E___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsFileExistByShortPathHash_b__0(::Class_1_24B84A23937930DB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24B84A23937930DB*))((::PBYTE)hIl2Cpp + CLASS_1_3833970CC4FA195E___C__DISPLAYCLASS18_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET))(this, a1);
	}
};
