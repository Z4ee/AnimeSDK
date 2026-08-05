#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_4.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7E5B401C3D677259;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_F5F1DD712FFDA4C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8200F0)
#define STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x820120)
#define STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x820120)
#define STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_226FA1848C18A925_OFFSET UNITYSDK_OFFSET(0x820110)
#define STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_4BDCDE18E1A828F5_OFFSET UNITYSDK_OFFSET(0x820190)
#define STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_6D9928F240CC3649_OFFSET UNITYSDK_OFFSET(0x820100)
#define STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_8AC47B5D7C529B8A_OFFSET UNITYSDK_OFFSET(0x820180)
#define STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x8201A0)
#define STRUCT_2_F5F1DD712FFDA4C0__CCTOR_OFFSET UNITYSDK_OFFSET(0x155F0460)

inline static constexpr unsigned int Struct_2_F5F1DD712FFDA4C0_TypeDefinitionIndex = 77367;

struct alignas(8) Struct_2_F5F1DD712FFDA4C0
{
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F5F1DD712FFDA4C0_TypeDefinitionIndex)->GetStaticField(0x11880);
	}
	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_4>* Field_2_2; // 0x10
	::System::Action_1<::System::Boolean>* Field_2_1; // 0x18
	::Class_1_7E5B401C3D677259* Field_2_0; // 0x20
	::System::Boolean Field_2_7; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_2_6D9928F240CC3649()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_6D9928F240CC3649_OFFSET))(this);
	}

	::System::Boolean Method_2_226FA1848C18A925(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_226FA1848C18A925_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_8AC47B5D7C529B8A(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_8AC47B5D7C529B8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4BDCDE18E1A828F5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_4BDCDE18E1A828F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_F5F1DD712FFDA4C0_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}
};
