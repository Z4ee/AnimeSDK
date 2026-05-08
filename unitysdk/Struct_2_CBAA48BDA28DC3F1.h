#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8DC301C6C91BF83F.h"
#include "unitysdk/Struct_2_CBAA48BDA28DC3F1_Struct_2_3F82E75A75CDC595_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_95E491FD617A3F68;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CBAA48BDA28DC3F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7E1BB0)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4257D999C42754D2_OFFSET UNITYSDK_OFFSET(0x7E1BC0)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4B31EC55926E5FF0_OFFSET UNITYSDK_OFFSET(0x180B8B70)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_68013EF47E352A33_OFFSET UNITYSDK_OFFSET(0x180B8250)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_9F0490C2C99DD33B_OFFSET UNITYSDK_OFFSET(0x180B8350)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_A45D46D8E153F554_OFFSET UNITYSDK_OFFSET(0x180B8A00)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_D9FEEED089775678_OFFSET UNITYSDK_OFFSET(0x180B88F0)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_E09C0DF6041D7B78_OFFSET UNITYSDK_OFFSET(0x7E1BD0)
#define STRUCT_2_CBAA48BDA28DC3F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x180B81E0)
#define STRUCT_2_CBAA48BDA28DC3F1__CTOR_OFFSET UNITYSDK_OFFSET(0x7E1BA0)

inline static constexpr unsigned int Struct_2_CBAA48BDA28DC3F1_TypeDefinitionIndex = 63985;

struct alignas(8) Struct_2_CBAA48BDA28DC3F1
{
	static ::System::Collections::Generic::List_1<::Struct_2_CBAA48BDA28DC3F1_Struct_2_3F82E75A75CDC595_2>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_CBAA48BDA28DC3F1_Struct_2_3F82E75A75CDC595_2>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CBAA48BDA28DC3F1_TypeDefinitionIndex)->GetStaticField(0x44E60);
	}
	::System::String* Field_2_1; // 0x10

	::System::Void _ctor(::System::String* a1, ::Class_1_95E491FD617A3F68* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_95E491FD617A3F68*))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_DISPOSE_OFFSET))(this);
	}

	static ::System::String* Method_2_68013EF47E352A33(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_68013EF47E352A33_OFFSET))(a1, a2, a3, a4, a5);
	}

	/*
	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_9F0490C2C99DD33B(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_9F0490C2C99DD33B_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	/*
	::System::Boolean Method_2_4257D999C42754D2(::System::Int32& a1, ::Struct_2_60A79F822ECFC020& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::Struct_2_60A79F822ECFC020&))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4257D999C42754D2_OFFSET))(this, a1, a2);
	}
	*/

	static ::System::Int32 Method_2_A45D46D8E153F554(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_A45D46D8E153F554_OFFSET))(a1, a2);
	}

	static ::System::Single Method_2_D9FEEED089775678(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_D9FEEED089775678_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_2_4B31EC55926E5FF0(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4B31EC55926E5FF0_OFFSET))(a1, a2, a3, a4);
	}

	/*
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_E09C0DF6041D7B78(::System::Int32& a1, ::Enum_3_8DC301C6C91BF83F a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32&, ::Enum_3_8DC301C6C91BF83F))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_E09C0DF6041D7B78_OFFSET))(this, a1, a2);
	}
	*/
};
