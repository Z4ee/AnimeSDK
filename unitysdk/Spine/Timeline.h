#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TIMELINE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B5CF370)
#define SPINE_TIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1B5CF4C0)
#define SPINE_TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1B5CF4B0)
#define SPINE_TIMELINE_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x1B5CF4A0)
#define SPINE_TIMELINE_GET_PROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x1B5CF490)
#define SPINE_TIMELINE_SEARCH_1_OFFSET UNITYSDK_OFFSET(0x1B5B2420)
#define SPINE_TIMELINE_SEARCH_OFFSET UNITYSDK_OFFSET(0x1B5CF4F0)
#define SPINE_TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CF3F0)

namespace Spine
{
	inline static constexpr unsigned int Timeline_TypeDefinitionIndex = 31251;

	class Timeline : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* frames; // 0x10
		::Il2CppArray<::System::String*>* propertyIds; // 0x18

		::System::Void _ctor(::System::Int32 frameCount, ::Il2CppArray<::System::String*>* propertyIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SPINE_TIMELINE__CTOR_OFFSET))(this, frameCount, propertyIds);
		}

		::Il2CppArray<::System::String*>* get_PropertyIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_PROPERTYIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_Frames()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMES_OFFSET))(this);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_DURATION_OFFSET))(this);
		}

		static ::System::Int32 Search(::Il2CppArray<::System::Single>* frames, ::System::Single time)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_OFFSET))(frames, time);
		}

		static ::System::Int32 Search_1(::Il2CppArray<::System::Single>* frames, ::System::Single time, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_1_OFFSET))(frames, time, step);
		}
	};
}
