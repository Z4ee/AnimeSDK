#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BBCABD6DD9BDFC49_GET_NAME_OFFSET UNITYSDK_OFFSET(0x246290)
#define STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_2C1229D2A7C70CDB_1_OFFSET UNITYSDK_OFFSET(0x69BA70)
#define STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_2C1229D2A7C70CDB_OFFSET UNITYSDK_OFFSET(0x69BA40)
#define STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_433F7B5D486626B6_OFFSET UNITYSDK_OFFSET(0x69BA50)
#define STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x69B960)
#define STRUCT_2_BBCABD6DD9BDFC49_RESET_OFFSET UNITYSDK_OFFSET(0x69B880)

inline static constexpr unsigned int Struct_2_BBCABD6DD9BDFC49_TypeDefinitionIndex = 79368;

struct alignas(8) Struct_2_BBCABD6DD9BDFC49
{
	::Foundation::Unreal::FName Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::Struct_2_4355D25F091C65D0 Field_2_2; // 0x20

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBCABD6DD9BDFC49_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STRUCT_2_BBCABD6DD9BDFC49_RESET_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Single Method_2_2C1229D2A7C70CDB(::System::Double a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_2C1229D2A7C70CDB_OFFSET))(this, a1);
	}

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_433F7B5D486626B6()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_433F7B5D486626B6_OFFSET))(this);
	}
	*/

	::System::Single Method_2_2C1229D2A7C70CDB_1(::System::Double a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_BBCABD6DD9BDFC49_METHOD_2_2C1229D2A7C70CDB_1_OFFSET))(this, a1);
	}
};
