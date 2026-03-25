#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8CF02C3C8507EA90.h"

namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GAMEPHASECONTEXT_ENTERLIANJIWANFA_OFFSET UNITYSDK_OFFSET(0x97A8730)
#define RPG_CLIENT_GAMEPHASECONTEXT_GET_TIMESINCELEVELLOADED_OFFSET UNITYSDK_OFFSET(0x97A8BC0)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x97A8500)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x97A8620)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0x97A8690)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONINIT_OFFSET UNITYSDK_OFFSET(0x975E6A0)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONTICK_OFFSET UNITYSDK_OFFSET(0x97A8470)
#define RPG_CLIENT_GAMEPHASECONTEXT_SHOWLEVELTOAST_OFFSET UNITYSDK_OFFSET(0x975EC00)
#define RPG_CLIENT_GAMEPHASECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x97A8C20)
#define RPG_CLIENT_GAMEPHASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x97A8C10)
#define RPG_CLIENT_GAMEPHASECONTEXT__ONPSNLOGOUTHANDLER_OFFSET UNITYSDK_OFFSET(0x97A8A10)
#define RPG_CLIENT_GAMEPHASECONTEXT__ONSETSESSIONHANDLER_OFFSET UNITYSDK_OFFSET(0x97A8930)
#define RPG_CLIENT_GAMEPHASECONTEXT__ON_ADVENTURE_PHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x97A83B0)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x97A8D10)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x97A8D70)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0x97A8DD0)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x97A8C40)
#define RPG_CLIENT_GAMEPHASECONTEXT___IFIXBASEPROXY_ONTICK_OFFSET UNITYSDK_OFFSET(0x97A8CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseContext_TypeDefinitionIndex = 49530;

	class GamePhaseContext : public ::Class_2_8CF02C3C8507EA90
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateSDKReportWorldClientProfileMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GamePhaseContext_TypeDefinitionIndex)->GetStaticField(0x11480);
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
