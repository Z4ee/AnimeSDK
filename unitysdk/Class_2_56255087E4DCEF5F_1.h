#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0099E9B9FA2C3C13.h"

class Class_2_099B78418029B3B1_1;
class Class_4_D581BED103406713;

#define CLASS_2_56255087E4DCEF5F_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166C51D0)
#define CLASS_2_56255087E4DCEF5F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x166C4E90)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_1_TypeDefinitionIndex = 28585;

class Class_2_56255087E4DCEF5F_1 : public ::Class_1_0099E9B9FA2C3C13
{
public:
	::Class_2_099B78418029B3B1_1* Field_2_1; // 0x18
	::Class_4_D581BED103406713* Field_2_0; // 0x20

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_099B78418029B3B1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_1_INITIALIZE_OFFSET))(this);
	}
};
