#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4E1B1F029AB6CEAD.h"
#include "unitysdk/MoleMole/HackerGameCliParamType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E2A7107F577F02F2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowWaterFlowFishingWidgetController_HollowWaterFlowPercentTipsInitInfo; }
namespace System { class EventArgs; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_CREATEPERCENTTIPS_OFFSET UNITYSDK_OFFSET(0x157CF770)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_DOOPENBAG_OFFSET UNITYSDK_OFFSET(0x157CFCC0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_INITFLOWPERCENTTIPS_OFFSET UNITYSDK_OFFSET(0x157CEA10)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONACTIVITYPARAMUPDATED_OFFSET UNITYSDK_OFFSET(0x157CF8F0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157CFEA0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONHOLLOWWATERFLOWFEVERCHANGE_OFFSET UNITYSDK_OFFSET(0x157CEF60)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONHOLLOWWATERFLOWPERCENTCHANGE_OFFSET UNITYSDK_OFFSET(0x157CF850)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONHOLLOWWATERFLOWPERCENTTIPSINIT_OFFSET UNITYSDK_OFFSET(0x157CF6C0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157CFF30)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157CDFB0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157CFE30)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_REFRESHPARAMS_OFFSET UNITYSDK_OFFSET(0x157CE440)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_REGISTERVIRUSINDEX_OFFSET UNITYSDK_OFFSET(0x157CFBB0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_REGISTERVIRUSOFCONCERN_OFFSET UNITYSDK_OFFSET(0x157CF940)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_SETDEFAULTVIEW_OFFSET UNITYSDK_OFFSET(0x157CE230)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_UPDATEFEVER_OFFSET UNITYSDK_OFFSET(0x157CF000)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_UPDATEPERCENTVIEW_OFFSET UNITYSDK_OFFSET(0x157CE780)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D0020)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157CFFC0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157D0060)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157D00F0)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157D0180)
#define MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157D0210)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowWaterFlowFishingWidgetController_TypeDefinitionIndex = 69226;

	class UIHollowWaterFlowFishingWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::MoleMole::UIHollowWaterFlowFishingWidgetController_HollowWaterFlowPercentTipsInitInfo** StaticGet_EmptyTipsInfo()
		{
			return (::MoleMole::UIHollowWaterFlowFishingWidgetController_HollowWaterFlowPercentTipsInitInfo**)Il2CppClass::FromTypeDefinitionIndex(UIHollowWaterFlowFishingWidgetController_TypeDefinitionIndex)->GetStaticField(0x3AB40);
		}
		// static const ::Enum_3_4E1B1F029AB6CEAD CurrencyID; // 0x0
		// static const ::Enum_3_4E1B1F029AB6CEAD MaxShieldID; // 0x0
		// static const ::Enum_3_4E1B1F029AB6CEAD MaxEnergyID; // 0x0
		// static const ::Enum_3_4E1B1F029AB6CEAD MaxFeverID; // 0x0
		// static const ::Enum_3_4E1B1F029AB6CEAD CurrentShieldID; // 0x0
		// static const ::Enum_3_4E1B1F029AB6CEAD CurrentEnergyID; // 0x0
		// static const ::Enum_3_4E1B1F029AB6CEAD CurrentFeverID; // 0x0
		// static const ::Enum_3_4E1B1F029AB6CEAD CurrentLevelID; // 0x0
		::Class_2_E2A7107F577F02F2* _view; // 0x2B8
		::System::Int32 _currentDurability; // 0x2C0
		::System::Int32 _maxDurability; // 0x2C4
		::System::Int32 _currentFever; // 0x2C8
		::System::Int32 _maxFever; // 0x2CC
		::System::Int32 _currency; // 0x2D0
		::System::Single _curPercent; // 0x2D4
		::UnityEngine::RectTransform* _cacheFillBarRectTransform; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetDefaultView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_SETDEFAULTVIEW_OFFSET))(this);
		}

		::System::Void OnHollowWaterFlowFeverChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONHOLLOWWATERFLOWFEVERCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnHollowWaterFlowPercentTipsInit(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONHOLLOWWATERFLOWPERCENTTIPSINIT_OFFSET))(this, obj);
		}

		::System::Void InitFlowPercentTips(::MoleMole::UIHollowWaterFlowFishingWidgetController_HollowWaterFlowPercentTipsInitInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowWaterFlowFishingWidgetController_HollowWaterFlowPercentTipsInitInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_INITFLOWPERCENTTIPS_OFFSET))(this, info);
		}

		::System::Void CreatePercentTips(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_CREATEPERCENTTIPS_OFFSET))(this, value);
		}

		::System::Void OnHollowWaterFlowPercentChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONHOLLOWWATERFLOWPERCENTCHANGE_OFFSET))(this, obj);
		}

		::System::Void OnActivityParamUpdated(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONACTIVITYPARAMUPDATED_OFFSET))(this, args);
		}

		::System::Void RefreshParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_REFRESHPARAMS_OFFSET))(this);
		}

		::System::Void RegisterVirusOfConcern(::System::Int32 virusOfConcern)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_REGISTERVIRUSOFCONCERN_OFFSET))(this, virusOfConcern);
		}

		::System::Void RegisterVirusIndex(::System::Int32 virusIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_REGISTERVIRUSINDEX_OFFSET))(this, virusIndex);
		}

		::System::Void DoOpenBag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_DOOPENBAG_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateFever(::MoleMole::HackerGameCliParamType type, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackerGameCliParamType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_UPDATEFEVER_OFFSET))(this, type, value);
		}

		::System::Void UpdatePercentView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER_UPDATEPERCENTVIEW_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWATERFLOWFISHINGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
