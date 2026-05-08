#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6C71F0705B90B641.h"
#include "unitysdk/Struct_2_0190A9212AD9E688_12.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_454_METHOD_2_2FE14E9DDA8EF9CA_OFFSET UNITYSDK_OFFSET(0x164EC9F0)
#define CLASS_2_208CC9941471731A_454__CTOR_OFFSET UNITYSDK_OFFSET(0x164EC9E0)

inline static constexpr unsigned int Class_2_208CC9941471731A_454_TypeDefinitionIndex = 13506;

class Class_2_208CC9941471731A_454 : public ::Class_1_6C71F0705B90B641
{
public:
	::System::Void _ctor(::Struct_2_0190A9212AD9E688_12 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0190A9212AD9E688_12, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_454__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2FE14E9DDA8EF9CA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_454_METHOD_2_2FE14E9DDA8EF9CA_OFFSET))(this);
	}
};
