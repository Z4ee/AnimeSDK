#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_1_OFFSET UNITYSDK_OFFSET(0x178E93D0)
#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_OFFSET UNITYSDK_OFFSET(0x178E9330)
#define CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET UNITYSDK_OFFSET(0x178E9320)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_1_TypeDefinitionIndex = 65060;

class Class_2_FD0167EB507B9435_1 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_1BDAE377EE98BF34()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_OFFSET))(this);
	}

	::System::Int64 Method_2_1BDAE377EE98BF34_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_1_OFFSET))(this);
	}
};
