#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_9244151F53DA704F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x86D950)
#define STRUCT_2_9244151F53DA704F_EQUALS_OFFSET UNITYSDK_OFFSET(0x86D930)
#define STRUCT_2_9244151F53DA704F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x86DA40)
#define STRUCT_2_9244151F53DA704F_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x86DA90)
#define STRUCT_2_9244151F53DA704F_METHOD_2_51BB781957D7506D_OFFSET UNITYSDK_OFFSET(0x19517550)
#define STRUCT_2_9244151F53DA704F_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x195172F0)
#define STRUCT_2_9244151F53DA704F_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x86DB10)
#define STRUCT_2_9244151F53DA704F_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x86DAB0)
#define STRUCT_2_9244151F53DA704F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19517440)
#define STRUCT_2_9244151F53DA704F__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5700)

inline static constexpr unsigned int Struct_2_9244151F53DA704F_TypeDefinitionIndex = 65041;

struct alignas(8) Struct_2_9244151F53DA704F
{
	static ::Struct_2_9244151F53DA704F* StaticGet_Field_2_0()
	{
		return (::Struct_2_9244151F53DA704F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9244151F53DA704F_TypeDefinitionIndex)->GetStaticField(0x38B80);
	}
	::System::UInt32 Field_2_1; // 0x10
	::Il2CppArray<::System::String*>* Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_9244151F53DA704F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9244151F53DA704F))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_9244151F53DA704F a1, ::Struct_2_9244151F53DA704F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9244151F53DA704F, ::Struct_2_9244151F53DA704F))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_51BB781957D7506D(::Struct_2_9244151F53DA704F a1, ::Struct_2_9244151F53DA704F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9244151F53DA704F, ::Struct_2_9244151F53DA704F))((::PBYTE)hIl2Cpp + STRUCT_2_9244151F53DA704F_METHOD_2_51BB781957D7506D_OFFSET))(a1, a2);
	}
};
