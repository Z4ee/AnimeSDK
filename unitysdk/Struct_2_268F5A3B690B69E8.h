#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_268F5A3B690B69E8_TypeDefinitionIndex = 76570;

struct alignas(8) Struct_2_268F5A3B690B69E8
{
	::System::Int32 Field_2_3; // 0x10
	::UnityEngine::Vector3 Field_2_2; // 0x14
	::System::Single Field_2_1; // 0x20
	::System::String* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x30
};
