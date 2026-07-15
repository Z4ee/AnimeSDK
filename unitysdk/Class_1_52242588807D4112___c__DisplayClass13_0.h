#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_1_CB8B1EE6DC0D2B5B;

#define CLASS_1_52242588807D4112___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1C0E0)
#define CLASS_1_52242588807D4112___C__DISPLAYCLASS13_0__GETBLOCKITEMBYNAMEORHASH_B__0_OFFSET UNITYSDK_OFFSET(0x18C1E1D0)

inline static constexpr unsigned int Class_1_52242588807D4112___c__DisplayClass13_0_TypeDefinitionIndex = 39255;

class Class_1_52242588807D4112___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::Client::ByteHash16 hash; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52242588807D4112___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetBlockItemByNameOrHash_b__0(::Class_1_CB8B1EE6DC0D2B5B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CB8B1EE6DC0D2B5B*))((::PBYTE)hIl2Cpp + CLASS_1_52242588807D4112___C__DISPLAYCLASS13_0__GETBLOCKITEMBYNAMEORHASH_B__0_OFFSET))(this, a1);
	}
};
