#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_05AEA17C440D9BC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A5E70)
#define STRUCT_2_05AEA17C440D9BC5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15A5E30)
#define STRUCT_2_05AEA17C440D9BC5_METHOD_2_04E4CA3D124E26DA_OFFSET UNITYSDK_OFFSET(0x15A5E40)
#define STRUCT_2_05AEA17C440D9BC5_METHOD_2_2A9DFF5F64D18AC4_OFFSET UNITYSDK_OFFSET(0x117DB6E0)
#define STRUCT_2_05AEA17C440D9BC5_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x15A5E60)
#define STRUCT_2_05AEA17C440D9BC5_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x15A5E50)
#define STRUCT_2_05AEA17C440D9BC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x117DE270)

inline static constexpr unsigned int Struct_2_05AEA17C440D9BC5_TypeDefinitionIndex = 65514;

struct alignas(8) Struct_2_05AEA17C440D9BC5
{
	static ::System::Object** StaticGet_Field_2_3()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_05AEA17C440D9BC5_TypeDefinitionIndex)->GetStaticField(0x222E0);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_05AEA17C440D9BC5_TypeDefinitionIndex)->GetStaticField(0x8970);
	}
	::Unity::Collections::NativeArray_1<::System::Int32> Field_2_1; // 0x10
	::System::Single Field_2_2; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_05AEA17C440D9BC5__CCTOR_OFFSET))();
	}

	static ::System::String* Method_2_2A9DFF5F64D18AC4(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_05AEA17C440D9BC5_METHOD_2_2A9DFF5F64D18AC4_OFFSET))(a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_05AEA17C440D9BC5_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Method_2_04E4CA3D124E26DA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_05AEA17C440D9BC5_METHOD_2_04E4CA3D124E26DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_05AEA17C440D9BC5_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_05AEA17C440D9BC5_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_05AEA17C440D9BC5_DISPOSE_OFFSET))(this);
	}
};
