#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class AnimatorEventPatternWrap; }
namespace NPCCrowd::Animation { class AnimatorZoneSegmentWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NPCCROWD_ANIMATION_PROCESSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEAAD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ProcessItem_TypeDefinitionIndex = 77928;

	class ProcessItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* readyZones; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* curZones; // 0x18
		::NPCCrowd::Animation::AnimatorEventPatternWrap* pattenWrap; // 0x20
		::System::String* clipName; // 0x28
		::System::Single playNormalizedTime; // 0x30
		::System::Int32 lastEventIdx; // 0x34
		::System::Int32 clipID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PROCESSITEM__CTOR_OFFSET))(this);
		}
	};
}
