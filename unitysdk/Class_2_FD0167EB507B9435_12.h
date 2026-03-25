#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define CLASS_2_FD0167EB507B9435_12_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x11966A20)
#define CLASS_2_FD0167EB507B9435_12_UPDATE_OFFSET UNITYSDK_OFFSET(0x11966AC0)
#define CLASS_2_FD0167EB507B9435_12__CTOR_OFFSET UNITYSDK_OFFSET(0x11966A10)
#define CLASS_2_FD0167EB507B9435_12___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x11966B10)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_12_TypeDefinitionIndex = 52805;

class Class_2_FD0167EB507B9435_12 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::Void Update(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12_UPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_F0A446EC7AE7E87D_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
