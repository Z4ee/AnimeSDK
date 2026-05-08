#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0A55B5A82A61DAFA_2;
class Class_2_1A3197598F874EB7;
class Class_2_7DC5AE118ED7708D;
class HollowInfoProgressParam;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_GETREALMISSIONID_OFFSET UNITYSDK_OFFSET(0x14FD3900)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_GET_REWARDCONTENT_OFFSET UNITYSDK_OFFSET(0x14FD6840)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_INITHOTEFFECT_OFFSET UNITYSDK_OFFSET(0x14FD60A0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14FD3610)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14FD36A0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14FD33E0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14FD3A50)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_SETMISSION_OFFSET UNITYSDK_OFFSET(0x14FD69A0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_UPDATEREWARDLIST_OFFSET UNITYSDK_OFFSET(0x14FD4AE0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD6A00)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14FD6B50)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14FD6BE0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14FD6C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoProgress02WidgetController_TypeDefinitionIndex = 81151;

	class UIHollowInfoProgress02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 kRewardCnt = 0x4; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* rewardTranList; // 0x2B8
		::HollowInfoProgressParam* _param; // 0x2C0
		::Class_2_7DC5AE118ED7708D* _view; // 0x2C8
		::Class_2_1A3197598F874EB7* _questModel; // 0x2D0
		::UnityEngine::Material* _fillMaterial; // 0x2D8
		::System::Int32 _missionID; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardsList; // 0x2E8
		::Class_2_0A55B5A82A61DAFA_2* hollowQuestTemplateExt; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 GetRealMissionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_GETREALMISSIONID_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void InitHotEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_INITHOTEFFECT_OFFSET))(this);
		}

		::System::Void UpdateRewardList(::System::Boolean isUp, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_UPDATEREWARDLIST_OFFSET))(this, isUp, isFinish);
		}

		::System::Void SetMission(::System::Int32 missionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_SETMISSION_OFFSET))(this, missionID);
		}

		::UnityEngine::RectTransform* get_RewardContent()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_GET_REWARDCONTENT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
