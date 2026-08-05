#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIBossChallengeRewardItemWidgetController_RewardEntry.h"
#include "unitysdk/MoleMole/UIBossChallengeRewardItemWidgetController_RewardTakeState.h"

class Class_1_C4544004F26734BD_102;
class Class_2_79F6D62CE30E3F8E_3;
class Class_3_A9098CF80773ED2D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_CREATEREWARDITEM_OFFSET UNITYSDK_OFFSET(0x18E4C0B0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_GET_CURREWARDTAKESTATE_OFFSET UNITYSDK_OFFSET(0x18E4C380)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_GET_ISINSTANTGRANTED_OFFSET UNITYSDK_OFFSET(0x18E4C580)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ISENTRYTAKEN_OFFSET UNITYSDK_OFFSET(0x18E4BFD0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ISREWARDITEMTAKEN_OFFSET UNITYSDK_OFFSET(0x18E4C6E0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E4A670)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18E4A780)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E4A700)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E4A610)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x18E4BD00)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_TRYGETZONERECORD_OFFSET UNITYSDK_OFFSET(0x18E4C750)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4C8B0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__12_0_OFFSET UNITYSDK_OFFSET(0x18E4C960)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__12_1_OFFSET UNITYSDK_OFFSET(0x18E4CAC0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E4CBC0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18E4CC50)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E4CCF0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E4CD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_TypeDefinitionIndex = 64800;

	class UIBossChallengeRewardItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_3* _view; // 0x2F0
		::Class_1_C4544004F26734BD_102* _rewardTemplate; // 0x2F8
		::Enum_3_DB663931210BBC27_38 _playType; // 0x300
		::System::Int32 _zoneID; // 0x304
		::System::Collections::Generic::List_1<::MoleMole::UIBossChallengeRewardItemWidgetController_RewardEntry>* _rewardEntries; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardControllers; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean IsEntryTaken(::MoleMole::UIBossChallengeRewardItemWidgetController_RewardEntry entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBossChallengeRewardItemWidgetController_RewardEntry))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ISENTRYTAKEN_OFFSET))(this, entry);
		}

		::System::Boolean IsRewardItemTaken(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 item, ::System::Boolean rowTaken)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ISREWARDITEMTAKEN_OFFSET))(this, item, rowTaken);
		}

		::System::Boolean TryGetZoneRecord(::Class_3_A9098CF80773ED2D*& zoneRecord)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_A9098CF80773ED2D*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_TRYGETZONERECORD_OFFSET))(this, zoneRecord);
		}

		::System::Boolean get_IsInstantGranted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_GET_ISINSTANTGRANTED_OFFSET))(this);
		}

		::MoleMole::UIBossChallengeRewardItemWidgetController_RewardTakeState get_CurRewardTakeState()
		{
			return ((::MoleMole::UIBossChallengeRewardItemWidgetController_RewardTakeState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_GET_CURREWARDTAKESTATE_OFFSET))(this);
		}

		::MoleMole::UIItemIconBtnWidgetController* CreateRewardItem(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 item, ::System::Boolean takenTag)
		{
			return ((::MoleMole::UIItemIconBtnWidgetController*(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_CREATEREWARDITEM_OFFSET))(this, item, takenTag);
		}

		::System::Void RefreshTakeBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__12_0_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__12_1(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__12_1_OFFSET))(this, result);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
