#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_1C28E0BB4E6733BA_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x80E470)
#define STRUCT_2_1C28E0BB4E6733BA_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x80E460)
#define STRUCT_2_1C28E0BB4E6733BA__CTOR_OFFSET UNITYSDK_OFFSET(0x80E430)

inline static constexpr unsigned int Struct_2_1C28E0BB4E6733BA_TypeDefinitionIndex = 49778;

struct alignas(8) Struct_2_1C28E0BB4E6733BA
{
	::Struct_2_A47ACAABA9AAFE92 Field_2_2; // 0x10
	::Struct_2_A47ACAABA9AAFE92 Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x40

	::System::Void _ctor(::Struct_2_A47ACAABA9AAFE92& a1, ::Struct_2_A47ACAABA9AAFE92& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A47ACAABA9AAFE92&, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + STRUCT_2_1C28E0BB4E6733BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C28E0BB4E6733BA_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1C28E0BB4E6733BA_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
