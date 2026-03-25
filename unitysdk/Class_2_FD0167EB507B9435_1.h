#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_1_OFFSET UNITYSDK_OFFSET(0x10506590)
#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_OFFSET UNITYSDK_OFFSET(0x105064F0)
#define CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET UNITYSDK_OFFSET(0x105064E0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_1_TypeDefinitionIndex = 52784;

class Class_2_FD0167EB507B9435_1 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET))(this, a1);
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
