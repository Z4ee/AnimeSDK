#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define CLASS_2_FD0167EB507B9435_2_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x14E77100)
#define CLASS_2_FD0167EB507B9435_2_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x14E77060)
#define CLASS_2_FD0167EB507B9435_2_UPDATE_OFFSET UNITYSDK_OFFSET(0x14E77010)
#define CLASS_2_FD0167EB507B9435_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14E77000)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_2_TypeDefinitionIndex = 62084;

class Class_2_FD0167EB507B9435_2 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_2_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_2_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_2_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}
};
