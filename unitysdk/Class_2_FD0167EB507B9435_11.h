#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define CLASS_2_FD0167EB507B9435_11_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x99CD780)
#define CLASS_2_FD0167EB507B9435_11_UPDATE_OFFSET UNITYSDK_OFFSET(0x99CD820)
#define CLASS_2_FD0167EB507B9435_11__CTOR_OFFSET UNITYSDK_OFFSET(0x99CD770)
#define CLASS_2_FD0167EB507B9435_11___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x99CD870)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_11_TypeDefinitionIndex = 59867;

class Class_2_FD0167EB507B9435_11 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_11__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_11_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_11_UPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_11___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
