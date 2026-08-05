#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A3351D363C8BBE01;

#define STRUCT_2_D37445D6054F848B_METHOD_2_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x8FEF70)
#define STRUCT_2_D37445D6054F848B_METHOD_2_A4FC9423DE081646_OFFSET UNITYSDK_OFFSET(0x8FEFD0)
#define STRUCT_2_D37445D6054F848B_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x8FEF60)
#define STRUCT_2_D37445D6054F848B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C118DD0)
#define STRUCT_2_D37445D6054F848B__CTOR_OFFSET UNITYSDK_OFFSET(0x8FEF30)

inline static constexpr unsigned int Struct_2_D37445D6054F848B_TypeDefinitionIndex = 86618;

struct alignas(8) Struct_2_D37445D6054F848B
{
	static ::Struct_2_D37445D6054F848B* StaticGet_Field_2_7()
	{
		return (::Struct_2_D37445D6054F848B*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D37445D6054F848B_TypeDefinitionIndex)->GetStaticField(0x2EAD0);
	}
	// static const ::System::Int32 Field_2_0 = 0x0; // 0x0
	::System::UInt32 Field_2_6; // 0x10
	::Class_1_A3351D363C8BBE01* Field_2_5; // 0x18

	::System::Void _ctor(::Class_1_A3351D363C8BBE01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3351D363C8BBE01*))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::Class_1_A3351D363C8BBE01* Method_2_358A144584A5DBFC()
	{
		return ((::Class_1_A3351D363C8BBE01*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B_METHOD_2_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Boolean Method_2_A4FC9423DE081646(::Class_1_A3351D363C8BBE01*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A3351D363C8BBE01*&))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B_METHOD_2_A4FC9423DE081646_OFFSET))(this, a1);
	}
};
