#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class Timeline; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define SPINE_ANIMATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1F9C7780)
#define SPINE_ANIMATION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1F9C76B0)
#define SPINE_ANIMATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F9C76D0)
#define SPINE_ANIMATION_GET_TIMELINES_OFFSET UNITYSDK_OFFSET(0x1F9C7690)
#define SPINE_ANIMATION_HASTIMELINE_OFFSET UNITYSDK_OFFSET(0x1F9C76E0)
#define SPINE_ANIMATION_SETTIMELINES_OFFSET UNITYSDK_OFFSET(0x1F9C7320)
#define SPINE_ANIMATION_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1F9C76C0)
#define SPINE_ANIMATION_SET_TIMELINES_OFFSET UNITYSDK_OFFSET(0x1F9C76A0)
#define SPINE_ANIMATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9C7930)
#define SPINE_ANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C7280)

namespace Spine
{
	inline static constexpr unsigned int Animation_TypeDefinitionIndex = 33433;

	class Animation : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* timelineIds; // 0x18
		::Spine::ExposedList_1<::Spine::Timeline*>* timelines; // 0x20
		::System::Single duration; // 0x28

		::System::Void _ctor(::System::String* name, ::Spine::ExposedList_1<::Spine::Timeline*>* timelines, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Spine::ExposedList_1<::Spine::Timeline*>*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATION__CTOR_OFFSET))(this, name, timelines, duration);
		}

		::Spine::ExposedList_1<::Spine::Timeline*>* get_Timelines()
		{
			return ((::Spine::ExposedList_1<::Spine::Timeline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_TIMELINES_OFFSET))(this);
		}

		::System::Void set_Timelines(::Spine::ExposedList_1<::Spine::Timeline*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Timeline*>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SET_TIMELINES_OFFSET))(this, value);
		}

		::System::Void SetTimelines(::Spine::ExposedList_1<::Spine::Timeline*>* timelines)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Timeline*>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SETTIMELINES_OFFSET))(this, timelines);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SET_DURATION_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_NAME_OFFSET))(this);
		}

		::System::Boolean HasTimeline(::Il2CppArray<::System::String*>* propertyIds)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_HASTIMELINE_OFFSET))(this, propertyIds);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::System::Boolean loop, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::System::Boolean, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_APPLY_OFFSET))(this, skeleton, lastTime, time, loop, events, alpha, blend, direction);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_TOSTRING_OFFSET))(this);
		}
	};
}
