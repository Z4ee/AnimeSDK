#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/GameItemOfferChangeReason.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/GameItemOffer_ItemCandidate.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_21DCD4640D389503_17;
class Class_1_9ADA4A255864E373;
class Class_1_A3C3725415847C24;
class Class_1_D25A7DF46B5D6238;
namespace RPG::GameCore { class ChenLingFesItemRuleGroupRow; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CHARGEDAYITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x19B96AD0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x19B97390)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x19B96100)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_LASTITEMIDSCHANGEREASON_OFFSET UNITYSDK_OFFSET(0x19B973B0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0x19B95EC0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALEXPANDCOUNT_OFFSET UNITYSDK_OFFSET(0x19B95FB0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALRANDOMCOUNT_OFFSET UNITYSDK_OFFSET(0x19B96120)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_HASITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x19B965E0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_ONAWARD_OFFSET UNITYSDK_OFFSET(0x19B96030)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_RECORDOPCOUNT_OFFSET UNITYSDK_OFFSET(0x19B96140)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REFRESH_OFFSET UNITYSDK_OFFSET(0x19B96B30)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REROLL_OFFSET UNITYSDK_OFFSET(0x19B96640)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTADJUST_OFFSET UNITYSDK_OFFSET(0x19B95EE0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTEXPAND_OFFSET UNITYSDK_OFFSET(0x19B95FD0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETITEMUSED_OFFSET UNITYSDK_OFFSET(0x19B962C0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x19B95DE0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x19B973A0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x19B95CA0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_LASTITEMIDSCHANGEREASON_OFFSET UNITYSDK_OFFSET(0x19B973C0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0x19B95C00)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALEXPANDCOUNT_OFFSET UNITYSDK_OFFSET(0x19B95B60)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALRANDOMCOUNT_OFFSET UNITYSDK_OFFSET(0x19B95D40)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SKIP_OFFSET UNITYSDK_OFFSET(0x19B96990)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTADJUST_OFFSET UNITYSDK_OFFSET(0x19B95E50)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTEXPAND_OFFSET UNITYSDK_OFFSET(0x19B95F40)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19B98020)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDOCCUPIEDCOUNTBYITEMID_OFFSET UNITYSDK_OFFSET(0x19B98410)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B98730)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B95970)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__FILTERCANDIDATESBYMAXPUTDOWN_OFFSET UNITYSDK_OFFSET(0x19B96CA0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__HASANYITEMUSED_OFFSET UNITYSDK_OFFSET(0x19B97330)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x19B98310)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTINT_OFFSET UNITYSDK_OFFSET(0x19B96BB0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMBYRAREWEIGHT_OFFSET UNITYSDK_OFFSET(0x19B973D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMDISTINCTFROMLIST_OFFSET UNITYSDK_OFFSET(0x19B96FC0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__REFRESHITEMSFORSELECTED_OFFSET UNITYSDK_OFFSET(0x19B96740)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__UPDATEITEMS_OFFSET UNITYSDK_OFFSET(0x19B96350)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int GameItemOffer_TypeDefinitionIndex = 73786;

	class GameItemOffer : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::ChenLingFesItemRare>** StaticGet__Rarities()
		{
			return (::Il2CppArray<::RPG::GameCore::ChenLingFesItemRare>**)Il2CppClass::FromTypeDefinitionIndex(GameItemOffer_TypeDefinitionIndex)->GetStaticField(0x39440);
		}
		static ::System::Boolean* StaticGet_DebugEnableAllItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameItemOffer_TypeDefinitionIndex)->GetStaticField(0x9960);
		}
		// static const ::System::Int32 _MinTargetCount = 0x3; // 0x0
		// static const ::System::Int32 _MaxTargetCount = 0x3; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemIDs; // 0x20
		::Class_1_D25A7DF46B5D6238* ManualAdjustOPCount; // 0x28
		::System::Random* _Rng; // 0x30
		::Class_1_D25A7DF46B5D6238* ManualRandomOPCount; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UsedItemIDs; // 0x40
		::Class_1_D25A7DF46B5D6238* ItemRefreshOPCount; // 0x48
		::Class_1_D25A7DF46B5D6238* ManualExpandOPCount; // 0x50
		::Class_1_9ADA4A255864E373* _GameLoopInstance; // 0x58
		::System::Int32 _ItemRefreshCount; // 0x60
		::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason _LastItemIDsChangeReason_k__BackingField; // 0x64
		::System::Int32 _ManualRandomCount; // 0x68
		::System::Int32 _ManualExpandCount; // 0x6C
		::System::Int32 _ManualAdjustCount; // 0x70

		::System::Void _ctor(::Class_1_9ADA4A255864E373* a1, ::Class_1_21DCD4640D389503_17* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9ADA4A255864E373*, ::Class_1_21DCD4640D389503_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__CCTOR_OFFSET))();
		}

		::System::Void SetRandomSeed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETRANDOMSEED_OFFSET))(this, a1);
		}

		::System::Boolean TryCostAdjust()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTADJUST_OFFSET))(this);
		}

		::System::Void RevertCostAdjust()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTADJUST_OFFSET))(this);
		}

		::System::Boolean TryCostExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_TRYCOSTEXPAND_OFFSET))(this);
		}

		::System::Void RevertCostExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REVERTCOSTEXPAND_OFFSET))(this);
		}

		::System::Void OnAward(::Class_1_A3C3725415847C24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A3C3725415847C24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_ONAWARD_OFFSET))(this, a1);
		}

		::System::Void RecordOPCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_RECORDOPCOUNT_OFFSET))(this);
		}

		::System::Void SetItemUsed(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SETITEMUSED_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasItemRefreshCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_HASITEMREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void Reroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REROLL_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SKIP_OFFSET))(this);
		}

		::System::Void ChargeDayItemRefreshCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_CHARGEDAYITEMREFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::Void Refresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _RefreshItemsForSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__REFRESHITEMSFORSELECTED_OFFSET))(this);
		}

		::System::Void _UpdateItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__UPDATEITEMS_OFFSET))(this);
		}

		::System::Boolean _HasAnyItemUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__HASANYITEMUSED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMIDS_OFFSET))(this);
		}

		::System::Void set_ItemIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMIDS_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason get_LastItemIDsChangeReason()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_LASTITEMIDSCHANGEREASON_OFFSET))(this);
		}

		::System::Void set_LastItemIDsChangeReason(::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::GameItemOfferChangeReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_LASTITEMIDSCHANGEREASON_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemRefreshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_ITEMREFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemRefreshCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_ITEMREFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ManualRandomCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALRANDOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ManualRandomCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALRANDOMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ManualAdjustCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALADJUSTCOUNT_OFFSET))(this);
		}

		::System::Void set_ManualAdjustCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALADJUSTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ManualExpandCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_GET_MANUALEXPANDCOUNT_OFFSET))(this);
		}

		::System::Void set_ManualExpandCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER_SET_MANUALEXPANDCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _RandomByRareWeight(::RPG::GameCore::ChenLingFesItemRuleGroupRow* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMBYRAREWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLingFes::GameItemOffer_ItemCandidate>* _BuildCandidates(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLingFes::GameItemOffer_ItemCandidate>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDCANDIDATES_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLingFes::GameItemOffer_ItemCandidate>* _FilterCandidatesByMaxPutDown(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLingFes::GameItemOffer_ItemCandidate>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__FILTERCANDIDATESBYMAXPUTDOWN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BuildOccupiedCountByItemID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__BUILDOCCUPIEDCOUNTBYITEMID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _RandomDistinctFromList(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLingFes::GameItemOffer_ItemCandidate>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLingFes::GameItemOffer_ItemCandidate>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__RANDOMDISTINCTFROMLIST_OFFSET))(this, a1, a2);
		}

		::System::Int32 _NextInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTINT_OFFSET))(this, a1, a2);
		}

		::System::Single _NextFloat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_GAMEITEMOFFER__NEXTFLOAT_OFFSET))(this, a1, a2);
		}
	};
}
