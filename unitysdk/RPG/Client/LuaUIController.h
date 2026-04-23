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

#define RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET UNITYSDK_OFFSET(0xA727880)
#define RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET UNITYSDK_OFFSET(0xA72B150)
#define RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA72B060)
#define RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET UNITYSDK_OFFSET(0xA727560)
#define RPG_CLIENT_LUAUICONTROLLER_LUAASYNCSHOW_OFFSET UNITYSDK_OFFSET(0xA727730)
#define RPG_CLIENT_LUAUICONTROLLER_LUASYNCSHOW_OFFSET UNITYSDK_OFFSET(0xA727610)
#define RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET UNITYSDK_OFFSET(0xA72A2E0)
#define RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET UNITYSDK_OFFSET(0xA72A600)
#define RPG_CLIENT_LUAUICONTROLLER_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0xA729600)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET UNITYSDK_OFFSET(0xA729DD0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET UNITYSDK_OFFSET(0xA729F90)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET UNITYSDK_OFFSET(0xA7298E0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xA7273C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0xA729300)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET UNITYSDK_OFFSET(0xA729C20)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET UNITYSDK_OFFSET(0xA729A70)
#define RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET UNITYSDK_OFFSET(0xA72A150)
#define RPG_CLIENT_LUAUICONTROLLER_ONLEFTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xA72AD10)
#define RPG_CLIENT_LUAUICONTROLLER_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xA729770)
#define RPG_CLIENT_LUAUICONTROLLER_ONLUAVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xA7275C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0xA72AEB0)
#define RPG_CLIENT_LUAUICONTROLLER_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0xA729490)
#define RPG_CLIENT_LUAUICONTROLLER_ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xA72AB70)
#define RPG_CLIENT_LUAUICONTROLLER_TONEXTZOOM_OFFSET UNITYSDK_OFFSET(0xA72A8D0)
#define RPG_CLIENT_LUAUICONTROLLER_TOPREZOOM_OFFSET UNITYSDK_OFFSET(0xA72AA20)
#define RPG_CLIENT_LUAUICONTROLLER_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA727FA0)
#define RPG_CLIENT_LUAUICONTROLLER__BEFORELOADVIEW_OFFSET UNITYSDK_OFFSET(0xA727BF0)
#define RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA727350)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA728580)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA728720)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xA7288C0)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xA728370)
#define RPG_CLIENT_LUAUICONTROLLER__ENABLEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA728E70)
#define RPG_CLIENT_LUAUICONTROLLER__ONAFTERVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xA727D10)
#define RPG_CLIENT_LUAUICONTROLLER__ONALLRESOURCESLOADED_OFFSET UNITYSDK_OFFSET(0xA727E30)
#define RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xA728200)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA728D10)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xA728BF0)
#define RPG_CLIENT_LUAUICONTROLLER__ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA728FC0)
#define RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0xA7280D0)
#define RPG_CLIENT_LUAUICONTROLLER__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xA728AD0)
#define RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA729160)
#define RPG_CLIENT_LUAUICONTROLLER__ONVIEWSET_OFFSET UNITYSDK_OFFSET(0xA727AD0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA72BC90)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONENTERZOOM_OFFSET UNITYSDK_OFFSET(0xA72BA20)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONEXITZOOM_OFFSET UNITYSDK_OFFSET(0xA72BA90)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0xA72B880)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLACTIONCLICK_OFFSET UNITYSDK_OFFSET(0xA72B8D0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLACTIONPRESS_OFFSET UNITYSDK_OFFSET(0xA72B940)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLCLICK_OFFSET UNITYSDK_OFFSET(0xA72B8A0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xA72B170)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0xA72B860)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTROLPRESS_OFFSET UNITYSDK_OFFSET(0xA72B8C0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONINCONTRORELEASED_OFFSET UNITYSDK_OFFSET(0xA72B8B0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONKEYBOARDCLICK_OFFSET UNITYSDK_OFFSET(0xA72B9B0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONLEFTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xA72BC20)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xA72B890)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0xA72BC80)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0xA72B870)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xA72BBC0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_TONEXTZOOM_OFFSET UNITYSDK_OFFSET(0xA72BB00)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_TOPREZOOM_OFFSET UNITYSDK_OFFSET(0xA72BB60)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA72B340)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__BEFORELOADVIEW_OFFSET UNITYSDK_OFFSET(0xA72B270)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__CUSTOMFADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA72B4A0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__CUSTOMFADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xA72B510)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__DOONCHILDDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xA72B580)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__DOONCHILDDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xA72B430)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ENABLEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA72B710)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONAFTERVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xA72B2D0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONALLRESOURCESLOADED_OFFSET UNITYSDK_OFFSET(0xA72B2E0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xA72B3D0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA72B6B0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xA72B650)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA72B780)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONSETVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0xA72B3C0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xA72B5F0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA72B7E0)
#define RPG_CLIENT_LUAUICONTROLLER___IFIXBASEPROXY__ONVIEWSET_OFFSET UNITYSDK_OFFSET(0xA72B1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUIController_TypeDefinitionIndex = 54819;

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
