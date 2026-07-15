#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define CLASS_2_FD0167EB507B9435_6_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x16F526E0)
#define CLASS_2_FD0167EB507B9435_6_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x16F52640)
#define CLASS_2_FD0167EB507B9435_6_UPDATE_OFFSET UNITYSDK_OFFSET(0x16F525F0)
#define CLASS_2_FD0167EB507B9435_6__CTOR_OFFSET UNITYSDK_OFFSET(0x16F525E0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_6_TypeDefinitionIndex = 62091;

class Class_2_FD0167EB507B9435_6 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}
};
