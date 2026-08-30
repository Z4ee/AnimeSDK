#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_1_A0D6C293180538F5;
class Class_1_A167209E71412818;
namespace RPG::Client { class LuaUI3DController; }
namespace System { class Object; }
namespace System { class String; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET UNITYSDK_OFFSET(0x17493A80)
#define RPG_CLIENT_LUAUICONTROLLER_GETUI3DCONTROLLER_OFFSET UNITYSDK_OFFSET(0x174973A0)
#define RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET UNITYSDK_OFFSET(0x17497340)
#define RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17497250)
#define RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET UNITYSDK_OFFSET(0x17493760)
#define RPG_CLIENT_LUAUICONTROLLER_LUAASYNCSHOW_OFFSET UNITYSDK_OFFSET(0x17493930)
#define RPG_CLIENT_LUAUICONTROLLER_LUASYNCSHOW_OFFSET UNITYSDK_OFFSET(0x17493810)
#define RPG_CLIENT_LUAUICONTROLLER_ONAFTERUI3DLOADED_OFFSET UNITYSDK_OFFSET(0x17497510)
#define RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET UNITYSDK_OFFSET(0x174964C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET UNITYSDK_OFFSET(0x174967F0)
#define RPG_CLIENT_LUAUICONTROLLER_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x17495820)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET UNITYSDK_OFFSET(0x17496000)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET UNITYSDK_OFFSET(0x17496190)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET UNITYSDK_OFFSET(0x17495B20)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x174935C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0x17495500)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET UNITYSDK_OFFSET(0x17495E60)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET UNITYSDK_OFFSET(0x17495CC0)
#define RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET UNITYSDK_OFFSET(0x17496320)
#define RPG_CLIENT_LUAUICONTROLLER_ONLEFTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x17496F00)
#define RPG_CLIENT_LUAUICONTROLLER_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x174959A0)
#define RPG_CLIENT_LUAUICONTROLLER_ONLUAVIEWLOADED_OFFSET UNITYSDK_OFFSET(0x174937C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0x174970A0)
#define RPG_CLIENT_LUAUICONTROLLER_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x174956A0)
#define RPG_CLIENT_LUAUICONTROLLER_ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x17496D60)
#define RPG_CLIENT_LUAUICONTROLLER_TONEXTZOOM_OFFSET UNITYSDK_OFFSET(0x17496AC0)
#define RPG_CLIENT_LUAUICONTROLLER_TOPREZOOM_OFFSET UNITYSDK_OFFSET(0x17496C10)
#define RPG_CLIENT_LUAUICONTROLLER_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x17494180)
#define RPG_CLIENT_LUAUICONTROLLER__BEFORELOADVIEW_OFFSET UNITYSDK_OFFSET(0x17493DD0)
#define RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17493550)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x174947A0)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0x17494910)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x17494A80)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0x17494520)
#define RPG_CLIENT_LUAUICONTROLLER__ENABLEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x174950A0)
#define RPG_CLIENT_LUAUICONTROLLER__ONAFTERVIEWLOADED_OFFSET UNITYSDK_OFFSET(0x17493EF0)
#define RPG_CLIENT_LUAUICONTROLLER__ONALLRESOURCESLOADED_OFFSET UNITYSDK_OFFSET(0x17494010)
#define RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x174943B0)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x17494F40)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0x17494E20)
#define RPG_CLIENT_LUAUICONTROLLER__ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x174951F0)
#define RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0x17494280)
#define RPG_CLIENT_LUAUICONTROLLER__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x17494D00)
#define RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x17495360)
#define RPG_CLIENT_LUAUICONTROLLER__ONVIEWSET_OFFSET UNITYSDK_OFFSET(0x17493CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUIController_TypeDefinitionIndex = 59571;

	class LuaUIController : public ::RPG::Client::UIController
	{
	public:
		::Class_1_A0D6C293180538F5* LuaUiControllerInfo; // 0x188

		::System::Void _ctor(::XLua::LuaTable* a1, ::RPG::Client::UILayer a2, ::Class_1_A167209E71412818* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UILayer, ::Class_1_A167209E71412818*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void CallLuaFunc(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET))(this, a1, a2);
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

		::System::Void _OnSetViewActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET))(this, a1);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _DoOnChildDialogOpen(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET))(this, a1);
		}

		::System::String* _CustomFadeInAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* _CustomFadeOutAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET))(this);
		}

		::System::Void _DoOnChildDialogClose(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET))(this, a1);
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

		::System::Void _OnUIScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnInControlInputSwitch(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET))(this, a1);
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

		::System::Void OnInControlClick(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET))(this, a1);
		}

		::System::Void OnInControReleased(::InControl::InputControlType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET))(this, a1, a2);
		}

		::System::Void OnInControlPress(::InControl::InputControlType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET))(this, a1, a2);
		}

		::System::Void OnInControlActionClick(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnInControlActionPress(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET))(this, a1);
		}

		::System::Void OnKeyboardClick(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET))(this, a1);
		}

		::System::Void OnEnterZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET))(this, a1);
		}

		::System::Void OnExitZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET))(this, a1);
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

		::System::Void OnMouseWheelRoll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET))(this);
		}

		::XLua::LuaTable* get_LuaTable()
		{
			return ((::XLua::LuaTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET))(this);
		}

		::RPG::Client::LuaUI3DController* GetUI3DController()
		{
			return ((::RPG::Client::LuaUI3DController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_GETUI3DCONTROLLER_OFFSET))(this);
		}

		::System::Void OnAfterUI3DLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONAFTERUI3DLOADED_OFFSET))(this);
		}

		::System::Boolean IsControllerValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET))(this);
		}
	};
}
