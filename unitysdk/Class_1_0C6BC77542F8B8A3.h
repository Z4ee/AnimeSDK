#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1498;
class Class_0_16E4307DCC419505_1499;
class Class_0_16E4307DCC419505_397;
class Class_1_1294FEF8E985635C;
class Class_1_6D23404D9BF071A2;
class Class_1_7AB88D713F5121B3_62;
class Class_1_89212D3B15B3DD66;
class Class_1_C35866DE18F0174D;
class Class_1_DDF2C200AE487775;
class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinResBarViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointPhaseViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_0C6BC77542F8B8A3_ADD_ONDETAILCHANGED_OFFSET UNITYSDK_OFFSET(0x158E0BC0)
#define CLASS_1_0C6BC77542F8B8A3_GET_ACTIVATETALENTPOINTSERVICE_OFFSET UNITYSDK_OFFSET(0x158E0CC0)
#define CLASS_1_0C6BC77542F8B8A3_GET_ACTORS_OFFSET UNITYSDK_OFFSET(0x158E0980)
#define CLASS_1_0C6BC77542F8B8A3_GET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x158E0C80)
#define CLASS_1_0C6BC77542F8B8A3_GET_DEFAULTSELECTEDPOINT_OFFSET UNITYSDK_OFFSET(0x158E0D40)
#define CLASS_1_0C6BC77542F8B8A3_GET_DEFAULTSELECTIONSERVICE_OFFSET UNITYSDK_OFFSET(0x158E0CE0)
#define CLASS_1_0C6BC77542F8B8A3_GET_DETAILPRESENTER_OFFSET UNITYSDK_OFFSET(0x158E0D20)
#define CLASS_1_0C6BC77542F8B8A3_GET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0x158E0940)
#define CLASS_1_0C6BC77542F8B8A3_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x158E0CA0)
#define CLASS_1_0C6BC77542F8B8A3_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x158E0960)
#define CLASS_1_0C6BC77542F8B8A3_GET_PHASES_OFFSET UNITYSDK_OFFSET(0x158E09A0)
#define CLASS_1_0C6BC77542F8B8A3_GET_RUNTIMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0x158E0D00)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_16B7F88AB9CB876E_OFFSET UNITYSDK_OFFSET(0x158E2A10)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_194D6A6E31169C9A_OFFSET UNITYSDK_OFFSET(0x158E6AC0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x158E6B10)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x158E0F50)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x158E1B40)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158E0EF0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x158E69D0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_53B5ACD19C7587DE_OFFSET UNITYSDK_OFFSET(0x158E09C0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_6F4DA80FB62F121B_OFFSET UNITYSDK_OFFSET(0x158E6C20)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x158E68B0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_93A279329CC820AA_OFFSET UNITYSDK_OFFSET(0x158E6A50)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0x158E0E20)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x158E0D60)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x158E44F0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x158E44A0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x158E5FA0)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x158E1C10)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_E90E6579F1683B91_OFFSET UNITYSDK_OFFSET(0x158E0A00)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_E9B61C0DD983CA9F_OFFSET UNITYSDK_OFFSET(0x158E3910)
#define CLASS_1_0C6BC77542F8B8A3_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x158E53B0)
#define CLASS_1_0C6BC77542F8B8A3_REMOVE_ONDETAILCHANGED_OFFSET UNITYSDK_OFFSET(0x158E0C20)
#define CLASS_1_0C6BC77542F8B8A3_SET_ACTIVATETALENTPOINTSERVICE_OFFSET UNITYSDK_OFFSET(0x158E0CD0)
#define CLASS_1_0C6BC77542F8B8A3_SET_ACTORS_OFFSET UNITYSDK_OFFSET(0x158E0990)
#define CLASS_1_0C6BC77542F8B8A3_SET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x158E0C90)
#define CLASS_1_0C6BC77542F8B8A3_SET_DEFAULTSELECTEDPOINT_OFFSET UNITYSDK_OFFSET(0x158E0D50)
#define CLASS_1_0C6BC77542F8B8A3_SET_DEFAULTSELECTIONSERVICE_OFFSET UNITYSDK_OFFSET(0x158E0CF0)
#define CLASS_1_0C6BC77542F8B8A3_SET_DETAILPRESENTER_OFFSET UNITYSDK_OFFSET(0x158E0D30)
#define CLASS_1_0C6BC77542F8B8A3_SET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0x158E0950)
#define CLASS_1_0C6BC77542F8B8A3_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x158E0CB0)
#define CLASS_1_0C6BC77542F8B8A3_SET_PATHS_OFFSET UNITYSDK_OFFSET(0x158E0970)
#define CLASS_1_0C6BC77542F8B8A3_SET_PHASES_OFFSET UNITYSDK_OFFSET(0x158E09B0)
#define CLASS_1_0C6BC77542F8B8A3_SET_RUNTIMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0x158E0D10)
#define CLASS_1_0C6BC77542F8B8A3__CTOR_OFFSET UNITYSDK_OFFSET(0x158E0EE0)
#define CLASS_1_0C6BC77542F8B8A3___REFRESHDETAIL_B__75_0_OFFSET UNITYSDK_OFFSET(0x158E6C90)
#define CLASS_1_0C6BC77542F8B8A3___REFRESHDETAIL_B__75_1_OFFSET UNITYSDK_OFFSET(0x158E6CD0)

inline static constexpr unsigned int Class_1_0C6BC77542F8B8A3_TypeDefinitionIndex = 79758;

class Class_1_0C6BC77542F8B8A3 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* _CoinResBar_k__BackingField; // 0x10
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* NPAAOEPEOGH; // 0x18
	::Sofa::Core::SimpleCommand* LCGBLFOHNFA; // 0x20
	::Class_1_6D23404D9BF071A2* _RuntimeStateService_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_1498* FALCIBDCBJK; // 0x30
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>* _Paths_k__BackingField; // 0x38
	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* _Phases_k__BackingField; // 0x40
	::System::Action* MHDDNJLMBFI; // 0x48
	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* _Actors_k__BackingField; // 0x50
	::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* FDMGILPMHDK; // 0x58
	::Class_1_C35866DE18F0174D* _DetailPresenter_k__BackingField; // 0x60
	::Sofa::Core::SimpleCommand* NJPPIINKNLO; // 0x68
	::System::Action* OnDetailChanged; // 0x70
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* _DefaultSelectedPoint_k__BackingField; // 0x78
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* PDONECEHEBH; // 0x80
	::Class_1_89212D3B15B3DD66* _DefaultSelectionService_k__BackingField; // 0x88
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* MGNHPBBIDIN; // 0x90
	::Class_1_1294FEF8E985635C* _Messenger_k__BackingField; // 0x98
	::Class_0_16E4307DCC419505_1499* _FlowCoordinator_k__BackingField; // 0xA0
	::Class_1_DDF2C200AE487775* _ActivateTalentPointService_k__BackingField; // 0xA8
	::System::Boolean LINNHMPNCJG; // 0xB0

	::System::Void _ctor(::Class_0_16E4307DCC419505_1498* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1498*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1499* get_FlowCoordinator()
	{
		return ((::Class_0_16E4307DCC419505_1499*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_FLOWCOORDINATOR_OFFSET))(this);
	}

	::System::Void set_FlowCoordinator(::Class_0_16E4307DCC419505_1499* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1499*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_FLOWCOORDINATOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>* get_Paths()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_PATHS_OFFSET))(this);
	}

	::System::Void set_Paths(::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_PATHS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* get_Actors()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_ACTORS_OFFSET))(this);
	}

	::System::Void set_Actors(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_ACTORS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* get_Phases()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_PHASES_OFFSET))(this);
	}

	::System::Void set_Phases(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_PHASES_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* Method_1_53B5ACD19C7587DE()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_53B5ACD19C7587DE_OFFSET))(this);
	}

	::System::Void Method_1_E90E6579F1683B91(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_E90E6579F1683B91_OFFSET))(this, a1);
	}

	::System::Void add_OnDetailChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_ADD_ONDETAILCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnDetailChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_REMOVE_ONDETAILCHANGED_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* get_CoinResBar()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_COINRESBAR_OFFSET))(this);
	}

	::System::Void set_CoinResBar(::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_COINRESBAR_OFFSET))(this, a1);
	}

	::Class_1_1294FEF8E985635C* get_Messenger()
	{
		return ((::Class_1_1294FEF8E985635C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_MESSENGER_OFFSET))(this);
	}

	::System::Void set_Messenger(::Class_1_1294FEF8E985635C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_MESSENGER_OFFSET))(this, a1);
	}

	::Class_1_DDF2C200AE487775* get_ActivateTalentPointService()
	{
		return ((::Class_1_DDF2C200AE487775*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_ACTIVATETALENTPOINTSERVICE_OFFSET))(this);
	}

	::System::Void set_ActivateTalentPointService(::Class_1_DDF2C200AE487775* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDF2C200AE487775*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_ACTIVATETALENTPOINTSERVICE_OFFSET))(this, a1);
	}

	::Class_1_89212D3B15B3DD66* get_DefaultSelectionService()
	{
		return ((::Class_1_89212D3B15B3DD66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_DEFAULTSELECTIONSERVICE_OFFSET))(this);
	}

	::System::Void set_DefaultSelectionService(::Class_1_89212D3B15B3DD66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_89212D3B15B3DD66*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_DEFAULTSELECTIONSERVICE_OFFSET))(this, a1);
	}

	::Class_1_6D23404D9BF071A2* get_RuntimeStateService()
	{
		return ((::Class_1_6D23404D9BF071A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_RUNTIMESTATESERVICE_OFFSET))(this);
	}

	::System::Void set_RuntimeStateService(::Class_1_6D23404D9BF071A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D23404D9BF071A2*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_RUNTIMESTATESERVICE_OFFSET))(this, a1);
	}

	::Class_1_C35866DE18F0174D* get_DetailPresenter()
	{
		return ((::Class_1_C35866DE18F0174D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_DETAILPRESENTER_OFFSET))(this);
	}

	::System::Void set_DetailPresenter(::Class_1_C35866DE18F0174D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C35866DE18F0174D*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_DETAILPRESENTER_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* get_DefaultSelectedPoint()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_GET_DEFAULTSELECTEDPOINT_OFFSET))(this);
	}

	::System::Void set_DefaultSelectedPoint(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_SET_DEFAULTSELECTEDPOINT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_93A279329CC820AA(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_93A279329CC820AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_194D6A6E31169C9A(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_194D6A6E31169C9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9B61C0DD983CA9F(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_E9B61C0DD983CA9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_6F4DA80FB62F121B(::System::Object* a1, ::Class_1_7AB88D713F5121B3_62* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_7AB88D713F5121B3_62*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_6F4DA80FB62F121B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_E8F71BC8471C5469_OFFSET))(this);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* Method_1_16B7F88AB9CB876E()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_16B7F88AB9CB876E_OFFSET))(this);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* __RefreshDetail_b__75_0()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3___REFRESHDETAIL_B__75_0_OFFSET))(this);
	}

	::System::Void __RefreshDetail_b__75_1(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0C6BC77542F8B8A3___REFRESHDETAIL_B__75_1_OFFSET))(this, a1);
	}
};
