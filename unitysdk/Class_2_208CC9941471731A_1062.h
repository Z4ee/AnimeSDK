#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_388.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_907.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_1062_METHOD_2_2FE14E9DDA8EF9CA_OFFSET UNITYSDK_OFFSET(0x1856F690)
#define CLASS_2_208CC9941471731A_1062__CTOR_OFFSET UNITYSDK_OFFSET(0x1856F6A0)

inline static constexpr unsigned int Class_2_208CC9941471731A_1062_TypeDefinitionIndex = 16242;

class Class_2_208CC9941471731A_1062 : public ::Class_1_5DA2E7556103D5A3_388
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_907 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_907, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_1062__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2FE14E9DDA8EF9CA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_1062_METHOD_2_2FE14E9DDA8EF9CA_OFFSET))(this);
	}
};
