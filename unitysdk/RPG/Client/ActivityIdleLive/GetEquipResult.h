#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipBallFadeOutType.h"
#include "unitysdk/System/Object.h"

class Class_1_E14A0A1A8B1F847C_4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_CREATEFROMRSP_OFFSET UNITYSDK_OFFSET(0xC458D90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETALLRARITYLIST_OFFSET UNITYSDK_OFFSET(0xC45A110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETDECOMPOSEDNORETRARITYLIST_OFFSET UNITYSDK_OFFSET(0xC459FC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETDECOMPOSEDRETRARITYLIST_OFFSET UNITYSDK_OFFSET(0xC459F70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETFADEOUTTYPELIST_OFFSET UNITYSDK_OFFSET(0xC45A250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETRETAINEDRARITYLIST_OFFSET UNITYSDK_OFFSET(0xC459BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETTOTALEQUIPNUM_OFFSET UNITYSDK_OFFSET(0xC45A010)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC459BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT__SUBTRACTDICT_OFFSET UNITYSDK_OFFSET(0xC459C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT__UNFOLDDICT_OFFSET UNITYSDK_OFFSET(0xC459DB0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int GetEquipResult_TypeDefinitionIndex = 75301;

	class GetEquipResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DecomposedNoRetRarityNumDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DecomposedRetRarityNumDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AllEquipRarityNumDict; // 0x20
		::System::UInt32 GetEquipNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::GetEquipResult* CreateFromRsp(::Class_1_E14A0A1A8B1F847C_4* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::GetEquipResult*(*)(::Class_1_E14A0A1A8B1F847C_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_CREATEFROMRSP_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRetainedRarityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETRETAINEDRARITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDecomposedRetRarityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETDECOMPOSEDRETRARITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDecomposedNoRetRarityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETDECOMPOSEDNORETRARITYLIST_OFFSET))(this);
		}

		::System::UInt32 GetTotalEquipNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETTOTALEQUIPNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllRarityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETALLRARITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::EquipBallFadeOutType>* GetFadeOutTypeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::EquipBallFadeOutType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT_GETFADEOUTTYPELIST_OFFSET))(this);
		}

		static ::System::Void _SubtractDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT__SUBTRACTDICT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _UnfoldDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GETEQUIPRESULT__UNFOLDDICT_OFFSET))(a1);
		}
	};
}
