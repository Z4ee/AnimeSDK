#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_903FDA347BBAD2AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7D66B0)
#define STRUCT_2_903FDA347BBAD2AB__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB090)

inline static constexpr unsigned int Struct_2_903FDA347BBAD2AB_TypeDefinitionIndex = 58647;

struct alignas(8) Struct_2_903FDA347BBAD2AB
{
	static ::Struct_2_903FDA347BBAD2AB* StaticGet_Field_2_3()
	{
		return (::Struct_2_903FDA347BBAD2AB*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_903FDA347BBAD2AB_TypeDefinitionIndex)->GetStaticField(0x35520);
	}
	::System::Boolean Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x20

	::System::Void _ctor(::System::Boolean a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_903FDA347BBAD2AB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_903FDA347BBAD2AB__CCTOR_OFFSET))();
	}
};
