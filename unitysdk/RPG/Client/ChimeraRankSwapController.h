#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ChimeraRankSwapItem; }
namespace RPG::Client { class ChimeraTeamData; }
namespace RPG::Client { class VirtualRankChimeraTeam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B603CF0)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_CREATEVIRTUALTEAMLIST_OFFSET UNITYSDK_OFFSET(0x1B6046C0)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_STARTRANKINCREASEANDSWAP_OFFSET UNITYSDK_OFFSET(0x1B604660)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B603FA0)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6053E0)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__GETTARGETMAXSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0x1B605000)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__INITVIRTUALTEAMRANK_OFFSET UNITYSDK_OFFSET(0x1B604A50)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__ONRANKINCREASEFINISH_OFFSET UNITYSDK_OFFSET(0x1B604180)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__REFRESHVIRTUALTEAMRANK_OFFSET UNITYSDK_OFFSET(0x1B6044A0)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__VIRTUALTEAMINCREASE_OFFSET UNITYSDK_OFFSET(0x1B6041E0)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___REFRESHVIRTUALTEAMRANK_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B6053F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraRankSwapController_TypeDefinitionIndex = 72403;

	class ChimeraRankSwapController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single ChangeTime; // 0x18
		::System::Single ItemShortenTime; // 0x1C
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraRankSwapItem*>* SwapItems; // 0x20
		::System::Boolean _IsPlaying; // 0x28
		::System::Single _CurrentTime; // 0x2C
		::System::Collections::Generic::List_1<::RPG::Client::VirtualRankChimeraTeam*>* _VirtualTeamList; // 0x30
		::System::Single _MaxSliderValue; // 0x38
		::System::Int32 _MaxIncreaseValue; // 0x3C
		::System::Action_2<::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean>* _ItemUpdateCallback; // 0x40
		::System::Action* _IncreaseFinishCallback; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartRankIncreaseAndSwap(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_STARTRANKINCREASEANDSWAP_OFFSET))(this, a1);
		}

		::System::Void CreateVirtualTeamList(::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* a2, ::System::Action_1<::System::Int32>* a3, ::System::Action_2<::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*, ::System::Action_1<::System::Int32>*, ::System::Action_2<::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER_CREATEVIRTUALTEAMLIST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _VirtualTeamIncrease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__VIRTUALTEAMINCREASE_OFFSET))(this);
		}

		::System::Void _RefreshVirtualTeamRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__REFRESHVIRTUALTEAMRANK_OFFSET))(this);
		}

		::System::Void _InitVirtualTeamRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__INITVIRTUALTEAMRANK_OFFSET))(this);
		}

		::System::Void _OnRankIncreaseFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__ONRANKINCREASEFINISH_OFFSET))(this);
		}

		::System::Single _GetTargetMaxSliderValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER__GETTARGETMAXSLIDERVALUE_OFFSET))(this);
		}

		::System::Void __RefreshVirtualTeamRank_b__5_0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___REFRESHVIRTUALTEAMRANK_B__5_0_OFFSET))(this, a1, a2);
		}
	};
}
