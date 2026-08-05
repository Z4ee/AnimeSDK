#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_EVENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1F77EC40)
#define SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1F77EB60)
#define SPINE_EVENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1F77EB70)
#define SPINE_EVENTTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F77EEC0)
#define SPINE_EVENTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F77EA30)

namespace Spine
{
	inline static constexpr unsigned int EventTimeline_TypeDefinitionIndex = 33460;

	class EventTimeline : public ::Spine::Timeline
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_propertyIds()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EventTimeline_TypeDefinitionIndex)->GetStaticField(0x289C0);
		}
		::Il2CppArray<::Spine::Event*>* events; // 0x20

		::System::Void _ctor(::System::Int32 frameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE__CTOR_OFFSET))(this, frameCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE__CCTOR_OFFSET))();
		}

		::Il2CppArray<::Spine::Event*>* get_Events()
		{
			return ((::Il2CppArray<::Spine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_SETFRAME_OFFSET))(this, frame, e);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
