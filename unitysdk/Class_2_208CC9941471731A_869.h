#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6C71F0705B90B641.h"
#include "unitysdk/Struct_2_0190A9212AD9E688_8.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_869_METHOD_2_2FE14E9DDA8EF9CA_OFFSET UNITYSDK_OFFSET(0x16073130)
#define CLASS_2_208CC9941471731A_869__CTOR_OFFSET UNITYSDK_OFFSET(0x16073120)

inline static constexpr unsigned int Class_2_208CC9941471731A_869_TypeDefinitionIndex = 17935;

class Class_2_208CC9941471731A_869 : public ::Class_1_6C71F0705B90B641
{
public:
	::System::Void _ctor(::Struct_2_0190A9212AD9E688_8 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0190A9212AD9E688_8, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_869__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2FE14E9DDA8EF9CA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_869_METHOD_2_2FE14E9DDA8EF9CA_OFFSET))(this);
	}
};
