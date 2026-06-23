#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7605B3A433497F04_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C1AD00)
#define CLASS_2_7605B3A433497F04_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16C1AE60)
#define CLASS_2_7605B3A433497F04_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16C1AF90)
#define CLASS_2_7605B3A433497F04_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C1AEF0)
#define CLASS_2_7605B3A433497F04_METHOD_2_E177AC7844E3F287_OFFSET UNITYSDK_OFFSET(0x16C1B020)
#define CLASS_2_7605B3A433497F04__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1ADE0)
#define CLASS_2_7605B3A433497F04__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1AE50)

inline static constexpr unsigned int Class_2_7605B3A433497F04_TypeDefinitionIndex = 80343;

class Class_2_7605B3A433497F04 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xC2; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_2; // 0x20
	::System::String* Field_2_0; // 0x28
	::System::Int32 Field_2_1; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7605B3A433497F04__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7605B3A433497F04__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7605B3A433497F04_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7605B3A433497F04_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7605B3A433497F04_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7605B3A433497F04_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E177AC7844E3F287(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_7605B3A433497F04_METHOD_2_E177AC7844E3F287_OFFSET))(this, a1, a2, a3);
	}
};
