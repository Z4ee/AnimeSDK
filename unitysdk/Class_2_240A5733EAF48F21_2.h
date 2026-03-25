#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_642419429F509B0B_1.h"

class Class_0_16E4307DCC419505_499;
namespace System { class String; }

#define CLASS_2_240A5733EAF48F21_2_METHOD_2_F6183287B1E622BB_OFFSET UNITYSDK_OFFSET(0x10AB8B10)
#define CLASS_2_240A5733EAF48F21_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10AB8CE0)
#define CLASS_2_240A5733EAF48F21_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB8B00)
#define CLASS_2_240A5733EAF48F21_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10AB8D80)

inline static constexpr unsigned int Class_2_240A5733EAF48F21_2_TypeDefinitionIndex = 64466;

class Class_2_240A5733EAF48F21_2 : public ::Class_1_642419429F509B0B_1
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_499* a1, ::Class_0_16E4307DCC419505_499* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_499*, ::Class_0_16E4307DCC419505_499*))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_F6183287B1E622BB()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_2_METHOD_2_F6183287B1E622BB_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_2_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
