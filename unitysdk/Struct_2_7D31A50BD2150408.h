#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_7D31A50BD2150408__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

inline static constexpr unsigned int Struct_2_7D31A50BD2150408_TypeDefinitionIndex = 46817;

struct alignas(8) Struct_2_7D31A50BD2150408
{
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + STRUCT_2_7D31A50BD2150408__CTOR_OFFSET))(this, a1);
	}
};
