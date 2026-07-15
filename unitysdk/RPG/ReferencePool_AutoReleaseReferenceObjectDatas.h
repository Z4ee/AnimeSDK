#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG { class IAutoReleaseReferenceObject; }
namespace RPG { class ReferencePool_ReferenceCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_AutoReleaseReferenceObjectDatas_TypeDefinitionIndex = 5626;

	struct alignas(8) ReferencePool_AutoReleaseReferenceObjectDatas
	{
		::System::Collections::Generic::List_1<::RPG::IAutoReleaseReferenceObject*>* AllocList; // 0x10
		::RPG::ReferencePool_ReferenceCollection* Collection; // 0x18
	};
}
