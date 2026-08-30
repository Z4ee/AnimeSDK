#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D533150DA9942A27;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFFF690)
#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_1__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0xBFFF6A0)

inline static constexpr unsigned int Class_2_D533150DA9942A27___c__DisplayClass4_1_TypeDefinitionIndex = 56559;

class Class_2_D533150DA9942A27___c__DisplayClass4_1 : public ::System::Object
{
public:
	::Class_2_D533150DA9942A27* __4__this; // 0x10
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_1__ONTASKBEGIN_B__1_OFFSET))(this, a1, a2);
	}
};
