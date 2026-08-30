#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1313;
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_FILLPOSITION_OFFSET UNITYSDK_OFFSET(0x1A8F3D20)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A8F3AF0)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A8F4CC0)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_RUN_OFFSET UNITYSDK_OFFSET(0x1A8F4460)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x1A8F3ED0)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_TRANSITIONBETWEENAREAS_OFFSET UNITYSDK_OFFSET(0x1A8F3B40)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_TRANSITIONTO_OFFSET UNITYSDK_OFFSET(0x1A8F40B0)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A8F4620)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F4FF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraTransitionTeamManager_TypeDefinitionIndex = 77960;

	class ChimeraTransitionTeamManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1313*>* EMIFAOACJNI; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1313*>* ELDNDNCEDIB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void TransitionBetweenAreas(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_TRANSITIONBETWEENAREAS_OFFSET))(this, a1, a2);
		}

		::System::Void FillPosition(::System::Single a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_FILLPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartTransition(::System::UInt32 a1, ::System::Int32 a2, ::System::Action* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_STARTTRANSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TransitionTo(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_TRANSITIONTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Run(::RPG::GameCore::ChimeraBattleRunOut* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleRunOut*, ::System::UInt32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_RUN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER_LATEUPDATE_OFFSET))(this);
		}
	};
}
