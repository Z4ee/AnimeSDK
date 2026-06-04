#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_DRAWORDERTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1AC553B0)
#define SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET UNITYSDK_OFFSET(0x1AC55300)
#define SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1AC55310)
#define SPINE_DRAWORDERTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC55640)
#define SPINE_DRAWORDERTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC55240)

namespace Spine
{
	inline static constexpr unsigned int DrawOrderTimeline_TypeDefinitionIndex = 36683;

	class DrawOrderTimeline : public ::Spine::Timeline
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_propertyIds()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrawOrderTimeline_TypeDefinitionIndex)->GetStaticField(0x2900);
		}
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* drawOrders; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE__CCTOR_OFFSET))();
		}

		::Il2CppArray<::Il2CppArray<::System::Int32>*>* get_DrawOrders()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
