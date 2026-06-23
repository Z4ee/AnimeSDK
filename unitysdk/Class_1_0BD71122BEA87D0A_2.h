#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_966.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0BD71122BEA87D0A_2_METHOD_1_3148B1EB071D01CA_OFFSET UNITYSDK_OFFSET(0x18EEA480)
#define CLASS_1_0BD71122BEA87D0A_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18EEA9F0)
#define CLASS_1_0BD71122BEA87D0A_2_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x18EEA900)
#define CLASS_1_0BD71122BEA87D0A_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18EEA8F0)
#define CLASS_1_0BD71122BEA87D0A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEA470)

inline static constexpr unsigned int Class_1_0BD71122BEA87D0A_2_TypeDefinitionIndex = 17293;

class Class_1_0BD71122BEA87D0A_2 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_966 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Field_1_5; // 0x28
	::System::Byte Field_1_3; // 0x30
	::System::Byte Field_1_4; // 0x31
	::System::Boolean Field_1_2; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_966 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_966, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Method_1_3148B1EB071D01CA()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_2_METHOD_1_3148B1EB071D01CA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_2_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BD71122BEA87D0A_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
