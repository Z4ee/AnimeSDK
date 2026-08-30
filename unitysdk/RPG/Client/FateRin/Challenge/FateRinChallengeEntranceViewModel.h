#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_318;
class Class_1_96586C089CD5CA69;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Challenge { class FateRinChallengeLevelInfoViewModel; }
namespace RPG::Client::FateRin::Challenge { class FateRinChallengeTabBtnViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ADD_ONVIEWMODELEXITCONFIRM_OFFSET UNITYSDK_OFFSET(0x1CBFDC60)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CBFCC50)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_EXIT_OFFSET UNITYSDK_OFFSET(0x1CBFDD30)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_INITSELECTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x1CBFDC20)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_ISFIRSTPASSDEEP_OFFSET UNITYSDK_OFFSET(0x1CBFDC40)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_LEVELINFOS_OFFSET UNITYSDK_OFFSET(0x1CBFDA20)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_SHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x1CBFDD20)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_TABBTNS_OFFSET UNITYSDK_OFFSET(0x1CBFDB20)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_REMOVE_ONVIEWMODELEXITCONFIRM_OFFSET UNITYSDK_OFFSET(0x1CBFDCC0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_INITSELECTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x1CBFDC30)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_ISFIRSTPASSDEEP_OFFSET UNITYSDK_OFFSET(0x1CBFDC50)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__BUILDSUBPANELVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1CBFC770)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFC600)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__EXIT_OFFSET UNITYSDK_OFFSET(0x1CBFD4A0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SAVESELECTEDBUFFINDEXES_OFFSET UNITYSDK_OFFSET(0x1CBFD510)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x1CBFD420)

namespace RPG::Client::FateRin::Challenge
{
	inline static constexpr unsigned int FateRinChallengeEntranceViewModel_TypeDefinitionIndex = 79705;

	class FateRinChallengeEntranceViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_96586C089CD5CA69* _Service; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Challenge::FateRinChallengeTabBtnViewModel*>* _TabBtns; // 0x28
		::Class_0_16E4307DCC419505_318* _Exit_k__BackingField; // 0x30
		::RPG::Client::FateRin::ViewModelEventHandler* OnViewModelExitConfirm; // 0x38
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel*>* _LevelInfos; // 0x48
		::Class_0_16E4307DCC419505_318* _ShowResidentReward_k__BackingField; // 0x50
		::System::Boolean _IsFirstPassDeep_k__BackingField; // 0x58
		::System::UInt32 _InitSelectingTabIndex_k__BackingField; // 0x5C

		::System::Void _ctor(::Class_1_E79EE3670D2EC49A* a1, ::Class_1_96586C089CD5CA69* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E79EE3670D2EC49A*, ::Class_1_96586C089CD5CA69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void _BuildSubPanelViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__BUILDSUBPANELVIEWMODELS_OFFSET))(this);
		}

		::System::Void _ShowResidentReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SHOWRESIDENTREWARD_OFFSET))(this);
		}

		::System::Void _Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__EXIT_OFFSET))(this);
		}

		::System::Void _SaveSelectedBuffIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL__SAVESELECTEDBUFFINDEXES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel*>* get_LevelInfos()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_LEVELINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeTabBtnViewModel*>* get_TabBtns()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Challenge::FateRinChallengeTabBtnViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_TABBTNS_OFFSET))(this);
		}

		::System::UInt32 get_InitSelectingTabIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_INITSELECTINGTABINDEX_OFFSET))(this);
		}

		::System::Void set_InitSelectingTabIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_INITSELECTINGTABINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPassDeep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_ISFIRSTPASSDEEP_OFFSET))(this);
		}

		::System::Void set_IsFirstPassDeep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_SET_ISFIRSTPASSDEEP_OFFSET))(this, a1);
		}

		::System::Void add_OnViewModelExitConfirm(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_ADD_ONVIEWMODELEXITCONFIRM_OFFSET))(this, a1);
		}

		::System::Void remove_OnViewModelExitConfirm(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_REMOVE_ONVIEWMODELEXITCONFIRM_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* get_ShowResidentReward()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_SHOWRESIDENTREWARD_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_Exit()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGEENTRANCEVIEWMODEL_GET_EXIT_OFFSET))(this);
		}
	};
}
