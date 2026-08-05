#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BE9205D119086684.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_4FB7B225E2F33836__CTOR_OFFSET UNITYSDK_OFFSET(0x8B3D70)

inline static constexpr unsigned int Struct_2_4FB7B225E2F33836_TypeDefinitionIndex = 11899;

struct alignas(8) Struct_2_4FB7B225E2F33836
{
	::System::Collections::Generic::List_1<::Struct_2_BE9205D119086684>* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_4FB7B225E2F33836__CTOR_OFFSET))(this, a1);
	}
};
