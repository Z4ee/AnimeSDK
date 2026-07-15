#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define CLASS_2_FD0167EB507B9435_12_UPDATE_OFFSET UNITYSDK_OFFSET(0x181ACBC0)
#define CLASS_2_FD0167EB507B9435_12__CTOR_OFFSET UNITYSDK_OFFSET(0x181ACBB0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_12_TypeDefinitionIndex = 62098;

class Class_2_FD0167EB507B9435_12 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12_UPDATE_OFFSET))(this, a1);
	}
};
