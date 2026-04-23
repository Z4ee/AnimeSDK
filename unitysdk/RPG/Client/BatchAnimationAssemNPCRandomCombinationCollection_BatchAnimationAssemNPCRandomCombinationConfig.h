#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_BATCHANIMATIONASSEMNPCRANDOMCOMBINATIONCOLLECTION_BATCHANIMATIONASSEMNPCRANDOMCOMBINATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE0EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationAssemNPCRandomCombinationCollection_BatchAnimationAssemNPCRandomCombinationConfig_TypeDefinitionIndex = 55380;

	class BatchAnimationAssemNPCRandomCombinationCollection_BatchAnimationAssemNPCRandomCombinationConfig : public ::System::Object
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* Feature; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONASSEMNPCRANDOMCOMBINATIONCOLLECTION_BATCHANIMATIONASSEMNPCRANDOMCOMBINATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
