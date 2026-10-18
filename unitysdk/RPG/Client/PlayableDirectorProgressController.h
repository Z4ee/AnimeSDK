#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDBE1780)
#define RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDBE19F0)
#define RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDBE1850)
#define RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDBE1AD0)
#define RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER__LOGERROR_OFFSET UNITYSDK_OFFSET(0xDBE1970)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayableDirectorProgressController_TypeDefinitionIndex = 68898;

	class PlayableDirectorProgressController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Progress; // 0x18
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Void _LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEDIRECTORPROGRESSCONTROLLER__LOGERROR_OFFSET))(a1);
		}
	};
}
