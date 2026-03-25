#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_2.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define CLASS_2_42AD73E911D069B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A15F70)
#define CLASS_2_42AD73E911D069B7_METHOD_2_08A8B3BB79FA0277_OFFSET UNITYSDK_OFFSET(0x17A15F20)
#define CLASS_2_42AD73E911D069B7_METHOD_2_1D562EF5B4E0FD29_OFFSET UNITYSDK_OFFSET(0x17A15F80)
#define CLASS_2_42AD73E911D069B7_METHOD_2_7DDE31E61DBF393E_OFFSET UNITYSDK_OFFSET(0x17A15F50)
#define CLASS_2_42AD73E911D069B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A16110)
#define CLASS_2_42AD73E911D069B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17A15F10)

inline static constexpr unsigned int Class_2_42AD73E911D069B7_TypeDefinitionIndex = 8640;

class Class_2_42AD73E911D069B7 : public ::Class_1_43BD383C98B4C0C5_2
{
public:
	static ::Il2CppArray<::Class_2_42AD73E911D069B7*>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::Class_2_42AD73E911D069B7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_42AD73E911D069B7_TypeDefinitionIndex)->GetStaticField(0x1DF10);
	}
	::Unity::Collections::Allocator Field_2_0; // 0x10

	::System::Void _ctor(::Unity::Collections::Allocator a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + CLASS_2_42AD73E911D069B7__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_42AD73E911D069B7__CCTOR_OFFSET))();
	}

	::System::IntPtr Method_2_08A8B3BB79FA0277(::System::Int64 a1)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_42AD73E911D069B7_METHOD_2_08A8B3BB79FA0277_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DDE31E61DBF393E(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_42AD73E911D069B7_METHOD_2_7DDE31E61DBF393E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42AD73E911D069B7_DISPOSE_OFFSET))(this);
	}

	static ::Class_2_42AD73E911D069B7* Method_2_1D562EF5B4E0FD29(::Unity::Collections::Allocator a1)
	{
		return ((::Class_2_42AD73E911D069B7*(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + CLASS_2_42AD73E911D069B7_METHOD_2_1D562EF5B4E0FD29_OFFSET))(a1);
	}
};
