#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_7F95F273DDBFD8DA;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }

#define STRUCT_2_172EDDF213DEFCC4_METHOD_2_4E5F0C484BC1A4CD_1_OFFSET UNITYSDK_OFFSET(0x70DDD0)
#define STRUCT_2_172EDDF213DEFCC4_METHOD_2_4E5F0C484BC1A4CD_OFFSET UNITYSDK_OFFSET(0x70DD90)
#define STRUCT_2_172EDDF213DEFCC4_METHOD_2_5592BFCA1EE165A2_OFFSET UNITYSDK_OFFSET(0x70DD80)
#define STRUCT_2_172EDDF213DEFCC4_METHOD_2_5863465EEDEDEEC5_OFFSET UNITYSDK_OFFSET(0x1120BB40)
#define STRUCT_2_172EDDF213DEFCC4_METHOD_2_A079105B6C727B32_OFFSET UNITYSDK_OFFSET(0x1120B9A0)
#define STRUCT_2_172EDDF213DEFCC4_METHOD_2_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x70DE30)
#define STRUCT_2_172EDDF213DEFCC4_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x70DE10)
#define STRUCT_2_172EDDF213DEFCC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1120B5E0)
#define STRUCT_2_172EDDF213DEFCC4__CTOR_OFFSET UNITYSDK_OFFSET(0x70DD70)

inline static constexpr unsigned int Struct_2_172EDDF213DEFCC4_TypeDefinitionIndex = 45852;

struct alignas(8) Struct_2_172EDDF213DEFCC4
{
	static ::Struct_2_172EDDF213DEFCC4* StaticGet_Field_2_3()
	{
		return (::Struct_2_172EDDF213DEFCC4*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_172EDDF213DEFCC4_TypeDefinitionIndex)->GetStaticField(0xCC70);
	}
	::Foundation::ReadOnlyNativeVariable_1<::System::Double> Field_2_0; // 0x10
	::Foundation::ReadOnlyNativeVariable_1<::System::Double> Field_2_1; // 0x20
	::Foundation::ReadOnlyNativeVariable_1<::System::Int32> Field_2_2; // 0x30

	/*
	::System::Void _ctor(::Foundation::NativeMemory* a1, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemory*, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>*))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4__CCTOR_OFFSET))();
	}

	::System::Void Method_2_5592BFCA1EE165A2(::Class_2_7F95F273DDBFD8DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7F95F273DDBFD8DA*))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4_METHOD_2_5592BFCA1EE165A2_OFFSET))(this, a1);
	}

	/*
	static ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* Method_2_A079105B6C727B32(::Foundation::NativeMemoryBuilder* a1)
	{
		return ((::Il2CppArray<::Foundation::NativeMemoryRequestHandle>*(*)(::Foundation::NativeMemoryBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4_METHOD_2_A079105B6C727B32_OFFSET))(a1);
	}
	*/

	::System::Double Method_2_4E5F0C484BC1A4CD()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4_METHOD_2_4E5F0C484BC1A4CD_OFFSET))(this);
	}

	::System::Double Method_2_4E5F0C484BC1A4CD_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4_METHOD_2_4E5F0C484BC1A4CD_1_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	/*
	static ::Struct_2_172EDDF213DEFCC4 Method_2_5863465EEDEDEEC5(::Foundation::NativeMemory* a1, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* a2)
	{
		return ((::Struct_2_172EDDF213DEFCC4(*)(::Foundation::NativeMemory*, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>*))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4_METHOD_2_5863465EEDEDEEC5_OFFSET))(a1, a2);
	}
	*/

	::System::Int32 Method_2_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_172EDDF213DEFCC4_METHOD_2_BFBBE8A6FE167A6A_OFFSET))(this);
	}
};
