#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A52AD9B5F892205.h"

class Class_2_8C608625ABC8C4FA_1;
class Class_4_D581BED103406713;

#define CLASS_2_56255087E4DCEF5F_3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17DBC5A0)
#define CLASS_2_56255087E4DCEF5F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBC590)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_3_TypeDefinitionIndex = 34311;

class Class_2_56255087E4DCEF5F_3 : public ::Class_1_7A52AD9B5F892205
{
public:
	::Class_4_D581BED103406713* Field_2_0; // 0x18
	::Class_2_8C608625ABC8C4FA_1* Field_2_1; // 0x20

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_3_INITIALIZE_OFFSET))(this);
	}
};
