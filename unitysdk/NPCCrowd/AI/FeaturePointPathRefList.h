#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class FeaturePointPathRef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_FEATUREPOINTPATHREFLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xF0CA380)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FeaturePointPathRefList_TypeDefinitionIndex = 85749;

	class FeaturePointPathRefList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::FeaturePointPathRef*>* pathList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FEATUREPOINTPATHREFLIST__CTOR_OFFSET))(this);
		}
	};
}
