#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define CLASS_2_FD0167EB507B9435_15_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0xA797D80)
#define CLASS_2_FD0167EB507B9435_15_UPDATE_OFFSET UNITYSDK_OFFSET(0xA797D30)
#define CLASS_2_FD0167EB507B9435_15__CTOR_OFFSET UNITYSDK_OFFSET(0xA797D20)
#define CLASS_2_FD0167EB507B9435_15___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xA797E20)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_15_TypeDefinitionIndex = 59880;

class Class_2_FD0167EB507B9435_15 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_15__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_15_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_15_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_15___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
