#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_4ACDA48EC7CC1C00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E77EF0)
#define STRUCT_2_4ACDA48EC7CC1C00_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2E77EB0)
#define STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_04E4CA3D124E26DA_OFFSET UNITYSDK_OFFSET(0x2E77EC0)
#define STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x2E77EE0)
#define STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x2E77ED0)
#define STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_E288012BA3EEE127_OFFSET UNITYSDK_OFFSET(0x15871A30)
#define STRUCT_2_4ACDA48EC7CC1C00__CCTOR_OFFSET UNITYSDK_OFFSET(0x15873E20)

inline static constexpr unsigned int Struct_2_4ACDA48EC7CC1C00_TypeDefinitionIndex = 71085;

struct alignas(8) Struct_2_4ACDA48EC7CC1C00
{
	static ::System::Object** StaticGet_JNACIPNELFK()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4ACDA48EC7CC1C00_TypeDefinitionIndex)->GetStaticField(0x58070);
	}
	static ::System::Boolean* StaticGet_KCJNNDMOFLB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4ACDA48EC7CC1C00_TypeDefinitionIndex)->GetStaticField(0x135C0);
	}
	::Unity::Collections::NativeArray_1<::System::Int32> NDOOAEHJLAL; // 0x10
	::System::Single ADPJPDDOLLK; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4ACDA48EC7CC1C00__CCTOR_OFFSET))();
	}

	static ::System::String* Method_2_E288012BA3EEE127(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_E288012BA3EEE127_OFFSET))(a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4ACDA48EC7CC1C00_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Method_2_04E4CA3D124E26DA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_04E4CA3D124E26DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4ACDA48EC7CC1C00_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4ACDA48EC7CC1C00_DISPOSE_OFFSET))(this);
	}
};
