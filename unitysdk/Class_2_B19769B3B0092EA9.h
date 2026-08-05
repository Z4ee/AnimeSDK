#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_68.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_115.h"
#include "unitysdk/System/DateTime.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_B19769B3B0092EA9_METHOD_2_545BC4E954F88B68_OFFSET UNITYSDK_OFFSET(0x18F8B6E0)
#define CLASS_2_B19769B3B0092EA9_METHOD_2_F3FE4B1C21DCE6C1_OFFSET UNITYSDK_OFFSET(0x18F8B8F0)
#define CLASS_2_B19769B3B0092EA9__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8B6D0)

inline static constexpr unsigned int Class_2_B19769B3B0092EA9_TypeDefinitionIndex = 9870;

class Class_2_B19769B3B0092EA9 : public ::Class_1_EBCA2A4357C4C8BF_68
{
public:
	::System::DateTime Field_2_0; // 0x58
	::System::DateTime Field_2_1; // 0x60

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_115 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_115, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_B19769B3B0092EA9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::DateTime Method_2_545BC4E954F88B68(::System::String* a1)
	{
		return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B19769B3B0092EA9_METHOD_2_545BC4E954F88B68_OFFSET))(a1);
	}

	::System::Void Method_2_F3FE4B1C21DCE6C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19769B3B0092EA9_METHOD_2_F3FE4B1C21DCE6C1_OFFSET))(this);
	}
};
