#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_7.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_845.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_3148B1EB071D01CA_OFFSET UNITYSDK_OFFSET(0x15515C40)
#define CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x15515FD0)
#define CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x155162C0)
#define CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x155162D0)
#define CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15515FC0)
#define CLASS_1_D9FAA3DCCFE14DB8_114__CTOR_OFFSET UNITYSDK_OFFSET(0x15515C30)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_114_TypeDefinitionIndex = 14112;

class Class_1_D9FAA3DCCFE14DB8_114 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Struct_2_3E75877A2888D88A_845 Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x28
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_7>* Field_1_8; // 0x38
	::System::Byte Field_1_3; // 0x40
	::System::Boolean Field_1_2; // 0x41
	::System::Byte Field_1_4; // 0x42
	::System::Int32 Field_1_5; // 0x44

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_845 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_845, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_114__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_7>* Method_1_3148B1EB071D01CA()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_7>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_3148B1EB071D01CA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_114_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
