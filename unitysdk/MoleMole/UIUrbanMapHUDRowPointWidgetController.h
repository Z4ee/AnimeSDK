#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D14E331734C3C6B.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_5C2761514B5473E7;
class Class_3_7472FB6CC4015359;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_BINDSPEEDTYPE_OFFSET UNITYSDK_OFFSET(0x17BC84F0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BC7460)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17BC7590)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x17BC7740)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BC74D0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BC7EA0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BC7630)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_REFRESHUIPERFORM_OFFSET UNITYSDK_OFFSET(0x17BC7BB0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETGUIDEUIWARNNING_OFFSET UNITYSDK_OFFSET(0x17BC82B0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETICONWARNING_OFFSET UNITYSDK_OFFSET(0x17BC8210)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__BINDSPEEDTYPE_B__18_0_OFFSET UNITYSDK_OFFSET(0x17BC89B0)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC8790)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_0_OFFSET UNITYSDK_OFFSET(0x17BC8800)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_1_OFFSET UNITYSDK_OFFSET(0x17BC8880)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17BC8B00)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BC8B90)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BC8C30)
#define MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BC8CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDRowPointWidgetController_TypeDefinitionIndex = 82276;

	class UIUrbanMapHUDRowPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Single tweenScaleTime; // 0x2C0
		::System::Single tweenScaleSize; // 0x2C4
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x2C8
		::System::Boolean isWarningState; // 0x2D0
		::DG::Tweening::Tween* warningTween; // 0x2D8
		::UnityEngine::RectTransform* targetImgTran; // 0x2E0
		::UnityEngine::RectTransform* transWarningTrans; // 0x2E8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5C2761514B5473E7* get__viewModel()
		{
			return ((::Class_2_5C2761514B5473E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshUIPerform(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_REFRESHUIPERFORM_OFFSET))(this, show);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean SetGuideUIWarnning(::System::Object* body)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETGUIDEUIWARNNING_OFFSET))(this, body);
		}

		::System::Void SetIconWarning(::System::Boolean state, ::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_SETICONWARNING_OFFSET))(this, state, speedType, id);
		}

		::System::Void BindSpeedType(::Enum_3_5D14E331734C3C6B speedType, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D14E331734C3C6B, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER_BINDSPEEDTYPE_OFFSET))(this, speedType, id);
		}

		::System::Void _OnUIInit_b__12_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__12_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__ONUIINIT_B__12_1_OFFSET))(this, args);
		}

		::System::Void _BindSpeedType_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER__BINDSPEEDTYPE_B__18_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDROWPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
