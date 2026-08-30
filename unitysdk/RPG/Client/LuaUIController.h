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

#define RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET UNITYSDK_OFFSET(0xD59DF20)
#define RPG_CLIENT_LUAUICONTROLLER_GETUI3DCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD5A1860)
#define RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET UNITYSDK_OFFSET(0xD5A1800)
#define RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD5A1710)
#define RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET UNITYSDK_OFFSET(0xD59DC00)
#define RPG_CLIENT_LUAUICONTROLLER_LUAASYNCSHOW_OFFSET UNITYSDK_OFFSET(0xD59DDD0)
#define RPG_CLIENT_LUAUICONTROLLER_LUASYNCSHOW_OFFSET UNITYSDK_OFFSET(0xD59DCB0)
#define RPG_CLIENT_LUAUICONTROLLER_ONAFTERUI3DLOADED_OFFSET UNITYSDK_OFFSET(0xD5A19D0)
#define RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET UNITYSDK_OFFSET(0xD5A0960)
#define RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET UNITYSDK_OFFSET(0xD5A0CA0)
#define RPG_CLIENT_LUAUICONTROLLER_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0xD59FCC0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET UNITYSDK_OFFSET(0xD5A04A0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET UNITYSDK_OFFSET(0xD5A0630)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET UNITYSDK_OFFSET(0xD59FFC0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xD59DA60)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0xD59F9A0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET UNITYSDK_OFFSET(0xD5A0300)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET UNITYSDK_OFFSET(0xD5A0160)
#define RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET UNITYSDK_OFFSET(0xD5A07C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONLEFTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xD5A13C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xD59FE40)
#define RPG_CLIENT_LUAUICONTROLLER_ONLUAVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xD59DC60)
#define RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0xD5A1560)
#define RPG_CLIENT_LUAUICONTROLLER_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0xD59FB40)
#define RPG_CLIENT_LUAUICONTROLLER_ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xD5A1220)
#define RPG_CLIENT_LUAUICONTROLLER_TONEXTZOOM_OFFSET UNITYSDK_OFFSET(0xD5A0F80)
#define RPG_CLIENT_LUAUICONTROLLER_TOPREZOOM_OFFSET UNITYSDK_OFFSET(0xD5A10D0)
#define RPG_CLIENT_LUAUICONTROLLER_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xD59E620)
#define RPG_CLIENT_LUAUICONTROLLER__BEFORELOADVIEW_OFFSET UNITYSDK_OFFSET(0xD59E270)
#define RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD59D9F0)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xD59EC40)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xD59EDB0)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xD59EF20)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xD59E9C0)
#define RPG_CLIENT_LUAUICONTROLLER__ENABLEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0xD59F540)
#define RPG_CLIENT_LUAUICONTROLLER__ONAFTERVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xD59E390)
#define RPG_CLIENT_LUAUICONTROLLER__ONALLRESOURCESLOADED_OFFSET UNITYSDK_OFFSET(0xD59E4B0)
#define RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xD59E850)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD59F3E0)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xD59F2C0)
#define RPG_CLIENT_LUAUICONTROLLER__ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD59F690)
#define RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0xD59E720)
#define RPG_CLIENT_LUAUICONTROLLER__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xD59F1A0)
#define RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xD59F800)
#define RPG_CLIENT_LUAUICONTROLLER__ONVIEWSET_OFFSET UNITYSDK_OFFSET(0xD59E150)

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
