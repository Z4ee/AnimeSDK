#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_152.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_3148B1EB071D01CA_OFFSET UNITYSDK_OFFSET(0x18822740)
#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18822730)
#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x18822AD0)
#define CLASS_1_0BD71122BEA87D0A_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18822AC0)
#define CLASS_1_0BD71122BEA87D0A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18822720)

inline static constexpr unsigned int Class_1_0BD71122BEA87D0A_1_TypeDefinitionIndex = 15196;

class Class_1_0BD71122BEA87D0A_1 : public ::System::Object
{
public:
	::Struct_2_58DF5669875F2C66_152 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Field_1_5; // 0x28
	::System::Byte Field_1_4; // 0x30
	::System::Byte Field_1_3; // 0x31
	::System::Boolean Field_1_2; // 0x32

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_152 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_152, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Method_1_3148B1EB071D01CA()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_3148B1EB071D01CA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
