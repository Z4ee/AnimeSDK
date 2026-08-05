#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96EDEAC6CE722CBE.h"
#include "unitysdk/Struct_2_64A1B1F91A17C5DC_Struct_2_3F82E75A75CDC595_3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_912E0458D58825D3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_64A1B1F91A17C5DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7D2FD0)
#define STRUCT_2_64A1B1F91A17C5DC_METHOD_2_0C0E0A34AFD4B561_OFFSET UNITYSDK_OFFSET(0x137D99B0)
#define STRUCT_2_64A1B1F91A17C5DC_METHOD_2_4257D999C42754D2_OFFSET UNITYSDK_OFFSET(0x7D2FE0)
#define STRUCT_2_64A1B1F91A17C5DC_METHOD_2_4B31EC55926E5FF0_OFFSET UNITYSDK_OFFSET(0x137D9C90)
#define STRUCT_2_64A1B1F91A17C5DC_METHOD_2_5997892194A2702F_OFFSET UNITYSDK_OFFSET(0x137D9DC0)
#define STRUCT_2_64A1B1F91A17C5DC_METHOD_2_68013EF47E352A33_OFFSET UNITYSDK_OFFSET(0x137D97A0)
#define STRUCT_2_64A1B1F91A17C5DC_METHOD_2_D9FEEED089775678_OFFSET UNITYSDK_OFFSET(0x137D98A0)
#define STRUCT_2_64A1B1F91A17C5DC_METHOD_2_DD37B1C963F774E3_OFFSET UNITYSDK_OFFSET(0x7D2FF0)
#define STRUCT_2_64A1B1F91A17C5DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x137D9480)
#define STRUCT_2_64A1B1F91A17C5DC__CTOR_OFFSET UNITYSDK_OFFSET(0x7D2FC0)

inline static constexpr unsigned int Struct_2_64A1B1F91A17C5DC_TypeDefinitionIndex = 83596;

struct alignas(8) Struct_2_64A1B1F91A17C5DC
{
	static ::System::Collections::Generic::List_1<::Struct_2_64A1B1F91A17C5DC_Struct_2_3F82E75A75CDC595_3>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_64A1B1F91A17C5DC_Struct_2_3F82E75A75CDC595_3>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_64A1B1F91A17C5DC_TypeDefinitionIndex)->GetStaticField(0x31500);
	}
	::System::String* Field_2_7; // 0x10

	::System::Void _ctor(::System::String* a1, ::Class_1_912E0458D58825D3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_912E0458D58825D3*))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_DISPOSE_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_4257D999C42754D2(::System::Int32& a1, ::Struct_2_60A79F822ECFC020& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::Struct_2_60A79F822ECFC020&))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_METHOD_2_4257D999C42754D2_OFFSET))(this, a1, a2);
	}
	*/

	static ::System::String* Method_2_68013EF47E352A33(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_METHOD_2_68013EF47E352A33_OFFSET))(a1, a2, a3, a4, a5);
	}

	/*
	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_0C0E0A34AFD4B561(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_METHOD_2_0C0E0A34AFD4B561_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	static ::System::Int32 Method_2_4B31EC55926E5FF0(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_METHOD_2_4B31EC55926E5FF0_OFFSET))(a1, a2, a3, a4);
	}

	/*
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_DD37B1C963F774E3(::System::Int32& a1, ::Enum_3_96EDEAC6CE722CBE a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32&, ::Enum_3_96EDEAC6CE722CBE))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_METHOD_2_DD37B1C963F774E3_OFFSET))(this, a1, a2);
	}
	*/

	static ::System::Int32 Method_2_5997892194A2702F(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_METHOD_2_5997892194A2702F_OFFSET))(a1, a2);
	}

	static ::System::Single Method_2_D9FEEED089775678(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC_METHOD_2_D9FEEED089775678_OFFSET))(a1, a2, a3, a4);
	}
};
