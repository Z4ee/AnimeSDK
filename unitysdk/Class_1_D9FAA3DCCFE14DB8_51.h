#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_14.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_575.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_3148B1EB071D01CA_OFFSET UNITYSDK_OFFSET(0x1A656FC0)
#define CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1A656C00)
#define CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A656BF0)
#define CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A657430)
#define CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A656BE0)
#define CLASS_1_D9FAA3DCCFE14DB8_51__CTOR_OFFSET UNITYSDK_OFFSET(0x1A656BD0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_51_TypeDefinitionIndex = 16456;

class Class_1_D9FAA3DCCFE14DB8_51 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_575 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_14>* Field_1_8; // 0x30
	::System::String* Field_1_7; // 0x38
	::System::Int32 Field_1_5; // 0x40
	::System::Boolean Field_1_2; // 0x44
	::System::Byte Field_1_3; // 0x45
	::System::Byte Field_1_4; // 0x46

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_575 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_575, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_14>* Method_1_3148B1EB071D01CA()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_14>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_3148B1EB071D01CA_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_51_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
