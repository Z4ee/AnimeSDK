#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define STRUCT_2_AD184D39E2184BD6_METHOD_2_5B2908CBCA8F4363_OFFSET UNITYSDK_OFFSET(0x20DC650)
#define STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x793A0)
#define STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_4_OFFSET UNITYSDK_OFFSET(0x68F0)
#define STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_5_OFFSET UNITYSDK_OFFSET(0x6900)
#define STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xD250)
#define STRUCT_2_AD184D39E2184BD6__CTOR_OFFSET UNITYSDK_OFFSET(0x20DC620)

inline static constexpr unsigned int Struct_2_AD184D39E2184BD6_TypeDefinitionIndex = 6404;

struct alignas(8) Struct_2_AD184D39E2184BD6
{
	::System::Int32 Field_2_4; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Int32 Field_2_5; // 0x20
	::System::Int32 Field_2_6; // 0x24
	::System::RuntimeTypeHandle Field_2_0; // 0x28

	::System::Void _ctor(::System::RuntimeTypeHandle a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Type* Method_2_5B2908CBCA8F4363()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6_METHOD_2_5B2908CBCA8F4363_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_4_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD184D39E2184BD6_METHOD_2_C74CF020AA42ED85_5_OFFSET))(this);
	}
};
