#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Sample/SampleDynamicType.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1722BCD2C03BF047;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D71182692EB26FB4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BBF660)
#define STRUCT_2_D71182692EB26FB4_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x5B60)
#define STRUCT_2_D71182692EB26FB4_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x60D0)
#define STRUCT_2_D71182692EB26FB4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x2BBF470)
#define STRUCT_2_D71182692EB26FB4_METHOD_2_47B6C8FE099B9DF2_OFFSET UNITYSDK_OFFSET(0x2BBF620)
#define STRUCT_2_D71182692EB26FB4_METHOD_2_A000193903A8B628_OFFSET UNITYSDK_OFFSET(0x2BBF4D0)
#define STRUCT_2_D71182692EB26FB4_METHOD_2_C11DE5214A4C6B74_OFFSET UNITYSDK_OFFSET(0x2BBF640)
#define STRUCT_2_D71182692EB26FB4_METHOD_2_CB99FCE2D330F00C_OFFSET UNITYSDK_OFFSET(0x2BBF570)
#define STRUCT_2_D71182692EB26FB4_METHOD_2_DA967F549D8A9897_OFFSET UNITYSDK_OFFSET(0x2BBF630)
#define STRUCT_2_D71182692EB26FB4_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xC630)
#define STRUCT_2_D71182692EB26FB4_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x95B0)
#define STRUCT_2_D71182692EB26FB4__CCTOR_OFFSET UNITYSDK_OFFSET(0x137FB1D0)
#define STRUCT_2_D71182692EB26FB4__CTOR_OFFSET UNITYSDK_OFFSET(0x80F20)

inline static constexpr unsigned int Struct_2_D71182692EB26FB4_TypeDefinitionIndex = 69124;

struct alignas(8) Struct_2_D71182692EB26FB4
{
	static ::Struct_2_D71182692EB26FB4* StaticGet_Field_2_0()
	{
		return (::Struct_2_D71182692EB26FB4*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D71182692EB26FB4_TypeDefinitionIndex)->GetStaticField(0x5C0E0);
	}
	::Class_1_1722BCD2C03BF047* _center_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* _values_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_1722BCD2C03BF047* a1, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1722BCD2C03BF047*, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4__CCTOR_OFFSET))();
	}

	::Class_1_1722BCD2C03BF047* get_center()
	{
		return ((::Class_1_1722BCD2C03BF047*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_GET_CENTER_OFFSET))(this);
	}

	::System::Void set_center(::Class_1_1722BCD2C03BF047* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1722BCD2C03BF047*))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_SET_CENTER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* get_values()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_GET_VALUES_OFFSET))(this);
	}

	::System::Void set_values(::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_SET_VALUES_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_A000193903A8B628(::System::String* a1, ::System::Int64 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_METHOD_2_A000193903A8B628_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CB99FCE2D330F00C(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_METHOD_2_CB99FCE2D330F00C_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_47B6C8FE099B9DF2(::System::String* a1, ::Struct_2_E4446863CEE2BD81 a2, ::RPG::Client::Sample::SampleDynamicType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_E4446863CEE2BD81, ::RPG::Client::Sample::SampleDynamicType))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_METHOD_2_47B6C8FE099B9DF2_OFFSET))(this, a1, a2, a3);
	}
	*/

	::RPG::Client::Sample::SampleDynamicType Method_2_DA967F549D8A9897(::System::Int32 a1)
	{
		return ((::RPG::Client::Sample::SampleDynamicType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_METHOD_2_DA967F549D8A9897_OFFSET))(this, a1);
	}

	/*
	::Struct_2_5B01A4D9DE10D034 Method_2_C11DE5214A4C6B74(::System::Int32 a1)
	{
		return ((::Struct_2_5B01A4D9DE10D034(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_METHOD_2_C11DE5214A4C6B74_OFFSET))(this, a1);
	}
	*/

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D71182692EB26FB4_DISPOSE_OFFSET))(this);
	}
};
