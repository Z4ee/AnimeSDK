#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_90E529DB4DCB014F_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x815E70)
#define STRUCT_2_90E529DB4DCB014F_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x815E20)
#define STRUCT_2_90E529DB4DCB014F_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x815E80)
#define STRUCT_2_90E529DB4DCB014F_1_METHOD_2_57A8E11FECF10345_1_OFFSET UNITYSDK_OFFSET(0x1508E4D0)
#define STRUCT_2_90E529DB4DCB014F_1_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x1508E480)
#define STRUCT_2_90E529DB4DCB014F_1_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x815F30)
#define STRUCT_2_90E529DB4DCB014F_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x815ED0)
#define STRUCT_2_90E529DB4DCB014F_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x669870)
#define STRUCT_2_90E529DB4DCB014F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1508E400)
#define STRUCT_2_90E529DB4DCB014F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_90E529DB4DCB014F_1_TypeDefinitionIndex = 90246;

struct alignas(4) Struct_2_90E529DB4DCB014F_1
{
	static ::Struct_2_90E529DB4DCB014F_1* StaticGet_Field_2_0()
	{
		return (::Struct_2_90E529DB4DCB014F_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_90E529DB4DCB014F_1_TypeDefinitionIndex)->GetStaticField(0xD880);
	}
	::System::UInt32 Field_2_1; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_90E529DB4DCB014F_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_90E529DB4DCB014F_1))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_90E529DB4DCB014F_1 a1, ::Struct_2_90E529DB4DCB014F_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_90E529DB4DCB014F_1, ::Struct_2_90E529DB4DCB014F_1))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345_1(::Struct_2_90E529DB4DCB014F_1 a1, ::Struct_2_90E529DB4DCB014F_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_90E529DB4DCB014F_1, ::Struct_2_90E529DB4DCB014F_1))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_METHOD_2_57A8E11FECF10345_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_90E529DB4DCB014F_1_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
