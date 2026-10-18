#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_E591DF54310AABF5_1;

#define CLASS_2_FD0167EB507B9435_13_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x13A3F280)
#define CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET UNITYSDK_OFFSET(0x13A3F230)
#define CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET UNITYSDK_OFFSET(0x13A3F220)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_13_TypeDefinitionIndex = 65029;

class Class_2_FD0167EB507B9435_13 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13_METHOD_2_4484591CA1060976_OFFSET))(this);
	}
};
