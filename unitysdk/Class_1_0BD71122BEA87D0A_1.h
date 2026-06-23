#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_10.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_803.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_3148B1EB071D01CA_OFFSET UNITYSDK_OFFSET(0x1BAB5A80)
#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1BAB5EF0)
#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1BAB5E00)
#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BAB5F00)
#define CLASS_1_0BD71122BEA87D0A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB5A70)

inline static constexpr unsigned int Class_1_0BD71122BEA87D0A_1_TypeDefinitionIndex = 15024;

class Class_1_0BD71122BEA87D0A_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x10
	::Struct_2_3E75877A2888D88A_803 Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_10>* Field_1_5; // 0x28
	::System::Byte Field_1_3; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Byte Field_1_4; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_803 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_803, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_10>* Method_1_3148B1EB071D01CA()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_10>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_3148B1EB071D01CA_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
