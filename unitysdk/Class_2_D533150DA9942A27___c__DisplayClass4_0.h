#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_947F5BB3E2AFC4CE;
class Class_2_D533150DA9942A27;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0BB30)
#define CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x14D145F0)

inline static constexpr unsigned int Class_2_D533150DA9942A27___c__DisplayClass4_0_TypeDefinitionIndex = 53838;

class Class_2_D533150DA9942A27___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_D533150DA9942A27* __4__this; // 0x10
	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* t; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__DISPLAYCLASS4_0__ONTASKBEGIN_B__0_OFFSET))(this, a1, a2);
	}
};
