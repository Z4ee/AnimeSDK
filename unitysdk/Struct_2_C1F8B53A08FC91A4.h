#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DestructState.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C1F8B53A08FC91A4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x3A02380)
#define STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x3A024E0)
#define STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3A02460)
#define STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x3A02470)
#define STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x3A023F0)

inline static constexpr unsigned int Struct_2_C1F8B53A08FC91A4_TypeDefinitionIndex = 40853;

struct alignas(4) Struct_2_C1F8B53A08FC91A4
{
	::RPG::Client::LittleGame::FiveDim::DestructState Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C1F8B53A08FC91A4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C1F8B53A08FC91A4_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
