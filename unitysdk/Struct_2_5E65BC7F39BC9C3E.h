#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5E65BC7F39BC9C3E_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x12756420)
#define STRUCT_2_5E65BC7F39BC9C3E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7B3990)
#define STRUCT_2_5E65BC7F39BC9C3E__CTOR_OFFSET UNITYSDK_OFFSET(0x7B3970)

inline static constexpr unsigned int Struct_2_5E65BC7F39BC9C3E_TypeDefinitionIndex = 75424;

struct alignas(8) Struct_2_5E65BC7F39BC9C3E
{
	::Struct_2_FA5F50563E60AFBA Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + STRUCT_2_5E65BC7F39BC9C3E__CTOR_OFFSET))(this, a1);
	}

	static ::Struct_2_5E65BC7F39BC9C3E Method_2_1F8314262457963A()
	{
		return ((::Struct_2_5E65BC7F39BC9C3E(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5E65BC7F39BC9C3E_METHOD_2_1F8314262457963A_OFFSET))();
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5E65BC7F39BC9C3E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
