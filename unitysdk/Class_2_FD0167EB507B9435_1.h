#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_E591DF54310AABF5_1;

#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_1_OFFSET UNITYSDK_OFFSET(0xCF23C10)
#define CLASS_2_FD0167EB507B9435_1_METHOD_2_1BDAE377EE98BF34_OFFSET UNITYSDK_OFFSET(0xCF23B70)
#define CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCF23B60)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_1_TypeDefinitionIndex = 65000;

class Class_2_FD0167EB507B9435_1 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_1__CTOR_OFFSET))(this, a1);
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
