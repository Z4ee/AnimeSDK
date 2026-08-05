#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_3C60E087B86D1AFF.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_1_EAF23F875B61917D;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x182733B0)
#define CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_AF7200B05BCE8E27_OFFSET UNITYSDK_OFFSET(0x18273570)
#define CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x182730C0)
#define CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x182734E0)
#define CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18273440)
#define CLASS_2_2F4CE9A3C30CD7F4__CCTOR_OFFSET UNITYSDK_OFFSET(0x18273330)
#define CLASS_2_2F4CE9A3C30CD7F4__CTOR_OFFSET UNITYSDK_OFFSET(0x182733A0)

inline static constexpr unsigned int Class_2_2F4CE9A3C30CD7F4_TypeDefinitionIndex = 57477;

class Class_2_2F4CE9A3C30CD7F4 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_10 = 0x7; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Field_2_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EAF23F875B61917D*>* Field_2_4; // 0x30
	::System::String* Field_2_1; // 0x38
	::System::Object* Field_2_6; // 0x40
	::Enum_3_3C60E087B86D1AFF Field_2_11; // 0x48
	::System::UInt32 Field_2_7; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2F4CE9A3C30CD7F4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F4CE9A3C30CD7F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_2_2F4CE9A3C30CD7F4* Method_2_AF7200B05BCE8E27()
	{
		return ((::Class_2_2F4CE9A3C30CD7F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F4CE9A3C30CD7F4_METHOD_2_AF7200B05BCE8E27_OFFSET))(this);
	}
};
