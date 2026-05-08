#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UICpInfoChildWindowController_UITagInfo.h"
#include "unitysdk/MoleMole/UICpInfoChildWindowController_UIViewInfo.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_ACB2ABA66F2BACE6_1.h"

class Class_0_16E4307DCC419505_773;
class Class_2_0CCF091CD6FC39F6;
class Class_2_208CC9941471731A_1084;
class Class_2_406A8F3B1D1299BE;
class Class_2_660E1AEEC9B8E99C;
class Class_2_67AAD4707F55C650;
class Class_3_01B4CC30216C9ABE_3;
class Class_4_398BFA9434E23924;
class Class_4_8D1AD90A8B2D39F9_1;
class Class_4_9E9E9BF263D35C5C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICpCompanionEntityInfoWidgetController; }
namespace MoleMole { class UICpEntityInfoWidgetController; }
namespace MoleMole { class UICpPropDataRowWidgetController; }
namespace MoleMole { class UICpPropDataShotRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDCPUIVIEWINFO_OFFSET UNITYSDK_OFFSET(0x1AB58B30)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDCPVIEWENTITYCTRLS_OFFSET UNITYSDK_OFFSET(0x1AB58580)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDCPVIEWENTITYINFOS_OFFSET UNITYSDK_OFFSET(0x1AB57E20)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDPLAYERENTITYCTRL_OFFSET UNITYSDK_OFFSET(0x1AB582B0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDPLAYERUIVIEWINFO_OFFSET UNITYSDK_OFFSET(0x1AB59340)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDTAGDATA_OFFSET UNITYSDK_OFFSET(0x1AB544B0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CALRARESTRING_OFFSET UNITYSDK_OFFSET(0x1AB589C0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CALRATIOVALUESTR_OFFSET UNITYSDK_OFFSET(0x1AB57C40)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CREATEPROPDATAROW_OFFSET UNITYSDK_OFFSET(0x1AB57B20)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CREATEPROPDATASHOTROW_OFFSET UNITYSDK_OFFSET(0x1AB57990)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AB567B0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_GETPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x1AB56670)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1AB540C0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AB596F0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1AB59D70)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1AB5A2D0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AB59780)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AB540D0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AB54120)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHCPENTITYDETAIL_OFFSET UNITYSDK_OFFSET(0x1AB55C90)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHITEMENTITYDETAIL_OFFSET UNITYSDK_OFFSET(0x1AB55CF0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHPLAYERPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AB55AF0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHTABLEROOT_OFFSET UNITYSDK_OFFSET(0x1AB56380)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SELECTTABCHANGETOLEFT_OFFSET UNITYSDK_OFFSET(0x1AB56200)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SELECTTABCHANGETORIGHT_OFFSET UNITYSDK_OFFSET(0x1AB562D0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SETDEFENSEPROP_OFFSET UNITYSDK_OFFSET(0x1AB57060)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SETENTITYPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AB56840)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SETPROP_OFFSET UNITYSDK_OFFSET(0x1AB57450)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB5A890)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5A5C0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__ONUIOPEN_B__17_0_OFFSET UNITYSDK_OFFSET(0x1AB5A960)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__ONUIOPEN_B__17_1_OFFSET UNITYSDK_OFFSET(0x1AB5A9B0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__ONUIOPEN_B__17_2_OFFSET UNITYSDK_OFFSET(0x1AB5A9C0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AB5A9D0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1AB5AA60)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1AB5AA90)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AB5AAA0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AB5AAB0)
#define MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AB5AAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpInfoChildWindowController_TypeDefinitionIndex = 85263;

	class UICpInfoChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Comparison_1<::MoleMole::UICpInfoChildWindowController_UIViewInfo>** StaticGet_CompareMethord()
		{
			return (::System::Comparison_1<::MoleMole::UICpInfoChildWindowController_UIViewInfo>**)Il2CppClass::FromTypeDefinitionIndex(UICpInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0x49E00);
		}
		static ::System::Comparison_1<::MoleMole::UICpInfoChildWindowController_UITagInfo>** StaticGet_TagCompareMethord()
		{
			return (::System::Comparison_1<::MoleMole::UICpInfoChildWindowController_UITagInfo>**)Il2CppClass::FromTypeDefinitionIndex(UICpInfoChildWindowController_TypeDefinitionIndex)->GetStaticField(0x49E08);
		}
		// static const ::System::String* LName; // 0x0
		// static const ::System::String* RName; // 0x0
		// static const ::System::String* PlayerTitle; // 0x0
		// static const ::System::String* ItemTitle; // 0x0
		// static const ::System::String* CpTitle; // 0x0
		// static const ::System::String* CpDamageStr; // 0x0
		::Class_2_660E1AEEC9B8E99C* _view; // 0x310
		::Class_2_0CCF091CD6FC39F6* _gameLogic; // 0x318
		::System::Single scrollSpeed; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UICpPropDataShotRowWidgetController*>* _playerShotPropCtrls; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UICpPropDataRowWidgetController*>* _playerLongPropCtrls; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UICpEntityInfoWidgetController*>* _itemDetailCtrls; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UICpCompanionEntityInfoWidgetController*>* _companionDetailCtrls; // 0x340
		::System::Int32 curSelectTab; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UICpInfoChildWindowController_UIViewInfo>* cpViewInfos; // 0x350
		::MoleMole::UICpInfoChildWindowController_UIViewInfo playerViewInfo; // 0x358
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _tagNumDict; // 0x390
		::System::Collections::Generic::List_1<::MoleMole::UICpInfoChildWindowController_UITagInfo>* _tagList; // 0x398
		::System::Collections::Generic::List_1<::Class_4_9E9E9BF263D35C5C*>* _cpList; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SelectTabChangeToLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SELECTTABCHANGETOLEFT_OFFSET))(this);
		}

		::System::Void SelectTabChangeToRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SELECTTABCHANGETORIGHT_OFFSET))(this);
		}

		::System::Void RefreshTableRoot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHTABLEROOT_OFFSET))(this, index);
		}

		::Class_3_01B4CC30216C9ABE_3* GetPlayerEntity()
		{
			return ((::Class_3_01B4CC30216C9ABE_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_GETPLAYERENTITY_OFFSET))(this);
		}

		::Class_2_406A8F3B1D1299BE* GetContext()
		{
			return ((::Class_2_406A8F3B1D1299BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_GETCONTEXT_OFFSET))(this);
		}

		::System::Void RefreshPlayerProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHPLAYERPROPERTY_OFFSET))(this);
		}

		::System::Void SetEntityProperty(::Class_2_208CC9941471731A_1084* dataConfig, ::Class_2_406A8F3B1D1299BE* context, ::Class_4_398BFA9434E23924* propComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1084*, ::Class_2_406A8F3B1D1299BE*, ::Class_4_398BFA9434E23924*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SETENTITYPROPERTY_OFFSET))(this, dataConfig, context, propComp);
		}

		::System::Void SetProp(::Class_0_16E4307DCC419505_773* propEnumData, ::System::String* valueStr, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_773*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SETPROP_OFFSET))(this, propEnumData, valueStr, value);
		}

		::System::Void SetDefenseProp(::Class_4_398BFA9434E23924* propComp, ::Class_2_67AAD4707F55C650* mgr, ::Class_0_16E4307DCC419505_773* propEnumData, ::System::String* valueStr, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_398BFA9434E23924*, ::Class_2_67AAD4707F55C650*, ::Class_0_16E4307DCC419505_773*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_SETDEFENSEPROP_OFFSET))(this, propComp, mgr, propEnumData, valueStr, value);
		}

		static ::System::String* CalRatioValueStr(::Class_4_398BFA9434E23924* propComp, ::Class_2_67AAD4707F55C650* mgr)
		{
			return ((::System::String*(*)(::Class_4_398BFA9434E23924*, ::Class_2_67AAD4707F55C650*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CALRATIOVALUESTR_OFFSET))(propComp, mgr);
		}

		::MoleMole::UICpPropDataRowWidgetController* CreatePropDataRow(::Enum_3_81A3942BCC6E42B5 ctrlId, ::UnityEngine::Transform* parent, ::System::String* name, ::System::String* icon, ::System::String* valueStr, ::System::String* desc, ::System::Int32 value)
		{
			return ((::MoleMole::UICpPropDataRowWidgetController*(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CREATEPROPDATAROW_OFFSET))(this, ctrlId, parent, name, icon, valueStr, desc, value);
		}

		::MoleMole::UICpPropDataShotRowWidgetController* CreatePropDataShotRow(::Enum_3_81A3942BCC6E42B5 ctrlId, ::UnityEngine::Transform* parent, ::System::String* name, ::System::String* icon, ::System::String* valueStr, ::System::String* desc, ::System::Int32 value)
		{
			return ((::MoleMole::UICpPropDataShotRowWidgetController*(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CREATEPROPDATASHOTROW_OFFSET))(this, ctrlId, parent, name, icon, valueStr, desc, value);
		}

		::System::Void RefreshCpEntityDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHCPENTITYDETAIL_OFFSET))(this);
		}

		::System::Void BuildCpViewEntityCtrls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDCPVIEWENTITYCTRLS_OFFSET))(this);
		}

		::System::Void BuildPlayerEntityCtrl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDPLAYERENTITYCTRL_OFFSET))(this);
		}

		::System::Void BuildCpViewEntityInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDCPVIEWENTITYINFOS_OFFSET))(this);
		}

		::MoleMole::UICpInfoChildWindowController_UIViewInfo BuildCpUIViewInfo(::Struct_2_ACB2ABA66F2BACE6_1 info, ::Class_2_67AAD4707F55C650* mgr, ::Class_4_8D1AD90A8B2D39F9_1* insComp, ::Class_3_01B4CC30216C9ABE_3* playerEntity)
		{
			return ((::MoleMole::UICpInfoChildWindowController_UIViewInfo(*)(::PVOID, ::Struct_2_ACB2ABA66F2BACE6_1, ::Class_2_67AAD4707F55C650*, ::Class_4_8D1AD90A8B2D39F9_1*, ::Class_3_01B4CC30216C9ABE_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDCPUIVIEWINFO_OFFSET))(this, info, mgr, insComp, playerEntity);
		}

		::MoleMole::UICpInfoChildWindowController_UIViewInfo BuildPlayerUIViewInfo(::Class_2_67AAD4707F55C650* mgr, ::Class_4_8D1AD90A8B2D39F9_1* insComp, ::Class_3_01B4CC30216C9ABE_3* playerEntity)
		{
			return ((::MoleMole::UICpInfoChildWindowController_UIViewInfo(*)(::PVOID, ::Class_2_67AAD4707F55C650*, ::Class_4_8D1AD90A8B2D39F9_1*, ::Class_3_01B4CC30216C9ABE_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDPLAYERUIVIEWINFO_OFFSET))(this, mgr, insComp, playerEntity);
		}

		::Foundation::AssetPath CalRareString(::System::Int32 rare)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_CALRARESTRING_OFFSET))(this, rare);
		}

		::System::Void RefreshItemEntityDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_REFRESHITEMENTITYDETAIL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void BuildTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_BUILDTAGDATA_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void _OnUIOpen_b__17_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__ONUIOPEN_B__17_0_OFFSET))(this, index);
		}

		::System::Void _OnUIOpen_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__ONUIOPEN_B__17_1_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__17_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER__ONUIOPEN_B__17_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
