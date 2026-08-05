#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BB4BCB31282727A3.h"

namespace System { class String; }

#define CLASS_2_F41A1EA743EF4430_1_METHOD_2_322DA9757BDA32C0_OFFSET UNITYSDK_OFFSET(0x12F5BB80)
#define CLASS_2_F41A1EA743EF4430_1_METHOD_2_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x12F5BB10)
#define CLASS_2_F41A1EA743EF4430_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12F5BB00)
#define CLASS_2_F41A1EA743EF4430_1_METHOD_2_D1289BD4E2C7FF87_OFFSET UNITYSDK_OFFSET(0x12F5BD80)
#define CLASS_2_F41A1EA743EF4430_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12F5BF90)

inline static constexpr unsigned int Class_2_F41A1EA743EF4430_1_TypeDefinitionIndex = 64563;

class Class_2_F41A1EA743EF4430_1 : public ::Class_1_BB4BCB31282727A3
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_1__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_C6E14CE377D03CE0(::System::String*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_1_METHOD_2_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_322DA9757BDA32C0(::System::String*& a1)
	{
		return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_1_METHOD_2_322DA9757BDA32C0_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_D1289BD4E2C7FF87(::System::String*& a1)
	{
		return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_1_METHOD_2_D1289BD4E2C7FF87_OFFSET))(a1);
	}
};
