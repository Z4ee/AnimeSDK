#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_EVENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x16056030)
#define SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x16055F80)
#define SPINE_EVENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x16055F90)
#define SPINE_EVENTTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16056260)
#define SPINE_EVENTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x16055F00)

namespace Spine
{
	inline static constexpr unsigned int EventTimeline_TypeDefinitionIndex = 38323;

	class EventTimeline : public ::Spine::Timeline
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_propertyIds()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EventTimeline_TypeDefinitionIndex)->GetStaticField(0x52010);
		}
		::Il2CppArray<::Spine::Event*>* events; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE__CCTOR_OFFSET))();
		}

		::Il2CppArray<::Spine::Event*>* get_Events()
		{
			return ((::Il2CppArray<::Spine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_SETFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
