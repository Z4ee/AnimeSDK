#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_642419429F509B0B_2.h"

class Class_0_16E4307DCC419505_671;
namespace System { class String; }

#define CLASS_2_240A5733EAF48F21_2_METHOD_2_F6183287B1E622BB_OFFSET UNITYSDK_OFFSET(0x158C6AA0)
#define CLASS_2_240A5733EAF48F21_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x158C6D30)
#define CLASS_2_240A5733EAF48F21_2__CTOR_OFFSET UNITYSDK_OFFSET(0x158C6A90)

inline static constexpr unsigned int Class_2_240A5733EAF48F21_2_TypeDefinitionIndex = 80767;

class Class_2_240A5733EAF48F21_2 : public ::Class_1_642419429F509B0B_2
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_671* a1, ::Class_0_16E4307DCC419505_671* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_671*, ::Class_0_16E4307DCC419505_671*))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_F6183287B1E622BB()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_2_METHOD_2_F6183287B1E622BB_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_2_TOSTRING_OFFSET))(this);
	}
};
