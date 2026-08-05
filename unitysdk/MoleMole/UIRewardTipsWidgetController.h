#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_3FA43C71A3D27BCE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMainCityRewardTipsWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ADDPREVIEWCOMMONREWARD_OFFSET UNITYSDK_OFFSET(0x17E362B0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E35EC0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_FORCEPLAY_OFFSET UNITYSDK_OFFSET(0x17E35BE0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_GETREWARDTIPSWIDGET_OFFSET UNITYSDK_OFFSET(0x17E36670)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INITTIPSWIDGET_OFFSET UNITYSDK_OFFSET(0x17E36940)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x17E35DA0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E35800)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONSHOWCOMMONREWARDSEND_OFFSET UNITYSDK_OFFSET(0x17E35E50)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONSHOWCOMMONREWARDS_OFFSET UNITYSDK_OFFSET(0x17E35F70)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E35850)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E35610)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x17E35B90)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x17E35A30)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCLEARCOMMONREWARDS_OFFSET UNITYSDK_OFFSET(0x17E36410)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCOMMONREWARDS_OFFSET UNITYSDK_OFFSET(0x17E36480)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_REALPLAY_OFFSET UNITYSDK_OFFSET(0x17E35B00)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_RECYLEREWARDTIPWIDGET_OFFSET UNITYSDK_OFFSET(0x17E36540)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_REFRESHTIPSWIDGET_OFFSET UNITYSDK_OFFSET(0x17E36AC0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x17E360B0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36B70)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E36CC0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E36D50)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E36DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardTipsWidgetController_TypeDefinitionIndex = 50371;

	class UIRewardTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIMainCityRewardTipsWidgetController*>* cacheWidgetList; // 0x2C0
		::Class_1_3FA43C71A3D27BCE* animHandler; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* previewDataList; // 0x2D0
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _cacheList; // 0x2D8
		::System::Action* _onComplete; // 0x2E0
		::System::Boolean _isPlaying; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Play(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PLAY_OFFSET))(this, onComplete);
		}

		::System::Void ForcePlay(::System::Int32 id, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_FORCEPLAY_OFFSET))(this, id, count);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PAUSE_OFFSET))(this);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INTERRUPT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void OnShowCommonRewards(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONSHOWCOMMONREWARDS_OFFSET))(this, args);
		}

		::System::Void OnShowCommonRewardsEnd(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONSHOWCOMMONREWARDSEND_OFFSET))(this, args);
		}

		::System::Void TryPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_TRYPLAY_OFFSET))(this);
		}

		::System::Void RealPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_REALPLAY_OFFSET))(this);
		}

		::System::Void AddPreviewCommonReward(::System::Int32 itemID, ::System::Int32 itemCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ADDPREVIEWCOMMONREWARD_OFFSET))(this, itemID, itemCount);
		}

		::System::Void PreviewClearCommonRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCLEARCOMMONREWARDS_OFFSET))(this);
		}

		::System::Void PreviewCommonRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCOMMONREWARDS_OFFSET))(this);
		}

		::System::Void RecyleRewardTipWidget(::MoleMole::UIWidgetController* targetWidget, ::System::Action* fadeOutCallback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_RECYLEREWARDTIPWIDGET_OFFSET))(this, targetWidget, fadeOutCallback, animSpeed);
		}

		::MoleMole::UIWidgetController* GetRewardTipsWidget()
		{
			return ((::MoleMole::UIWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_GETREWARDTIPSWIDGET_OFFSET))(this);
		}

		::System::Void InitTipsWidget(::MoleMole::UIWidgetController* refWidget, ::Class_1_0D6706375CDAAE8C* itemData, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::Class_1_0D6706375CDAAE8C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INITTIPSWIDGET_OFFSET))(this, refWidget, itemData, animSpeed);
		}

		::System::Void RefreshTipsWidget(::MoleMole::UIWidgetController* refWidget, ::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_REFRESHTIPSWIDGET_OFFSET))(this, refWidget, itemData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
