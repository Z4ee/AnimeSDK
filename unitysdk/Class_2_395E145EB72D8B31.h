#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_395E145EB72D8B31_METHOD_2_0EAB633F54C44808_OFFSET UNITYSDK_OFFSET(0x163391D0)
#define CLASS_2_395E145EB72D8B31_METHOD_2_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0x16339020)
#define CLASS_2_395E145EB72D8B31_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x16338FC0)
#define CLASS_2_395E145EB72D8B31__CTOR_OFFSET UNITYSDK_OFFSET(0x16339390)

inline static constexpr unsigned int Class_2_395E145EB72D8B31_TypeDefinitionIndex = 49241;

class Class_2_395E145EB72D8B31 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_395E145EB72D8B31__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_395E145EB72D8B31_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EAB633F54C44808(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_395E145EB72D8B31_METHOD_2_0EAB633F54C44808_OFFSET))(this, a1);
	}

	::System::Void Method_2_36726F9E10ADB55F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_395E145EB72D8B31_METHOD_2_36726F9E10ADB55F_OFFSET))(this);
	}
};
