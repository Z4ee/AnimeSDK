#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TIMELINE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D26E610)
#define SPINE_TIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1D26E580)
#define SPINE_TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1D26E570)
#define SPINE_TIMELINE_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x1D26E560)
#define SPINE_TIMELINE_GET_PROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x1D26E550)
#define SPINE_TIMELINE_SEARCH_1_OFFSET UNITYSDK_OFFSET(0x1D26E700)
#define SPINE_TIMELINE_SEARCH_OFFSET UNITYSDK_OFFSET(0x1D26E6B0)
#define SPINE_TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26E470)

namespace Spine
{
	inline static constexpr unsigned int Timeline_TypeDefinitionIndex = 37441;

	class Timeline : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* propertyIds; // 0x10
		::Il2CppArray<::System::Single>* frames; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SPINE_TIMELINE__CTOR_OFFSET))(this, a1, a2);
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

		static ::System::Int32 Search(::Il2CppArray<::System::Single>* a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_OFFSET))(a1, a2);
		}

		static ::System::Int32 Search_1(::Il2CppArray<::System::Single>* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_1_OFFSET))(a1, a2, a3);
		}
	};
}
