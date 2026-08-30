#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B7D28807473A6079.h"

namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GAMEPHASECONTEXT_ENTERLIANJIWANFA_OFFSET UNITYSDK_OFFSET(0xD104FC0)
#define RPG_CLIENT_GAMEPHASECONTEXT_GET_TIMESINCELEVELLOADED_OFFSET UNITYSDK_OFFSET(0xD105440)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD104D90)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xD104EB0)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0xD104F20)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONINIT_OFFSET UNITYSDK_OFFSET(0xD104440)
#define RPG_CLIENT_GAMEPHASECONTEXT_ONTICK_OFFSET UNITYSDK_OFFSET(0xD104D00)
#define RPG_CLIENT_GAMEPHASECONTEXT_SHOWLEVELTOAST_OFFSET UNITYSDK_OFFSET(0xD104A50)
#define RPG_CLIENT_GAMEPHASECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1054A0)
#define RPG_CLIENT_GAMEPHASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD105490)
#define RPG_CLIENT_GAMEPHASECONTEXT__ONPSNLOGOUTHANDLER_OFFSET UNITYSDK_OFFSET(0xD105260)
#define RPG_CLIENT_GAMEPHASECONTEXT__ONSETSESSIONHANDLER_OFFSET UNITYSDK_OFFSET(0xD1051C0)
#define RPG_CLIENT_GAMEPHASECONTEXT__ON_ADVENTURE_PHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xD104C10)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseContext_TypeDefinitionIndex = 61199;

	class GamePhaseContext : public ::Class_2_B7D28807473A6079
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateSDKReportWorldClientProfileMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GamePhaseContext_TypeDefinitionIndex)->GetStaticField(0x1C5F0);
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

		::System::Void ShowLevelToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_SHOWLEVELTOAST_OFFSET))(this, a1);
		}

		::System::Void _on_adventure_phase_enter(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__ON_ADVENTURE_PHASE_ENTER_OFFSET))(this, a1);
		}

		::System::Void OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ONTICK_OFFSET))(this, a1);
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

		::System::Void _OnSetSessionHandler(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__ONSETSESSIONHANDLER_OFFSET))(this, a1);
		}

		::System::Void enterLianjiWanfa(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_ENTERLIANJIWANFA_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPSNLogOutHandler(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT__ONPSNLOGOUTHANDLER_OFFSET))(this, a1);
		}

		::System::Single get_TimeSinceLevelLoaded()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT_GET_TIMESINCELEVELLOADED_OFFSET))(this);
		}
	};
}
