#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1685EC66FBD28897;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLCARDBYLITTLEBOSS_OFFSET UNITYSDK_OFFSET(0x14FE3880)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x14FE3300)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x14FE40D0)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x14FE32B0)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_MONSTERCARDCOMPARISON_OFFSET UNITYSDK_OFFSET(0x14FE3EA0)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE4A30)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x14FE4A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelBossBattleInfoWidgetController_TypeDefinitionIndex = 61898;

	class UIInLevelBossBattleInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET))(this);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Int32 MonsterCardComparison(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_MONSTERCARDCOMPARISON_OFFSET))(this, x, y);
		}

		::System::Void FillCardByLittleBoss(::System::Collections::Generic::List_1<::System::Int32>* cardList, ::System::Int32 battleEventId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLCARDBYLITTLEBOSS_OFFSET))(this, cardList, battleEventId);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* rewardMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewardMap);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> __base_GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET))(this);
		}
	};
}
