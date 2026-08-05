#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E95C52C6A18573B6_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x144173D0)
#define CLASS_1_E95C52C6A18573B6_METHOD_1_87EBF98B7DC51C9D_OFFSET UNITYSDK_OFFSET(0x14417590)
#define CLASS_1_E95C52C6A18573B6_METHOD_1_BB37A5EB763F470D_OFFSET UNITYSDK_OFFSET(0x14417220)
#define CLASS_1_E95C52C6A18573B6_METHOD_1_D8074914DF2D4B35_OFFSET UNITYSDK_OFFSET(0x14417380)
#define CLASS_1_E95C52C6A18573B6_METHOD_1_DB8575F6AA34B1AB_OFFSET UNITYSDK_OFFSET(0x14417480)
#define CLASS_1_E95C52C6A18573B6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14417580)
#define CLASS_1_E95C52C6A18573B6__CTOR_OFFSET UNITYSDK_OFFSET(0x14417170)

inline static constexpr unsigned int Class_1_E95C52C6A18573B6_TypeDefinitionIndex = 75765;

class Class_1_E95C52C6A18573B6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::Boolean Field_1_7; // 0x1A

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E95C52C6A18573B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8074914DF2D4B35()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E95C52C6A18573B6_METHOD_1_D8074914DF2D4B35_OFFSET))(this);
	}

	::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E95C52C6A18573B6_METHOD_1_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB37A5EB763F470D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E95C52C6A18573B6_METHOD_1_BB37A5EB763F470D_OFFSET))(this);
	}

	::System::Boolean Method_1_DB8575F6AA34B1AB(::System::String* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E95C52C6A18573B6_METHOD_1_DB8575F6AA34B1AB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E95C52C6A18573B6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_87EBF98B7DC51C9D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E95C52C6A18573B6_METHOD_1_87EBF98B7DC51C9D_OFFSET))(this, a1, a2);
	}
};
