#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd { class NPCPathGraphManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoNPCIndicator_Struct_2_1BCAE928E2A4A392_1_TypeDefinitionIndex = 55102;

	struct alignas(8) MonoNPCIndicator_Struct_2_1BCAE928E2A4A392_1
	{
		::NPCCrowd::NPCPathGraphManager* Field_2_0; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* Field_2_1; // 0x18
	};
}
