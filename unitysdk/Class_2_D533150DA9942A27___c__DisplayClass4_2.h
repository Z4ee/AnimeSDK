#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D533150DA9942A27;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x118517B0)
#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_2__ONTASKBEGIN_B__2_OFFSET UNITYSDK_OFFSET(0x118517C0)

inline static constexpr unsigned int Class_2_D533150DA9942A27___c__DisplayClass4_2_TypeDefinitionIndex = 51962;

class Class_2_D533150DA9942A27___c__DisplayClass4_2 : public ::System::Object
{
public:
	::Class_2_D533150DA9942A27* __4__this; // 0x10
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks; // 0x18
	::UnityEngine::Timeline::TimelineAsset* timelineAsset; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_2__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Playables::PlayableAsset* asset)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_2__ONTASKBEGIN_B__2_OFFSET))(this, director, asset);
	}
};
