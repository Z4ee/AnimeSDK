#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_3_010347D17DFD5D8F_9;
class Class_3_31FA216B8128BBFD_5;
class Class_3_CCEA8987EFB4C86F_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T> class Class_0_16E4307DCC419505_164;

#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_294E72897EB3AEB3_OFFSET UNITYSDK_OFFSET(0x133AE9F0)
#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_6260C856881447F0_OFFSET UNITYSDK_OFFSET(0x133AE460)
#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_7DA9747BDA389265_OFFSET UNITYSDK_OFFSET(0x133AE3B0)
#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_DF9D58A36152196F_OFFSET UNITYSDK_OFFSET(0x133ADC00)
#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x133ADAF0)
#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4__CTOR_OFFSET UNITYSDK_OFFSET(0x133ADBF0)

inline static constexpr unsigned int Class_2_AF5BA1C65F12F4B1_Class_2_25F6720B79E1C4C4_TypeDefinitionIndex = 45946;

class Class_2_AF5BA1C65F12F4B1_Class_2_25F6720B79E1C4C4 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_164<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_31FA216B8128BBFD_5*>*>* Field_2_2; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_31FA216B8128BBFD_5*>* Field_2_3; // 0x88
	::Class_0_16E4307DCC419505_164<::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_0; // 0x90
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_DF9D58A36152196F(::Class_3_CCEA8987EFB4C86F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CCEA8987EFB4C86F_3*))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_DF9D58A36152196F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_31FA216B8128BBFD_5*>* Method_2_7DA9747BDA389265()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_31FA216B8128BBFD_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_7DA9747BDA389265_OFFSET))(this);
	}

	::System::Void Method_2_6260C856881447F0(::Class_3_010347D17DFD5D8F_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_010347D17DFD5D8F_9*))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_6260C856881447F0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_294E72897EB3AEB3()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_25F6720B79E1C4C4_METHOD_2_294E72897EB3AEB3_OFFSET))(this);
	}
};
