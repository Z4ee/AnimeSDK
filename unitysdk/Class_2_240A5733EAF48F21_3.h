#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_642419429F509B0B_2.h"

class Class_0_16E4307DCC419505_635;
namespace System { class String; }

#define CLASS_2_240A5733EAF48F21_3_METHOD_2_F6183287B1E622BB_OFFSET UNITYSDK_OFFSET(0x15FD06A0)
#define CLASS_2_240A5733EAF48F21_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15FD0930)
#define CLASS_2_240A5733EAF48F21_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD0690)

inline static constexpr unsigned int Class_2_240A5733EAF48F21_3_TypeDefinitionIndex = 76727;

class Class_2_240A5733EAF48F21_3 : public ::Class_1_642419429F509B0B_2
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_635* a1, ::Class_0_16E4307DCC419505_635* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_635*, ::Class_0_16E4307DCC419505_635*))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_F6183287B1E622BB()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_3_METHOD_2_F6183287B1E622BB_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_3_TOSTRING_OFFSET))(this);
	}
};
