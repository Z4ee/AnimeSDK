#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define CLASS_2_FD0167EB507B9435_UPDATE_OFFSET UNITYSDK_OFFSET(0x161F4580)
#define CLASS_2_FD0167EB507B9435__CTOR_OFFSET UNITYSDK_OFFSET(0x161F4570)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_TypeDefinitionIndex = 62074;

class Class_2_FD0167EB507B9435 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_UPDATE_OFFSET))(this, a1);
	}
};
