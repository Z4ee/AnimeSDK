#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_2C492A88F0B81752;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_HIDEBPITEMTIPS_OFFSET UNITYSDK_OFFSET(0x197E4980)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197E3E80)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197E3F10)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197E3DB0)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197E3E10)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_PLAYSHOWREWARDTIP_OFFSET UNITYSDK_OFFSET(0x197E4350)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_REFRESHCOREREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x197E4020)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_REFRESHTIPCONTENT_OFFSET UNITYSDK_OFFSET(0x197E4430)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197E4A40)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197E4B00)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197E4B90)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197E4C20)
#define MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197E4CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardTipWidgetController_TypeDefinitionIndex = 77366;

	class UIBPCoreRewardTipWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_2C492A88F0B81752* _view; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle tipsTimeHandle; // 0x2C8
		::System::Int32 nowRewardID; // 0x2CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshCoreRewardTips(::System::Int32 rewardID, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_REFRESHCOREREWARDTIPS_OFFSET))(this, rewardID, force);
		}

		::System::Void PlayShowRewardTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_PLAYSHOWREWARDTIP_OFFSET))(this);
		}

		::System::Void RefreshTipContent(::System::Int32 rewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_REFRESHTIPCONTENT_OFFSET))(this, rewardID);
		}

		::System::Void HideBPItemTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER_HIDEBPITEMTIPS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
