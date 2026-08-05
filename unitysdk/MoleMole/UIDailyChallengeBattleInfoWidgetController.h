#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1685EC66FBD28897;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_ADDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x170B1F00)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x170B17F0)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x170B1950)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETMACHINELEVELID_OFFSET UNITYSDK_OFFSET(0x170B16B0)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x170B1240)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170B1FB0)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETCURPROGRESS_0_0_OFFSET UNITYSDK_OFFSET(0x170B1490)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETTOTALNUM_0_1_OFFSET UNITYSDK_OFFSET(0x170B1590)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETMACHINELEVELID_OFFSET UNITYSDK_OFFSET(0x170B1FC0)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x170B2050)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeBattleInfoWidgetController_TypeDefinitionIndex = 83279;

	class UIDailyChallengeBattleInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetMachineLevelId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETMACHINELEVELID_OFFSET))(this);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewards);
		}

		::System::Void AddItemCount(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cardRewardMap, ::System::Int32 itemId, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_ADDITEMCOUNT_OFFSET))(this, cardRewardMap, itemId, count);
		}

		static ::System::Int32 _GetProgress_g__GetCurProgress_0_0()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETCURPROGRESS_0_0_OFFSET))();
		}

		static ::System::Int32 _GetProgress_g__GetTotalNum_0_1()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETTOTALNUM_0_1_OFFSET))();
		}

		::System::Int32 __base_GetMachineLevelId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETMACHINELEVELID_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> __base_GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET))(this);
		}
	};
}
