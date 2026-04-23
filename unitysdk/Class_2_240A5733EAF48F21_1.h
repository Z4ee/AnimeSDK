#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_642419429F509B0B_1.h"

class Class_0_16E4307DCC419505_578;
namespace System { class String; }

#define CLASS_2_240A5733EAF48F21_1_METHOD_2_480F833A21D9E432_OFFSET UNITYSDK_OFFSET(0x98C0CE0)
#define CLASS_2_240A5733EAF48F21_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98C0E90)
#define CLASS_2_240A5733EAF48F21_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98C0CD0)
#define CLASS_2_240A5733EAF48F21_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98C0F30)

inline static constexpr unsigned int Class_2_240A5733EAF48F21_1_TypeDefinitionIndex = 72511;

class Class_2_240A5733EAF48F21_1 : public ::Class_1_642419429F509B0B_1
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_578* a1, ::Class_0_16E4307DCC419505_578* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_578*, ::Class_0_16E4307DCC419505_578*))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_480F833A21D9E432()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_1_METHOD_2_480F833A21D9E432_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_1_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
