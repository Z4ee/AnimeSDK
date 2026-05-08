#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class FeaturePointRef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_FEATUREPOINTREFLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xEC76B10)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FeaturePointRefList_TypeDefinitionIndex = 61534;

	class FeaturePointRefList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::FeaturePointRef*>* pointList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FEATUREPOINTREFLIST__CTOR_OFFSET))(this);
		}
	};
}
