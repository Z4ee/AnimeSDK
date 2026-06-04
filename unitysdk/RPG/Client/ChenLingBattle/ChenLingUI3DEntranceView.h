#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW_REPLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0xB5BD550)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW_SETSTAGE_OFFSET UNITYSDK_OFFSET(0xB5BCE70)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BDE00)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__GETDECKID_OFFSET UNITYSDK_OFFSET(0xB5BD1F0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__GETRANDOMDECK_OFFSET UNITYSDK_OFFSET(0xB5BD720)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__GETSOLDIERMODELPATH_OFFSET UNITYSDK_OFFSET(0xB5BD3E0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__SHOWTIMELINE_OFFSET UNITYSDK_OFFSET(0xB5BDB60)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingUI3DEntranceView_TypeDefinitionIndex = 70789;

	class ChenLingUI3DEntranceView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* Anchors; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>* _TimeLines; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _Models; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetStage(::System::UInt32 a1, ::RPG::Client::UIPrefabLoader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::UIPrefabLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW_SETSTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void ReplayTimeLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW_REPLAYTIMELINE_OFFSET))(this);
		}

		::System::UInt32 _GetDeckID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__GETDECKID_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRandomDeck()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__GETRANDOMDECK_OFFSET))(this);
		}

		::System::String* _GetSoldierModelPath(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__GETSOLDIERMODELPATH_OFFSET))(this, a1);
		}

		::System::Void _ShowTimeLine(::UnityEngine::Transform* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW__SHOWTIMELINE_OFFSET))(this, a1, a2);
		}
	};
}
