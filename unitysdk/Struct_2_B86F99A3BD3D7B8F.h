#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8714C0BD8ACAF4F7.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_B86F99A3BD3D7B8F_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA0BCE0)
#define STRUCT_2_B86F99A3BD3D7B8F_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xA0BD60)
#define STRUCT_2_B86F99A3BD3D7B8F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA0BC90)
#define STRUCT_2_B86F99A3BD3D7B8F_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0BC80)
#define STRUCT_2_B86F99A3BD3D7B8F__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BC40)

inline static constexpr unsigned int Struct_2_B86F99A3BD3D7B8F_TypeDefinitionIndex = 28983;

struct alignas(2) Struct_2_B86F99A3BD3D7B8F
{
	// static const ::System::UInt16 Field_2_0 = 0xFFFF; // 0x0
	// static const ::System::Byte Field_2_1 = 0x1; // 0x0
	::System::UInt16 Field_2_2; // 0x10
	::System::UInt16 Field_2_3; // 0x12
	::System::Byte Field_2_4; // 0x14
	::System::Byte Field_2_5; // 0x15
	::System::UInt16 Field_2_6; // 0x16
	::Struct_2_8714C0BD8ACAF4F7 Field_2_7; // 0x18
	::Struct_2_8714C0BD8ACAF4F7 Field_2_8; // 0x1C
	::Struct_2_8714C0BD8ACAF4F7 Field_2_9; // 0x20
	::Struct_2_8714C0BD8ACAF4F7 Field_2_10; // 0x24

	::System::Void _ctor(::System::UInt16 a1, ::System::UInt16 a2, ::System::Byte a3, ::System::Boolean a4, ::Struct_2_8714C0BD8ACAF4F7 a5, ::Struct_2_8714C0BD8ACAF4F7 a6, ::Struct_2_8714C0BD8ACAF4F7 a7, ::Struct_2_8714C0BD8ACAF4F7 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::Byte, ::System::Boolean, ::Struct_2_8714C0BD8ACAF4F7, ::Struct_2_8714C0BD8ACAF4F7, ::Struct_2_8714C0BD8ACAF4F7, ::Struct_2_8714C0BD8ACAF4F7))((::PBYTE)hIl2Cpp + STRUCT_2_B86F99A3BD3D7B8F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B86F99A3BD3D7B8F_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B86F99A3BD3D7B8F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B86F99A3BD3D7B8F_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B86F99A3BD3D7B8F_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}
};
