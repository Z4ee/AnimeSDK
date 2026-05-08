#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4A1B73F7977AD519.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_E192BA5BC71A3729_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define STRUCT_2_E192BA5BC71A3729_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define STRUCT_2_E192BA5BC71A3729_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99B6B0)

inline static constexpr unsigned int Struct_2_E192BA5BC71A3729_TypeDefinitionIndex = 83976;

struct alignas(8) Struct_2_E192BA5BC71A3729
{
	::System::Collections::Generic::List_1<::Struct_2_4A1B73F7977AD519>* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E192BA5BC71A3729_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_E192BA5BC71A3729_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E192BA5BC71A3729_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
