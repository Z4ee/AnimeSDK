#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_DRAWORDERTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FB902D0)
#define SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET UNITYSDK_OFFSET(0x1FB90200)
#define SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FB90210)
#define SPINE_DRAWORDERTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB905A0)
#define SPINE_DRAWORDERTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB900D0)

namespace Spine
{
	inline static constexpr unsigned int DrawOrderTimeline_TypeDefinitionIndex = 33461;

	class DrawOrderTimeline : public ::Spine::Timeline
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_propertyIds()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrawOrderTimeline_TypeDefinitionIndex)->GetStaticField(0x28A00);
		}
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* drawOrders; // 0x20

		::System::Void _ctor(::System::Int32 frameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE__CTOR_OFFSET))(this, frameCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE__CCTOR_OFFSET))();
		}

		::Il2CppArray<::Il2CppArray<::System::Int32>*>* get_DrawOrders()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::Il2CppArray<::System::Int32>* drawOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET))(this, frame, time, drawOrder);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
