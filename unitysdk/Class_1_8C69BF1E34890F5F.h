#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_53BA6F5DD007EBA6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_205;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C69BF1E34890F5F_METHOD_1_3912C80D994F69F3_OFFSET UNITYSDK_OFFSET(0xE971020)
#define CLASS_1_8C69BF1E34890F5F_METHOD_1_4A42324BF665864C_OFFSET UNITYSDK_OFFSET(0xE970B00)
#define CLASS_1_8C69BF1E34890F5F_METHOD_1_5B8B16931609579F_OFFSET UNITYSDK_OFFSET(0xE971060)
#define CLASS_1_8C69BF1E34890F5F_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xE9710B0)
#define CLASS_1_8C69BF1E34890F5F__CTOR_OFFSET UNITYSDK_OFFSET(0xE970FC0)

inline static constexpr unsigned int Class_1_8C69BF1E34890F5F_TypeDefinitionIndex = 87275;

class Class_1_8C69BF1E34890F5F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C69BF1E34890F5F__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_205* Method_1_4A42324BF665864C(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_205*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8C69BF1E34890F5F_METHOD_1_4A42324BF665864C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>* Method_1_3912C80D994F69F3()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C69BF1E34890F5F_METHOD_1_3912C80D994F69F3_OFFSET))(this);
	}

	::Struct_2_53BA6F5DD007EBA6 Method_1_5B8B16931609579F(::System::Int32 a1)
	{
		return ((::Struct_2_53BA6F5DD007EBA6(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C69BF1E34890F5F_METHOD_1_5B8B16931609579F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C69BF1E34890F5F_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};
