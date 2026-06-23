#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8DF301C6C9451BFD.h"
#include "unitysdk/Struct_2_CBAA48BDA28DC3F1_Struct_2_3F82E75A75CDC595_3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D79D852F682C7303;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CBAA48BDA28DC3F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82E650)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4257D999C42754D2_OFFSET UNITYSDK_OFFSET(0x82E670)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4B31EC55926E5FF0_OFFSET UNITYSDK_OFFSET(0x1771E3B0)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_68013EF47E352A33_OFFSET UNITYSDK_OFFSET(0x1771E7B0)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_9F0490C2C99DD33B_OFFSET UNITYSDK_OFFSET(0x1771E4D0)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_A45D46D8E153F554_OFFSET UNITYSDK_OFFSET(0x1771EA10)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_D9FEEED089775678_OFFSET UNITYSDK_OFFSET(0x1771EB80)
#define STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_E09C0DF6041D7B78_OFFSET UNITYSDK_OFFSET(0x82E660)
#define STRUCT_2_CBAA48BDA28DC3F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1771E340)
#define STRUCT_2_CBAA48BDA28DC3F1__CTOR_OFFSET UNITYSDK_OFFSET(0x82E640)

inline static constexpr unsigned int Struct_2_CBAA48BDA28DC3F1_TypeDefinitionIndex = 84462;

struct alignas(8) Struct_2_CBAA48BDA28DC3F1
{
	static ::System::Collections::Generic::List_1<::Struct_2_CBAA48BDA28DC3F1_Struct_2_3F82E75A75CDC595_3>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_CBAA48BDA28DC3F1_Struct_2_3F82E75A75CDC595_3>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CBAA48BDA28DC3F1_TypeDefinitionIndex)->GetStaticField(0x43F70);
	}
	::System::String* Field_2_1; // 0x10

	::System::Void _ctor(::System::String* a1, ::Class_1_D79D852F682C7303* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_D79D852F682C7303*))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_DISPOSE_OFFSET))(this);
	}

	static ::System::Int32 Method_2_4B31EC55926E5FF0(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4B31EC55926E5FF0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_2_68013EF47E352A33(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_68013EF47E352A33_OFFSET))(a1, a2, a3, a4, a5);
	}

	/*
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_E09C0DF6041D7B78(::System::Int32& a1, ::Enum_3_8DF301C6C9451BFD a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32&, ::Enum_3_8DF301C6C9451BFD))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_E09C0DF6041D7B78_OFFSET))(this, a1, a2);
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

	/*
	::System::Boolean Method_2_4257D999C42754D2(::System::Int32& a1, ::Struct_2_60A79F822ECFC020& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::Struct_2_60A79F822ECFC020&))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_4257D999C42754D2_OFFSET))(this, a1, a2);
	}
	*/

	/*
	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_9F0490C2C99DD33B(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1_METHOD_2_9F0490C2C99DD33B_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/
};
