#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATCHANIMATIONNPCRANDOMCOMBINATIONCOLLECTION_BATCHANIMATIONNPCRANDOMCOMBINATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE1320)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationNPCRandomCombinationCollection_BatchAnimationNPCRandomCombinationConfig_TypeDefinitionIndex = 55378;

	class BatchAnimationNPCRandomCombinationCollection_BatchAnimationNPCRandomCombinationConfig : public ::System::Object
	{
	public:
		::System::Int32 PartIndex; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* VariantKeyList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONNPCRANDOMCOMBINATIONCOLLECTION_BATCHANIMATIONNPCRANDOMCOMBINATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
