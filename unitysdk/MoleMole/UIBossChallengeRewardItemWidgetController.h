#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIBossChallengeRewardItemWidgetController_RewardTakeState.h"

class Class_1_C4544004F26734BD_43;
class Class_2_79F6D62CE30E3F8E_27;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_CREATEREWARDITEMSCROLL_OFFSET UNITYSDK_OFFSET(0x168104F0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_GET_CURREWARDTAKESTATE_OFFSET UNITYSDK_OFFSET(0x16810320)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1680F910)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1680FA20)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1680F9A0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1680F8B0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x16810070)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168107F0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x168108B0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_1_OFFSET UNITYSDK_OFFSET(0x16810B30)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16810C30)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16810CC0)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16810D60)
#define MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16810DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_TypeDefinitionIndex = 72020;

	class UIBossChallengeRewardItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_27* _view; // 0x2E8
		::Class_1_C4544004F26734BD_43* _rewardTemplate; // 0x2F0
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* _rewards; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardControllers; // 0x300

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

		::MoleMole::UIBossChallengeRewardItemWidgetController_RewardTakeState get_CurRewardTakeState()
		{
			return ((::MoleMole::UIBossChallengeRewardItemWidgetController_RewardTakeState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_GET_CURREWARDTAKESTATE_OFFSET))(this);
		}

		::System::Void CreateRewardItemScroll(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 item, ::System::Boolean takenTag)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_CREATEREWARDITEMSCROLL_OFFSET))(this, item, takenTag);
		}

		::System::Void RefreshTakeBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_0_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__8_1(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDITEMWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__8_1_OFFSET))(this, result);
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
