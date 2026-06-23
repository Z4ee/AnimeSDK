#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

inline static constexpr unsigned int Struct_2_C70A12CE5BBC6553_TypeDefinitionIndex = 77243;

struct alignas(8) Struct_2_C70A12CE5BBC6553
{
	::System::UInt32 Field_2_0; // 0x10
	::Foundation::Unreal::FGameplayTagContainer Field_2_1; // 0x18
	::Foundation::Unreal::FGameplayTagQuery* Field_2_2; // 0x88
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::RenderDataHandle>* Field_2_3; // 0x90
	::System::String* Field_2_4; // 0x98
};
