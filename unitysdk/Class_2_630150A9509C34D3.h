#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_2.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define CLASS_2_630150A9509C34D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F66450)
#define CLASS_2_630150A9509C34D3_METHOD_2_08A8B3BB79FA0277_OFFSET UNITYSDK_OFFSET(0x19F66400)
#define CLASS_2_630150A9509C34D3_METHOD_2_7DDE31E61DBF393E_OFFSET UNITYSDK_OFFSET(0x19F66430)
#define CLASS_2_630150A9509C34D3_METHOD_2_C5A067A90BE4619E_OFFSET UNITYSDK_OFFSET(0x19F66460)
#define CLASS_2_630150A9509C34D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F665C0)
#define CLASS_2_630150A9509C34D3__CTOR_OFFSET UNITYSDK_OFFSET(0x19F663F0)

inline static constexpr unsigned int Class_2_630150A9509C34D3_TypeDefinitionIndex = 6698;

class Class_2_630150A9509C34D3 : public ::Class_1_43BD383C98B4C0C5_2
{
public:
	static ::Il2CppArray<::Class_2_630150A9509C34D3*>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::Class_2_630150A9509C34D3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_630150A9509C34D3_TypeDefinitionIndex)->GetStaticField(0x7660);
	}
	::Unity::Collections::Allocator Field_2_1; // 0x10

	::System::Void _ctor(::Unity::Collections::Allocator a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + CLASS_2_630150A9509C34D3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_630150A9509C34D3__CCTOR_OFFSET))();
	}

	::System::IntPtr Method_2_08A8B3BB79FA0277(::System::Int64 a1)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_630150A9509C34D3_METHOD_2_08A8B3BB79FA0277_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DDE31E61DBF393E(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_630150A9509C34D3_METHOD_2_7DDE31E61DBF393E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_630150A9509C34D3_DISPOSE_OFFSET))(this);
	}

	static ::Class_2_630150A9509C34D3* Method_2_C5A067A90BE4619E(::Unity::Collections::Allocator a1)
	{
		return ((::Class_2_630150A9509C34D3*(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + CLASS_2_630150A9509C34D3_METHOD_2_C5A067A90BE4619E_OFFSET))(a1);
	}
};
