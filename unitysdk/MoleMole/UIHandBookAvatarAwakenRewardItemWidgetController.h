#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState.h"

class Class_2_79F6D62CE30E3F8E_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHandBookAwakenItemRewardContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_CREATEREWARDITEMSCROLL_OFFSET UNITYSDK_OFFSET(0x1897D5E0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_GET_CURREWARDTAKESTATE_OFFSET UNITYSDK_OFFSET(0x1897D480)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1897D310)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1897D420)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1897D3A0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1897D2B0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x1897D8E0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1897DB90)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1897DC50)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1897DCE0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1897DD80)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1897DE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAvatarAwakenRewardItemWidgetController_TypeDefinitionIndex = 85598;

	class UIHandBookAvatarAwakenRewardItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_3* _view; // 0x2F0
		::MoleMole::UIHandBookAwakenItemRewardContext* m_ctx; // 0x2F8
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* _rewards; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardControllers; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::MoleMole::UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState get_CurRewardTakeState()
		{
			return ((::MoleMole::UIHandBookAvatarAwakenRewardItemWidgetController_RewardTakeState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_GET_CURREWARDTAKESTATE_OFFSET))(this);
		}

		::System::Void CreateRewardItemScroll(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 item, ::System::Boolean takenTag)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_CREATEREWARDITEMSCROLL_OFFSET))(this, item, takenTag);
		}

		::System::Void RefreshTakeBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER_REFRESHTAKEBTNSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
