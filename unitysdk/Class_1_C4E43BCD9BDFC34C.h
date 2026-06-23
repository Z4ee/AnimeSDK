#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_53BA6F5DD007EBA6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_305;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_3912C80D994F69F3_OFFSET UNITYSDK_OFFSET(0x18E970F0)
#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_5B8B16931609579F_OFFSET UNITYSDK_OFFSET(0x18E970A0)
#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F51422A44AFF6515_OFFSET UNITYSDK_OFFSET(0x18E96B60)
#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x18E97080)
#define CLASS_1_C4E43BCD9BDFC34C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E97020)

inline static constexpr unsigned int Class_1_C4E43BCD9BDFC34C_TypeDefinitionIndex = 47934;

class Class_1_C4E43BCD9BDFC34C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_305* Method_1_F51422A44AFF6515(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_305*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F51422A44AFF6515_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::Struct_2_53BA6F5DD007EBA6 Method_1_5B8B16931609579F(::System::Int32 a1)
	{
		return ((::Struct_2_53BA6F5DD007EBA6(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_5B8B16931609579F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>* Method_1_3912C80D994F69F3()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_3912C80D994F69F3_OFFSET))(this);
	}
};
