#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_A64ECA22F7120903_DISPOSE_OFFSET UNITYSDK_OFFSET(0x47CDB0)
#define STRUCT_2_A64ECA22F7120903__CTOR_OFFSET UNITYSDK_OFFSET(0x47CDA0)

inline static constexpr unsigned int Struct_2_A64ECA22F7120903_TypeDefinitionIndex = 43009;

struct alignas(1) Struct_2_A64ECA22F7120903
{
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A64ECA22F7120903_TypeDefinitionIndex)->GetStaticField(0xBE20);
	}

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A64ECA22F7120903__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A64ECA22F7120903_DISPOSE_OFFSET))(this);
	}
};
