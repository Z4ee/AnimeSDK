#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define CLASS_2_FD0167EB507B9435_10_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x1675D620)
#define CLASS_2_FD0167EB507B9435_10_UPDATE_OFFSET UNITYSDK_OFFSET(0x1675D6C0)
#define CLASS_2_FD0167EB507B9435_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1675D610)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_10_TypeDefinitionIndex = 65080;

class Class_2_FD0167EB507B9435_10 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_10__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_10_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_10_UPDATE_OFFSET))(this, a1);
	}
};
