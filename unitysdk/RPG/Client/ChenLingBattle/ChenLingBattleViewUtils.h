#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEVIEWUTILS_BINDPLAYABLEDIRECTOR_OFFSET UNITYSDK_OFFSET(0x1964F8F0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEVIEWUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1964FF70)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleViewUtils_TypeDefinitionIndex = 72485;

	class ChenLingBattleViewUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEVIEWUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void BindPlayableDirector(::UnityEngine::Playables::PlayableDirector* a1, ::System::Collections::Generic::List_1<::UnityEngine::Animator*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::Collections::Generic::List_1<::UnityEngine::Animator*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEVIEWUTILS_BINDPLAYABLEDIRECTOR_OFFSET))(a1, a2);
		}
	};
}
