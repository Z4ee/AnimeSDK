#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define CLASS_1_B2056CB2236A3B47_STRUCT_2_EB0EC8FD82A4A4D5_METHOD_2_EBB707233FDC6BEB_OFFSET UNITYSDK_OFFSET(0x1A4BACA0)
#define CLASS_1_B2056CB2236A3B47_STRUCT_2_EB0EC8FD82A4A4D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4BAC60)
#define CLASS_1_B2056CB2236A3B47_STRUCT_2_EB0EC8FD82A4A4D5__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

inline static constexpr unsigned int Class_1_B2056CB2236A3B47_Struct_2_EB0EC8FD82A4A4D5_TypeDefinitionIndex = 18155;

struct alignas(8) Class_1_B2056CB2236A3B47_Struct_2_EB0EC8FD82A4A4D5
{
	static ::System::Collections::Generic::IEqualityComparer_1<::Class_1_B2056CB2236A3B47_Struct_2_EB0EC8FD82A4A4D5>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::IEqualityComparer_1<::Class_1_B2056CB2236A3B47_Struct_2_EB0EC8FD82A4A4D5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2056CB2236A3B47_Struct_2_EB0EC8FD82A4A4D5_TypeDefinitionIndex)->GetStaticField(0x77B0);
	}
	::System::String* Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2056CB2236A3B47_STRUCT_2_EB0EC8FD82A4A4D5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2056CB2236A3B47_STRUCT_2_EB0EC8FD82A4A4D5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEqualityComparer_1<::Class_1_B2056CB2236A3B47_Struct_2_EB0EC8FD82A4A4D5>* Method_2_EBB707233FDC6BEB()
	{
		return ((::System::Collections::Generic::IEqualityComparer_1<::Class_1_B2056CB2236A3B47_Struct_2_EB0EC8FD82A4A4D5>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2056CB2236A3B47_STRUCT_2_EB0EC8FD82A4A4D5_METHOD_2_EBB707233FDC6BEB_OFFSET))();
	}
};
