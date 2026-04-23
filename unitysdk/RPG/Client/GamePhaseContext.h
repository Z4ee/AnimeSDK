#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8CF02C3C8507EA90.h"

namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GAMEPHASECONTEXT_ENTERLIANJIWANFA_OFFSET UNITYSDK_OFFSET(0xA41FF00)
#define RPG_CLIENT_GAMEPHASECONTEXT_GET_TIMESINCELEVELLOADED_OFFSET UNITYSDK_OFFSET(0xA420350)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA41FCD0)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xA41FDF0)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0xA41FE60)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONINIT_OFFSET UNITYSDK_OFFSET(0xA41F490)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONTICK_OFFSET UNITYSDK_OFFSET(0xA41FC40)
#define RPG_CLIENT_GAMEPHASECONTEXT_SHOWLEVELTOAST_OFFSET UNITYSDK_OFFSET(0xA41F9F0)
#define RPG_CLIENT_GAMEPHASECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4203B0)
#define RPG_CLIENT_GAMEPHASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4203A0)
#define RPG_CLIENT_GAMEPHASECONTEXT__ONPSNLOGOUTHANDLER_OFFSET UNITYSDK_OFFSET(0xA4201A0)
#define RPG_CLIENT_GAMEPHASECONTEXT__ONSETSESSIONHANDLER_OFFSET UNITYSDK_OFFSET(0xA420100)
#define RPG_CLIENT_GAMEPHASECONTEXT__ON_ADVENTURE_PHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xA41FB80)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4204A0)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xA420500)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0xA420560)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xA4203D0)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONTICK_OFFSET UNITYSDK_OFFSET(0xA420430)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseContext_TypeDefinitionIndex = 56352;

	class GamePhaseContext : public ::Class_2_8CF02C3C8507EA90
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateSDKReportWorldClientProfileMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GamePhaseContext_TypeDefinitionIndex)->GetStaticField(0x15380);
		}
		::System::Single loadMapTs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__CCTOR_OFFSET))();
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ONINIT_OFFSET))(this);
		}

		::System::Void ShowLevelToast(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_SHOWLEVELTOAST_OFFSET))(this, o);
		}

		::System::Void _on_adventure_phase_enter(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__ON_ADVENTURE_PHASE_ENTER_OFFSET))(this, o);
		}

		::System::Void OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ONENTERMAP_OFFSET))(this);
		}

		::System::Void OnFirstEnterMapFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ONFIRSTENTERMAPFINISH_OFFSET))(this);
		}

		::System::Void _OnSetSessionHandler(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__ONSETSESSIONHANDLER_OFFSET))(this, arg);
		}

		::System::Void enterLianjiWanfa(::System::Boolean fromSession, ::System::String* from)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ENTERLIANJIWANFA_OFFSET))(this, fromSession, from);
		}

		::System::Void _OnPSNLogOutHandler(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__ONPSNLOGOUTHANDLER_OFFSET))(this, arg);
		}

		::System::Single get_TimeSinceLevelLoaded()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_GET_TIMESINCELEVELLOADED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONDISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONENTERMAP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnFirstEnterMapFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONFIRSTENTERMAPFINISH_OFFSET))(this);
		}
	};
}
