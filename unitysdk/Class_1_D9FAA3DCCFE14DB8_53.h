#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_662.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x15317F10)
#define CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x15318350)
#define CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x153184B0)
#define CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15318490)
#define CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x15318260)
#define CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x153184A0)
#define CLASS_1_D9FAA3DCCFE14DB8_53__CTOR_OFFSET UNITYSDK_OFFSET(0x15317F00)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_53_TypeDefinitionIndex = 14503;

class Class_1_D9FAA3DCCFE14DB8_53 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x10
	::Struct_2_3E75877A2888D88A_662 Field_1_3; // 0x18
	::System::String* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Field_1_6; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Byte Field_1_0; // 0x3C
	::System::Boolean Field_1_1; // 0x3D
	::System::Byte Field_1_7; // 0x3E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_662 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_662, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_53_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
