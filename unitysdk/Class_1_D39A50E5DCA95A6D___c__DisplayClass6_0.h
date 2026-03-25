#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EC46AA8769DF299;
namespace System { class String; }

#define CLASS_1_D39A50E5DCA95A6D___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164F1CF0)
#define CLASS_1_D39A50E5DCA95A6D___C__DISPLAYCLASS6_0__ISFILEEXISTBYCONTENTHASH_B__0_OFFSET UNITYSDK_OFFSET(0x164F2210)

inline static constexpr unsigned int Class_1_D39A50E5DCA95A6D___c__DisplayClass6_0_TypeDefinitionIndex = 32072;

class Class_1_D39A50E5DCA95A6D___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::String* contentHash; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsFileExistByContentHash_b__0(::Class_1_1EC46AA8769DF299* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1EC46AA8769DF299*))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D___C__DISPLAYCLASS6_0__ISFILEEXISTBYCONTENTHASH_B__0_OFFSET))(this, e);
	}
};
