#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorLink.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORLINKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x109F2150)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorLinkConfig_TypeDefinitionIndex = 74900;

	class AttractorLinkConfig : public ::System::Object
	{
	public:
		::System::Int32 rootInstanceID; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLink>* attractorLinks; // 0x18
		::Il2CppArray<::System::Int32>* linkInstances; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORLINKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
