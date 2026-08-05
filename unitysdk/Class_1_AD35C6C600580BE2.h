#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD35C6C600580BE2_Enum_3_8D7E95A3FBF380E0.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_21.h"
#include "unitysdk/Enum_3_912CABDA75E684D1.h"
#include "unitysdk/System/Object.h"

class Class_2_AF5BA1C65F12F4B1;
class Class_2_E46C7200C98EA660;

#define CLASS_1_AD35C6C600580BE2_METHOD_1_5C010B129EB0B02F_OFFSET UNITYSDK_OFFSET(0x167BD160)
#define CLASS_1_AD35C6C600580BE2_METHOD_1_723CE2244A2EFF4D_OFFSET UNITYSDK_OFFSET(0x167BDA00)
#define CLASS_1_AD35C6C600580BE2_METHOD_1_BABF40084C97A8D9_OFFSET UNITYSDK_OFFSET(0x167BD330)
#define CLASS_1_AD35C6C600580BE2_METHOD_1_EB1A9E4C800E7E10_OFFSET UNITYSDK_OFFSET(0x167BD6D0)
#define CLASS_1_AD35C6C600580BE2__CTOR_OFFSET UNITYSDK_OFFSET(0x167BD150)

inline static constexpr unsigned int Class_1_AD35C6C600580BE2_TypeDefinitionIndex = 61070;

class Class_1_AD35C6C600580BE2 : public ::System::Object
{
public:
	::Class_2_E46C7200C98EA660* Field_1_10; // 0x10
	::System::Int64 Field_1_7; // 0x18
	::System::Int64 Field_1_14; // 0x20
	::Class_1_AD35C6C600580BE2_Enum_3_8D7E95A3FBF380E0 Field_1_2; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::Int64 Field_1_12; // 0x30
	::System::Int32 Field_1_19; // 0x38
	::System::Int32 Field_1_1; // 0x3C
	::System::Boolean Field_1_8; // 0x40
	::System::Boolean Field_1_18; // 0x41
	::System::Boolean Field_1_4; // 0x42
	::System::Boolean Field_1_5; // 0x43
	::System::Boolean Field_1_6; // 0x44
	::System::Boolean Field_1_9; // 0x45
	::System::Boolean Field_1_15; // 0x46
	::System::Boolean Field_1_13; // 0x47
	::Enum_3_912CABDA75E684D1 Field_1_11; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD35C6C600580BE2__CTOR_OFFSET))(this);
	}

	static ::Enum_3_4608E37A1B3D374A_21 Method_1_5C010B129EB0B02F(::System::UInt32 a1)
	{
		return ((::Enum_3_4608E37A1B3D374A_21(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AD35C6C600580BE2_METHOD_1_5C010B129EB0B02F_OFFSET))(a1);
	}

	static ::System::Void Method_1_BABF40084C97A8D9(::Class_1_AD35C6C600580BE2* a1, ::Class_2_AF5BA1C65F12F4B1* a2)
	{
		return ((::System::Void(*)(::Class_1_AD35C6C600580BE2*, ::Class_2_AF5BA1C65F12F4B1*))((::PBYTE)hIl2Cpp + CLASS_1_AD35C6C600580BE2_METHOD_1_BABF40084C97A8D9_OFFSET))(a1, a2);
	}

	static ::Class_1_AD35C6C600580BE2* Method_1_EB1A9E4C800E7E10(::Class_2_AF5BA1C65F12F4B1* a1)
	{
		return ((::Class_1_AD35C6C600580BE2*(*)(::Class_2_AF5BA1C65F12F4B1*))((::PBYTE)hIl2Cpp + CLASS_1_AD35C6C600580BE2_METHOD_1_EB1A9E4C800E7E10_OFFSET))(a1);
	}

	static ::Class_1_AD35C6C600580BE2* Method_1_723CE2244A2EFF4D(::Enum_3_912CABDA75E684D1 a1, ::Class_2_AF5BA1C65F12F4B1* a2)
	{
		return ((::Class_1_AD35C6C600580BE2*(*)(::Enum_3_912CABDA75E684D1, ::Class_2_AF5BA1C65F12F4B1*))((::PBYTE)hIl2Cpp + CLASS_1_AD35C6C600580BE2_METHOD_1_723CE2244A2EFF4D_OFFSET))(a1, a2);
	}
};
