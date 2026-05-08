#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB1AE8AC43FE1B23.h"
#include "unitysdk/System/ValueType.h"

class Class_3_D6DA183EF60F02C8;
class Class_3_D902FC5F64432838;

#define STRUCT_2_B224F6F0F8E20F16_METHOD_2_8DDB36C5112676E3_OFFSET UNITYSDK_OFFSET(0x1358CCA0)
#define STRUCT_2_B224F6F0F8E20F16_METHOD_2_9022941B1221E64C_OFFSET UNITYSDK_OFFSET(0x1358CBF0)
#define STRUCT_2_B224F6F0F8E20F16_METHOD_2_91746F0A72A5969C_OFFSET UNITYSDK_OFFSET(0x1358D0E0)
#define STRUCT_2_B224F6F0F8E20F16_METHOD_2_9AD72B4AED59549B_OFFSET UNITYSDK_OFFSET(0x1358C6E0)
#define STRUCT_2_B224F6F0F8E20F16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1358C640)

inline static constexpr unsigned int Struct_2_B224F6F0F8E20F16_TypeDefinitionIndex = 37950;

struct alignas(8) Struct_2_B224F6F0F8E20F16
{
	// static const ::System::Int32 Field_2_13 = 0xCC; // 0x0
	::System::Double Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x1C
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Single Field_2_5; // 0x28
	::System::Single Field_2_6; // 0x2C
	::Enum_3_DB1AE8AC43FE1B23 Field_2_7; // 0x30
	::System::Boolean Field_2_8; // 0x34
	::System::Boolean Field_2_9; // 0x35
	::System::UInt32 Field_2_10; // 0x38
	::System::Single Field_2_11; // 0x3C
	::Class_3_D902FC5F64432838* Field_2_12; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B224F6F0F8E20F16__CCTOR_OFFSET))();
	}

	static ::System::Single Method_2_9AD72B4AED59549B(::Enum_3_DB1AE8AC43FE1B23 a1, ::System::Boolean a2, ::Class_3_D902FC5F64432838* a3)
	{
		return ((::System::Single(*)(::Enum_3_DB1AE8AC43FE1B23, ::System::Boolean, ::Class_3_D902FC5F64432838*))((::PBYTE)hIl2Cpp + STRUCT_2_B224F6F0F8E20F16_METHOD_2_9AD72B4AED59549B_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_DB1AE8AC43FE1B23 Method_2_9022941B1221E64C(::Enum_3_DB1AE8AC43FE1B23 a1, ::System::Boolean a2)
	{
		return ((::Enum_3_DB1AE8AC43FE1B23(*)(::Enum_3_DB1AE8AC43FE1B23, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_B224F6F0F8E20F16_METHOD_2_9022941B1221E64C_OFFSET))(a1, a2);
	}

	static ::System::Double Method_2_8DDB36C5112676E3(::Enum_3_DB1AE8AC43FE1B23 a1, ::System::Boolean a2, ::Class_3_D902FC5F64432838* a3)
	{
		return ((::System::Double(*)(::Enum_3_DB1AE8AC43FE1B23, ::System::Boolean, ::Class_3_D902FC5F64432838*))((::PBYTE)hIl2Cpp + STRUCT_2_B224F6F0F8E20F16_METHOD_2_8DDB36C5112676E3_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_DB1AE8AC43FE1B23 Method_2_91746F0A72A5969C(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_D902FC5F64432838* a2)
	{
		return ((::Enum_3_DB1AE8AC43FE1B23(*)(::Class_3_D6DA183EF60F02C8*, ::Class_3_D902FC5F64432838*))((::PBYTE)hIl2Cpp + STRUCT_2_B224F6F0F8E20F16_METHOD_2_91746F0A72A5969C_OFFSET))(a1, a2);
	}
};
