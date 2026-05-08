#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_72EC2CE56B26E891;
class Class_2_B5E2AD5DED488D20;
class Class_2_B5E2AD5DED488D20_Class_2_1E8B169E6AC22E78;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x148D9210)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148D9800)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONMODTIMERSP_OFFSET UNITYSDK_OFFSET(0x148DC7F0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148D9890)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148D9220)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x148D96C0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHBTN_OFFSET UNITYSDK_OFFSET(0x148DC660)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0x148D9950)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x148DC330)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x148DC100)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x148D9790)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ROTARROW_OFFSET UNITYSDK_OFFSET(0x148DCDD0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_SETDESC_OFFSET UNITYSDK_OFFSET(0x148D9900)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_SPENDTIME_OFFSET UNITYSDK_OFFSET(0x148DBF20)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_TRYROTARROW_OFFSET UNITYSDK_OFFSET(0x148DCB20)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x148DCE60)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__REFRESHSTAGE_B__18_0_OFFSET UNITYSDK_OFFSET(0x148DCE70)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__REFRESHSTAGE_G__TOGGLESTAGEICON_18_1_OFFSET UNITYSDK_OFFSET(0x148DCD30)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__REFRESHTIME_G__GETTIMEPROGRESS_17_0_OFFSET UNITYSDK_OFFSET(0x148DCAE0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148DCF20)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148DCFB0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148DCFC0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x148DCFD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController_TypeDefinitionIndex = 64274;

	class UIMainCityTimeTipsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* TEXT_AM; // 0x0
		// static const ::System::String* TEXT_PM; // 0x0
		// static const ::System::String* TEXT_OVERNIGHT; // 0x0
		// static const ::System::String* TEXT_CANTSLEEP; // 0x0
		// static const ::System::Single PROGRESS_SPEED; // 0x0
		// static const ::System::String* ICON_SWITCH_ANIM; // 0x0
		::Class_2_B5E2AD5DED488D20* _view; // 0x310
		::Class_2_72EC2CE56B26E891* _model; // 0x318
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* _anims; // 0x320
		::Foundation::Coroutine::CoroutineHandle _handle; // 0x328
		::System::Int32 _curStage; // 0x32C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetDesc(::System::Int32 targetTrust)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_SETDESC_OFFSET))(this, targetTrust);
		}

		::System::Void SpendTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_SPENDTIME_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnModTimeRsp(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ONMODTIMERSP_OFFSET))(this, isSuccess);
		}

		::System::Void RefreshTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHTIME_OFFSET))(this);
		}

		::System::Void RefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHSTAGE_OFFSET))(this);
		}

		::System::Void RefreshDesc(::System::Boolean isRandom, ::System::Int32 targetTrust)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHDESC_OFFSET))(this, isRandom, targetTrust);
		}

		::System::Void RefreshBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_REFRESHBTN_OFFSET))(this);
		}

		::System::Void TryRotArrow(::System::Single nextRatio, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_TRYROTARROW_OFFSET))(this, nextRatio, force);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* RotArrow(::System::Single nextRatio)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER_ROTARROW_OFFSET))(this, nextRatio);
		}

		static ::System::Single _RefreshTime_g__GetTimeProgress_17_0(::System::Single inHours, ::System::Single inMinutes)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__REFRESHTIME_G__GETTIMEPROGRESS_17_0_OFFSET))(inHours, inMinutes);
		}

		::System::Void _RefreshStage_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__REFRESHSTAGE_B__18_0_OFFSET))(this);
		}

		static ::System::Void _RefreshStage_g__ToggleStageIcon_18_1(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B5E2AD5DED488D20_Class_2_1E8B169E6AC22E78*>*>* icons, ::System::Int32 stage)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B5E2AD5DED488D20_Class_2_1E8B169E6AC22E78*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__REFRESHSTAGE_G__TOGGLESTAGEICON_18_1_OFFSET))(icons, stage);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
