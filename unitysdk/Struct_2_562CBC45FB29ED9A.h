#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_562CBC45FB29ED9A_GET_ID_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define STRUCT_2_562CBC45FB29ED9A_GET_VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x161E0)
#define STRUCT_2_562CBC45FB29ED9A__CTOR_OFFSET UNITYSDK_OFFSET(0x3B226C0)

inline static constexpr unsigned int Struct_2_562CBC45FB29ED9A_TypeDefinitionIndex = 79182;

struct alignas(8) Struct_2_562CBC45FB29ED9A
{
	::System::Object* _ViewModel_k__BackingField; // 0x10
	::System::String* _Id_k__BackingField; // 0x18

	::System::Void _ctor(::System::Object* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_562CBC45FB29ED9A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Object* get_ViewModel()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_562CBC45FB29ED9A_GET_VIEWMODEL_OFFSET))(this);
	}

	::System::String* get_Id()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_562CBC45FB29ED9A_GET_ID_OFFSET))(this);
	}
};
