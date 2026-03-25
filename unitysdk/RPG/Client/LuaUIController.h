#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_1_89D8044AB73F8F6D;
class Class_1_A0D6C293180538F5;
namespace System { class Object; }
namespace System { class String; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET UNITYSDK_OFFSET(0x9A79B40)
#define RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET UNITYSDK_OFFSET(0x9A7D420)
#define RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A7D330)
#define RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET UNITYSDK_OFFSET(0x9A79820)
#define RPG_CLIENT_LUAUICONTROLLER_LUAASYNCSHOW_OFFSET UNITYSDK_OFFSET(0x9A799F0)
#define RPG_CLIENT_LUAUICONTROLLER_LUASYNCSHOW_OFFSET UNITYSDK_OFFSET(0x9A798D0)
#define RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET UNITYSDK_OFFSET(0x9A7C5A0)
#define RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET UNITYSDK_OFFSET(0x9A7C8D0)
#define RPG_CLIENT_LUAUICONTROLLER_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x9A7B8C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET UNITYSDK_OFFSET(0x9A7C090)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET UNITYSDK_OFFSET(0x9A7C250)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET UNITYSDK_OFFSET(0x9A7BBA0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x9A79680)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0x9A7B5C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET UNITYSDK_OFFSET(0x9A7BEE0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET UNITYSDK_OFFSET(0x9A7BD30)
#define RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET UNITYSDK_OFFSET(0x9A7C410)
#define RPG_CLIENT_LUAUICONTROLLER_ONLEFTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x9A7CFE0)
#define RPG_CLIENT_LUAUICONTROLLER_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9A7BA30)
#define RPG_CLIENT_LUAUICONTROLLER_ONLUAVIEWLOADED_OFFSET UNITYSDK_OFFSET(0x9A79880)
#define RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0x9A7D180)
#define RPG_CLIENT_LUAUICONTROLLER_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x9A7B750)
#define RPG_CLIENT_LUAUICONTROLLER_ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x9A7CE40)
#define RPG_CLIENT_LUAUICONTROLLER_TONEXTZOOM_OFFSET UNITYSDK_OFFSET(0x9A7CBA0)
#define RPG_CLIENT_LUAUICONTROLLER_TOPREZOOM_OFFSET UNITYSDK_OFFSET(0x9A7CCF0)
#define RPG_CLIENT_LUAUICONTROLLER_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A7A260)
#define RPG_CLIENT_LUAUICONTROLLER__BEFORELOADVIEW_OFFSET UNITYSDK_OFFSET(0x9A79EB0)
#define RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A79610)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x9A7A840)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x9A7A9E0)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x9A7AB80)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0x9A7A630)
#define RPG_CLIENT_LUAUICONTROLLER__ENABLEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9A7B130)
#define RPG_CLIENT_LUAUICONTROLLER__ONAFTERVIEWLOADED_OFFSET UNITYSDK_OFFSET(0x9A79FD0)
#define RPG_CLIENT_LUAUICONTROLLER__ONALLRESOURCESLOADED_OFFSET UNITYSDK_OFFSET(0x9A7A0F0)
#define RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x9A7A4C0)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x9A7AFD0)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0x9A7AEB0)
#define RPG_CLIENT_LUAUICONTROLLER__ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9A7B280)
#define RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0x9A7A390)
#define RPG_CLIENT_LUAUICONTROLLER__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x9A7AD90)
#define RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9A7B420)
#define RPG_CLIENT_LUAUICONTROLLER__ONVIEWSET_OFFSET UNITYSDK_OFFSET(0x9A79D90)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A7DF70)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONENTERZOOM_OFFSET UNITYSDK_OFFSET(0x9A7DD00)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONEXITZOOM_OFFSET UNITYSDK_OFFSET(0x9A7DD70)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x9A7DB60)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLACTIONCLICK_OFFSET UNITYSDK_OFFSET(0x9A7DBB0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLACTIONPRESS_OFFSET UNITYSDK_OFFSET(0x9A7DC20)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLCLICK_OFFSET UNITYSDK_OFFSET(0x9A7DB80)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x9A7D440)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0x9A7DB40)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLPRESS_OFFSET UNITYSDK_OFFSET(0x9A7DBA0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTRORELEASED_OFFSET UNITYSDK_OFFSET(0x9A7DB90)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONKEYBOARDCLICK_OFFSET UNITYSDK_OFFSET(0x9A7DC90)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONLEFTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x9A7DF00)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9A7DB70)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0x9A7DF60)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x9A7DB50)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x9A7DEA0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_TONEXTZOOM_OFFSET UNITYSDK_OFFSET(0x9A7DDE0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_TOPREZOOM_OFFSET UNITYSDK_OFFSET(0x9A7DE40)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A7D610)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__BEFORELOADVIEW_OFFSET UNITYSDK_OFFSET(0x9A7D540)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__CUSTOMFADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x9A7D780)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__CUSTOMFADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x9A7D7F0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__DOONCHILDDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x9A7D860)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__DOONCHILDDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0x9A7D710)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ENABLEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9A7D9F0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONAFTERVIEWLOADED_OFFSET UNITYSDK_OFFSET(0x9A7D5A0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONALLRESOURCESLOADED_OFFSET UNITYSDK_OFFSET(0x9A7D5B0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x9A7D6B0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x9A7D990)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0x9A7D930)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9A7DA60)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONSETVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0x9A7D6A0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x9A7D8D0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9A7DAC0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONVIEWSET_OFFSET UNITYSDK_OFFSET(0x9A7D4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUIController_TypeDefinitionIndex = 48074;

	class LuaUIController : public ::RPG::Client::UIController
	{
	public:
		::Class_1_A0D6C293180538F5* LuaUiControllerInfo; // 0x180

		::System::Void _ctor(::XLua::LuaTable* controllerTable, ::RPG::Client::UILayer layer, ::Class_1_89D8044AB73F8F6D* view)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UILayer, ::Class_1_89D8044AB73F8F6D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET))(this, controllerTable, layer, view);
		}

		::System::Void OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void OnLuaViewLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONLUAVIEWLOADED_OFFSET))(this);
		}

		::System::Void LuaSyncShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_LUASYNCSHOW_OFFSET))(this);
		}

		::System::Void LuaAsyncShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_LUAASYNCSHOW_OFFSET))(this);
		}

		::System::Void CallLuaFunc(::System::String* funcName, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET))(this, funcName, args);
		}

		::System::Void _OnViewSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONVIEWSET_OFFSET))(this);
		}

		::System::Void _BeforeLoadView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__BEFORELOADVIEW_OFFSET))(this);
		}

		::System::Void _OnAfterViewLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONAFTERVIEWLOADED_OFFSET))(this);
		}

		::System::Void _OnAllResourcesLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONALLRESOURCESLOADED_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _OnSetViewActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET))(this, active);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _DoOnChildDialogOpen(::RPG::Client::UIController* childDialog)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET))(this, childDialog);
		}

		::System::String* _CustomFadeInAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* _CustomFadeOutAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET))(this);
		}

		::System::Void _DoOnChildDialogClose(::RPG::Client::UIController* childDialog)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET))(this, childDialog);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void _OnExitPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONEXITPRESTEP_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Boolean _EnableAsyncInstantiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ENABLEASYNCINSTANTIATE_OFFSET))(this);
		}

		::System::Void _OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET))(this, arg);
		}

		::System::Void OnInControlInputSwitch(::InControl::InputDeviceClass type)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET))(this, type);
		}

		::System::Void OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void OnGotFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONGOTFOCUS_OFFSET))(this);
		}

		::System::Void OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void OnInControlClick(::InControl::InputControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET))(this, type);
		}

		::System::Void OnInControReleased(::InControl::InputControlType type, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET))(this, type, value);
		}

		::System::Void OnInControlPress(::InControl::InputControlType type, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET))(this, type, value);
		}

		::System::Void OnInControlActionClick(::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET))(this, actionName);
		}

		::System::Void OnInControlActionPress(::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET))(this, actionName);
		}

		::System::Void OnKeyboardClick(::InControl::Key type)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET))(this, type);
		}

		::System::Void OnEnterZoom(::System::Boolean isByConfirm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET))(this, isByConfirm);
		}

		::System::Void OnExitZoom(::System::Boolean isByCancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET))(this, isByCancel);
		}

		::System::Void ToNextZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_TONEXTZOOM_OFFSET))(this);
		}

		::System::Void ToPreZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_TOPREZOOM_OFFSET))(this);
		}

		::System::Void OnRightStickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONRIGHTSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnLeftStickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONLEFTSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnMouseWheelRoll(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET))(this);
		}

		::XLua::LuaTable* get_LuaTable()
		{
			return ((::XLua::LuaTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET))(this);
		}

		::System::Boolean IsControllerValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnViewSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONVIEWSET_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeLoadView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__BEFORELOADVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnAfterViewLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONAFTERVIEWLOADED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnAllResourcesLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONALLRESOURCESLOADED_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnSetViewActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONSETVIEWACTIVE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__DoOnChildDialogOpen(::RPG::Client::UIController* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__DOONCHILDDIALOGOPEN_OFFSET))(this, P0);
		}

		::System::String* __iFixBaseProxy__CustomFadeInAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__CUSTOMFADEINANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy__CustomFadeOutAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__CUSTOMFADEOUTANIMCLIPNAME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__DoOnChildDialogClose(::RPG::Client::UIController* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__DOONCHILDDIALOGCLOSE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONEXITPRESTEP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy__EnableAsyncInstantiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ENABLEASYNCINSTANTIATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnUIScreenSizeChanged(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONUISCREENSIZECHANGED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnInControlInputSwitch(::InControl::InputDeviceClass P0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLINPUTSWITCH_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnGotFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONGOTFOCUS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInControlClick(::InControl::InputControlType P0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnInControReleased(::InControl::InputControlType P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTRORELEASED_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnInControlPress(::InControl::InputControlType P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLPRESS_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnInControlActionClick(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLACTIONCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnInControlActionPress(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLACTIONPRESS_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnKeyboardClick(::InControl::Key P0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONKEYBOARDCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnEnterZoom(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONENTERZOOM_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnExitZoom(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONEXITZOOM_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ToNextZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_TONEXTZOOM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ToPreZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_TOPREZOOM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnRightStickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONRIGHTSTICKRELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLeftStickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONLEFTSTICKRELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnMouseWheelRoll(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONMOUSEWHEELROLL_OFFSET))(this, P0);
		}

		::System::String* __iFixBaseProxy_get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_GET_NAME_OFFSET))(this);
		}
	};
}
