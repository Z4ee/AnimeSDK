#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_2.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_808.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_1_3973868D9FD280FD_METHOD_1_1405FD653CC39C65_OFFSET UNITYSDK_OFFSET(0x164EB820)
#define CLASS_1_3973868D9FD280FD_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x164EBB40)
#define CLASS_1_3973868D9FD280FD_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x164EBA40)
#define CLASS_1_3973868D9FD280FD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x164EBB30)
#define CLASS_1_3973868D9FD280FD__CTOR_OFFSET UNITYSDK_OFFSET(0x164EB810)

inline static constexpr unsigned int Class_1_3973868D9FD280FD_TypeDefinitionIndex = 18386;

class Class_1_3973868D9FD280FD : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_808 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_2> Field_1_5; // 0x28
	::System::Byte Field_1_4; // 0x40
	::System::Byte Field_1_3; // 0x41
	::System::Boolean Field_1_2; // 0x42

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_808 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_808, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_3973868D9FD280FD__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_3659D99D9E0DCBB9_2 Method_1_1405FD653CC39C65()
	{
		return ((::Struct_2_3659D99D9E0DCBB9_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3973868D9FD280FD_METHOD_1_1405FD653CC39C65_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3973868D9FD280FD_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3973868D9FD280FD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3973868D9FD280FD_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
