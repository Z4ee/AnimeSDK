#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_44A8FD5EE475BAE7.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_46511B63ACEBE395_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x182441A0)
#define CLASS_2_46511B63ACEBE395_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x182442B0)
#define CLASS_2_46511B63ACEBE395_METHOD_2_C5373FED5F759925_OFFSET UNITYSDK_OFFSET(0x18244470)
#define CLASS_2_46511B63ACEBE395_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x182443D0)
#define CLASS_2_46511B63ACEBE395_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18244340)
#define CLASS_2_46511B63ACEBE395__CCTOR_OFFSET UNITYSDK_OFFSET(0x18244230)
#define CLASS_2_46511B63ACEBE395__CTOR_OFFSET UNITYSDK_OFFSET(0x182442A0)

inline static constexpr unsigned int Class_2_46511B63ACEBE395_TypeDefinitionIndex = 48914;

class Class_2_46511B63ACEBE395 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x13; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0x20
	::System::String* Field_2_0; // 0x28
	::Enum_3_44A8FD5EE475BAE7 Field_2_1; // 0x30
	::System::Boolean Field_2_7; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_46511B63ACEBE395__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46511B63ACEBE395__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46511B63ACEBE395_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46511B63ACEBE395_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46511B63ACEBE395_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46511B63ACEBE395_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_C5373FED5F759925(::System::UInt32 a1, ::Enum_3_44A8FD5EE475BAE7 a2, ::System::String* a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_44A8FD5EE475BAE7, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_46511B63ACEBE395_METHOD_2_C5373FED5F759925_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
