#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_A9180AA7F443378D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BBF440)
#define STRUCT_2_A9180AA7F443378D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2BBF400)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_04E4CA3D124E26DA_OFFSET UNITYSDK_OFFSET(0x2BBF410)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x2BBF430)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_655C85F26527BF1E_OFFSET UNITYSDK_OFFSET(0x137D01E0)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x2BBF420)
#define STRUCT_2_A9180AA7F443378D__CCTOR_OFFSET UNITYSDK_OFFSET(0x137D2440)

inline static constexpr unsigned int Struct_2_A9180AA7F443378D_TypeDefinitionIndex = 66444;

struct alignas(8) Struct_2_A9180AA7F443378D
{
	static ::System::Object** StaticGet_Field_2_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A9180AA7F443378D_TypeDefinitionIndex)->GetStaticField(0x33C60);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A9180AA7F443378D_TypeDefinitionIndex)->GetStaticField(0xA370);
	}
	::Unity::Collections::NativeArray_1<::System::Int32> Field_2_2; // 0x10
	::System::Single Field_2_3; // 0x20

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
