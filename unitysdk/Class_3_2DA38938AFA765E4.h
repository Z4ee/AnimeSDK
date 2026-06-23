#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_2DA38938AFA765E4_METHOD_3_286D0F6CBE978F4F_OFFSET UNITYSDK_OFFSET(0xEC06ED0)
#define CLASS_3_2DA38938AFA765E4_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xEC06C10)
#define CLASS_3_2DA38938AFA765E4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEC073B0)
#define CLASS_3_2DA38938AFA765E4__CTOR_OFFSET UNITYSDK_OFFSET(0xEC071B0)

inline static constexpr unsigned int Class_3_2DA38938AFA765E4_TypeDefinitionIndex = 70413;

class Class_3_2DA38938AFA765E4 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_CF43FA1E89397A1C* Field_3_6; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_5; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_3; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_3_4; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DA38938AFA765E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DA38938AFA765E4_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_286D0F6CBE978F4F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_2DA38938AFA765E4_METHOD_3_286D0F6CBE978F4F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DA38938AFA765E4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
