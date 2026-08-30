#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_A9180AA7F443378D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AA6B80)
#define STRUCT_2_A9180AA7F443378D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3AA6B40)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_04E4CA3D124E26DA_OFFSET UNITYSDK_OFFSET(0x3AA6B50)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x3AA6B70)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_655C85F26527BF1E_OFFSET UNITYSDK_OFFSET(0x16E96120)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x3AA6B60)
#define STRUCT_2_A9180AA7F443378D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E98490)

inline static constexpr unsigned int Struct_2_A9180AA7F443378D_TypeDefinitionIndex = 71053;

struct alignas(8) Struct_2_A9180AA7F443378D
{
	static ::System::Object** StaticGet_JNACIPNELFK()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A9180AA7F443378D_TypeDefinitionIndex)->GetStaticField(0xF340);
	}
	static ::System::Boolean* StaticGet_KCJNNDMOFLB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A9180AA7F443378D_TypeDefinitionIndex)->GetStaticField(0x4890);
	}
	::Unity::Collections::NativeArray_1<::System::Int32> NDOOAEHJLAL; // 0x10
	::System::Single ADPJPDDOLLK; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D__CCTOR_OFFSET))();
	}

	static ::System::String* Method_2_655C85F26527BF1E(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_655C85F26527BF1E_OFFSET))(a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Method_2_04E4CA3D124E26DA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_04E4CA3D124E26DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_DISPOSE_OFFSET))(this);
	}
};
