#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_4.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_869.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_3148B1EB071D01CA_OFFSET UNITYSDK_OFFSET(0x170FF3C0)
#define CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x170FF740)
#define CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x170FF890)
#define CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x170FF3B0)
#define CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x170FF2B0)
#define CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x170FF3A0)
#define CLASS_1_D9FAA3DCCFE14DB8_104__CTOR_OFFSET UNITYSDK_OFFSET(0x170FF2A0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_104_TypeDefinitionIndex = 14973;

class Class_1_D9FAA3DCCFE14DB8_104 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::Struct_2_3E75877A2888D88A_869 Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_4>* Field_1_5; // 0x28
	::System::String* Field_1_7; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Byte Field_1_4; // 0x39
	::System::Byte Field_1_3; // 0x3A
	::System::Int32 Field_1_6; // 0x3C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_869 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_869, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_104__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_4>* Method_1_3148B1EB071D01CA()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_3148B1EB071D01CA_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_104_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
