#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET UNITYSDK_OFFSET(0x10C2E820)
#define CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET UNITYSDK_OFFSET(0x10C2E810)
#define CLASS_2_FD0167EB507B9435_13___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x10C2E870)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_13_TypeDefinitionIndex = 52806;

class Class_2_FD0167EB507B9435_13 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_F0A446EC7AE7E87D_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
