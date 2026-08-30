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

#define SPINE_ANIMATION_APPLY_OFFSET UNITYSDK_OFFSET(0x16046350)
#define SPINE_ANIMATION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x160462B0)
#define SPINE_ANIMATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x160462D0)
#define SPINE_ANIMATION_GET_TIMELINES_OFFSET UNITYSDK_OFFSET(0x16046290)
#define SPINE_ANIMATION_HASTIMELINE_OFFSET UNITYSDK_OFFSET(0x160462E0)
#define SPINE_ANIMATION_SETTIMELINES_OFFSET UNITYSDK_OFFSET(0x16045F80)
#define SPINE_ANIMATION_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x160462C0)
#define SPINE_ANIMATION_SET_TIMELINES_OFFSET UNITYSDK_OFFSET(0x160462A0)
#define SPINE_ANIMATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16046570)
#define SPINE_ANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16045F10)

namespace Spine
{
	inline static constexpr unsigned int Animation_TypeDefinitionIndex = 38296;

	class Animation : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* timelineIds; // 0x18
		::Spine::ExposedList_1<::Spine::Timeline*>* timelines; // 0x20
		::System::Single duration; // 0x28

		::System::Void _ctor(::System::String* a1, ::Spine::ExposedList_1<::Spine::Timeline*>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Spine::ExposedList_1<::Spine::Timeline*>*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Spine::ExposedList_1<::Spine::Timeline*>* get_Timelines()
		{
			return ((::Spine::ExposedList_1<::Spine::Timeline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_TIMELINES_OFFSET))(this);
		}

		::System::Void set_Timelines(::Spine::ExposedList_1<::Spine::Timeline*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Timeline*>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SET_TIMELINES_OFFSET))(this, a1);
		}

		::System::Void SetTimelines(::Spine::ExposedList_1<::Spine::Timeline*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Timeline*>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SETTIMELINES_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SET_DURATION_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_NAME_OFFSET))(this);
		}

		::System::Boolean HasTimeline(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_HASTIMELINE_OFFSET))(this, a1);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::Spine::ExposedList_1<::Spine::Event*>* a5, ::System::Single a6, ::Spine::MixBlend a7, ::Spine::MixDirection a8)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::System::Boolean, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_TOSTRING_OFFSET))(this);
		}
	};
}
