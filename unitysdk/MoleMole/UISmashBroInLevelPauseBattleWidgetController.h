#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_1_BF64A3E806610DD3_7_Class_0_16E7307DCC43CB2C_40;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x137860B0)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHACTCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0x13785C20)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x13785660)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x137863B0)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_GETSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x137863C0)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHACTCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0x137863D0)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x137863E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISmashBroInLevelPauseBattleWidgetController_TypeDefinitionIndex = 76076;

	class UISmashBroInLevelPauseBattleWidgetController : public ::MoleMole::UIInLevelPauseBattleInfoWidgetController
	{
	public:
		::Class_1_BF64A3E806610DD3_7_Class_0_16E7307DCC43CB2C_40* _challengeFetcher; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHDETAIL_OFFSET))(this);
		}

		::System::Void RefreshACTChallengeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHACTCHALLENGELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* GetShowRewardList(::System::Collections::Generic::List_1<::System::Int32>* dataList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET))(this, dataList);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* __base_GetShowRewardList(::System::Collections::Generic::List_1<::System::Int32>* P0)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_GETSHOWREWARDLIST_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshACTChallengeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHACTCHALLENGELIST_OFFSET))(this);
		}

		::System::Void __base_RefreshDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHDETAIL_OFFSET))(this);
		}
	};
}
