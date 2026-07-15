#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_1_OFFSET UNITYSDK_OFFSET(0x16088220)
#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_OFFSET UNITYSDK_OFFSET(0x16088180)
#define CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16088170)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_1_TypeDefinitionIndex = 62076;

class Class_2_FD0167EB507B9435_1 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET))(this, a1);
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
