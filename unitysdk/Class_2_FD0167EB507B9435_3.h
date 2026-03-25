#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0xEA79390)
#define CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0xEA792F0)
#define CLASS_2_FD0167EB507B9435_3__CTOR_OFFSET UNITYSDK_OFFSET(0xEA792E0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_3_TypeDefinitionIndex = 52792;

class Class_2_FD0167EB507B9435_3 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_3__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}
};
