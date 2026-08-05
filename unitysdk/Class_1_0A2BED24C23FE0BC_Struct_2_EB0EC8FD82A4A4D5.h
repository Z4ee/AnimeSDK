#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define CLASS_1_0A2BED24C23FE0BC_STRUCT_2_EB0EC8FD82A4A4D5_METHOD_2_EBB707233FDC6BEB_OFFSET UNITYSDK_OFFSET(0x1B391220)
#define CLASS_1_0A2BED24C23FE0BC_STRUCT_2_EB0EC8FD82A4A4D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3911E0)
#define CLASS_1_0A2BED24C23FE0BC_STRUCT_2_EB0EC8FD82A4A4D5__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

inline static constexpr unsigned int Class_1_0A2BED24C23FE0BC_Struct_2_EB0EC8FD82A4A4D5_TypeDefinitionIndex = 11916;

struct alignas(8) Class_1_0A2BED24C23FE0BC_Struct_2_EB0EC8FD82A4A4D5
{
	static ::System::Collections::Generic::IEqualityComparer_1<::Class_1_0A2BED24C23FE0BC_Struct_2_EB0EC8FD82A4A4D5>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::IEqualityComparer_1<::Class_1_0A2BED24C23FE0BC_Struct_2_EB0EC8FD82A4A4D5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2BED24C23FE0BC_Struct_2_EB0EC8FD82A4A4D5_TypeDefinitionIndex)->GetStaticField(0x79A0);
	}
	::System::String* Field_2_7; // 0x10
	::System::String* Field_2_6; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC_STRUCT_2_EB0EC8FD82A4A4D5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC_STRUCT_2_EB0EC8FD82A4A4D5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEqualityComparer_1<::Class_1_0A2BED24C23FE0BC_Struct_2_EB0EC8FD82A4A4D5>* Method_2_EBB707233FDC6BEB()
	{
		return ((::System::Collections::Generic::IEqualityComparer_1<::Class_1_0A2BED24C23FE0BC_Struct_2_EB0EC8FD82A4A4D5>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC_STRUCT_2_EB0EC8FD82A4A4D5_METHOD_2_EBB707233FDC6BEB_OFFSET))();
	}
};
