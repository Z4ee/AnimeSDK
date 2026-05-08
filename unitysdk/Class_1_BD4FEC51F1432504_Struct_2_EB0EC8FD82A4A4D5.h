#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define CLASS_1_BD4FEC51F1432504_STRUCT_2_EB0EC8FD82A4A4D5_METHOD_2_EBB707233FDC6BEB_OFFSET UNITYSDK_OFFSET(0x136BF1B0)
#define CLASS_1_BD4FEC51F1432504_STRUCT_2_EB0EC8FD82A4A4D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x136BF170)
#define CLASS_1_BD4FEC51F1432504_STRUCT_2_EB0EC8FD82A4A4D5__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

inline static constexpr unsigned int Class_1_BD4FEC51F1432504_Struct_2_EB0EC8FD82A4A4D5_TypeDefinitionIndex = 12196;

struct alignas(8) Class_1_BD4FEC51F1432504_Struct_2_EB0EC8FD82A4A4D5
{
	static ::System::Collections::Generic::IEqualityComparer_1<::Class_1_BD4FEC51F1432504_Struct_2_EB0EC8FD82A4A4D5>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::IEqualityComparer_1<::Class_1_BD4FEC51F1432504_Struct_2_EB0EC8FD82A4A4D5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD4FEC51F1432504_Struct_2_EB0EC8FD82A4A4D5_TypeDefinitionIndex)->GetStaticField(0x8CA0);
	}
	::System::String* Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD4FEC51F1432504_STRUCT_2_EB0EC8FD82A4A4D5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD4FEC51F1432504_STRUCT_2_EB0EC8FD82A4A4D5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEqualityComparer_1<::Class_1_BD4FEC51F1432504_Struct_2_EB0EC8FD82A4A4D5>* Method_2_EBB707233FDC6BEB()
	{
		return ((::System::Collections::Generic::IEqualityComparer_1<::Class_1_BD4FEC51F1432504_Struct_2_EB0EC8FD82A4A4D5>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD4FEC51F1432504_STRUCT_2_EB0EC8FD82A4A4D5_METHOD_2_EBB707233FDC6BEB_OFFSET))();
	}
};
