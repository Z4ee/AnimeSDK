#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define CLASS_2_FD0167EB507B9435_4_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x899BCE0)
#define CLASS_2_FD0167EB507B9435_4__CTOR_OFFSET UNITYSDK_OFFSET(0x899BCD0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_4_TypeDefinitionIndex = 52793;

class Class_2_FD0167EB507B9435_4 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_4__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_4_METHOD_2_4484591CA1060976_OFFSET))(this);
	}
};
