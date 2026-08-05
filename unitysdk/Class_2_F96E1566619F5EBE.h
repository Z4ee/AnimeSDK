#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Class_2_F96E1566619F5EBE_Enum_3_A24AD9071539656F.h"

class Class_2_14F10A7D5A4F2DD7;
class Class_3_52A208B0FF6B9A63;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_F96E1566619F5EBE_METHOD_2_331687ECD06C359A_OFFSET UNITYSDK_OFFSET(0x102D2A70)
#define CLASS_2_F96E1566619F5EBE_METHOD_2_504E0203274C6958_OFFSET UNITYSDK_OFFSET(0x102D2F90)
#define CLASS_2_F96E1566619F5EBE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x102D28C0)
#define CLASS_2_F96E1566619F5EBE__CTOR_OFFSET UNITYSDK_OFFSET(0x102D29A0)

inline static constexpr unsigned int Class_2_F96E1566619F5EBE_TypeDefinitionIndex = 43529;

class Class_2_F96E1566619F5EBE : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::Class_2_14F10A7D5A4F2DD7*>* Field_2_5; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Int64>* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_7; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_6; // 0x98
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F96E1566619F5EBE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F96E1566619F5EBE_ONCREATEPROPERTY_OFFSET))(this);
	}

	::Class_2_F96E1566619F5EBE_Enum_3_A24AD9071539656F Method_2_331687ECD06C359A()
	{
		return ((::Class_2_F96E1566619F5EBE_Enum_3_A24AD9071539656F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F96E1566619F5EBE_METHOD_2_331687ECD06C359A_OFFSET))(this);
	}

	::System::Void Method_2_504E0203274C6958(::Class_3_52A208B0FF6B9A63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_52A208B0FF6B9A63*))((::PBYTE)hIl2Cpp + CLASS_2_F96E1566619F5EBE_METHOD_2_504E0203274C6958_OFFSET))(this, a1);
	}
};
