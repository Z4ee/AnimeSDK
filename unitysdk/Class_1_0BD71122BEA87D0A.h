#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_1.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_12.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0BD71122BEA87D0A_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x13F99DE0)
#define CLASS_1_0BD71122BEA87D0A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13F9A230)
#define CLASS_1_0BD71122BEA87D0A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x13F9A130)
#define CLASS_1_0BD71122BEA87D0A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13F9A220)
#define CLASS_1_0BD71122BEA87D0A__CTOR_OFFSET UNITYSDK_OFFSET(0x13F99DD0)

inline static constexpr unsigned int Class_1_0BD71122BEA87D0A_TypeDefinitionIndex = 11348;

class Class_1_0BD71122BEA87D0A : public ::System::Object
{
public:
	::Struct_2_58DF5669875F2C66_12 Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_1>* Field_1_6; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Byte Field_1_0; // 0x31
	::System::Byte Field_1_7; // 0x32

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_12 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_12, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_1>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
