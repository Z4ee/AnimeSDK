#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

class Class_1_D201E8DD2E0E7281;
class Class_1_E05E7A6D9DE9138B;
class Class_1_E620C0D36AB36D8A;
class Class_1_ED128C95E67DC400;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_CREATECAT_OFFSET UNITYSDK_OFFSET(0xCA85420)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_DESTROYCAT_OFFSET UNITYSDK_OFFSET(0xCA855B0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_EXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA85B60)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xCA84B10)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_TAILCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCA85B70)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ISTRAINPARTYFLOOR_OFFSET UNITYSDK_OFFSET(0xCA85A80)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0xCA84220)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xCA84730)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICDESTROY_OFFSET UNITYSDK_OFFSET(0xCA85990)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICINIT_OFFSET UNITYSDK_OFFSET(0xCA85820)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TICK_OFFSET UNITYSDK_OFFSET(0xCA84B20)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TRIGGERENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xCA85690)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA84470)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA85B80)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xCA84BA0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTEND_OFFSET UNITYSDK_OFFSET(0xCA85030)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTSTART_OFFSET UNITYSDK_OFFSET(0xCA84F90)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXREFRESHED_OFFSET UNITYSDK_OFFSET(0xCA84F00)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCATGODVISIBILITYCHANGE_OFFSET UNITYSDK_OFFSET(0xCA84E70)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0xCA84C30)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONPROPCREATE_OFFSET UNITYSDK_OFFSET(0xCA84D00)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xCA84690)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADCHARACTERASSET_OFFSET UNITYSDK_OFFSET(0xCA85140)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADEXHIBITASSET_OFFSET UNITYSDK_OFFSET(0xCA85380)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA848F0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xCA85BD0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xCA85C30)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCA85C90)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchGameModule_TypeDefinitionIndex = 56279;

	class TrainCakeCatchGameModule : public ::Class_1_47C4886CB6C61234
	{
	public:
		::Class_1_D201E8DD2E0E7281* _BoxController; // 0x20
		::Class_1_ED128C95E67DC400* _TailController; // 0x28
		::RPG::Client::TrainCakeCatchExhibitController* _ExhibitController; // 0x30
		::Class_1_E05E7A6D9DE9138B* _AssetLoader; // 0x38
		::Il2CppArray<::System::String*>* _PreloadCharacterIDs; // 0x40
		::Class_1_E620C0D36AB36D8A* _CatGodController; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TICK_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnNpcCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONNPCCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnPropCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONPROPCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnCatGodVisibilityChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCATGODVISIBILITYCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnCakeCatchBoxRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnCakeCatchBoxInteractStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTSTART_OFFSET))(this, a1);
		}

		::System::Void _OnCakeCatchBoxInteractEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTEND_OFFSET))(this, a1);
		}

		::System::Void _PreloadAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADASSETS_OFFSET))(this);
		}

		::System::Void _PreloadCharacterAsset(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADCHARACTERASSET_OFFSET))(this, a1);
		}

		::System::Void _PreloadExhibitAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADEXHIBITASSET_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateCat(::RPG::GameCore::NPCDataRow* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::NPCDataRow*, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_CREATECAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DestroyCat(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_DESTROYCAT_OFFSET))(this, a1);
		}

		::System::Void TriggerEntityEvent(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TRIGGERENTITYEVENT_OFFSET))(this, a1, a2);
		}

		static ::System::Void StaticInit(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICINIT_OFFSET))(a1);
		}

		static ::System::Void StaticDestroy(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICDESTROY_OFFSET))(a1);
		}

		static ::System::Boolean IsTrainPartyFloor(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ISTRAINPARTYFLOOR_OFFSET))(a1);
		}

		::RPG::Client::TrainCakeCatchExhibitController* get_ExhibitController()
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_EXHIBITCONTROLLER_OFFSET))(this);
		}

		::Class_1_ED128C95E67DC400* get_TailController()
		{
			return ((::Class_1_ED128C95E67DC400*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_TAILCONTROLLER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE___IFIXBASEPROXY_ONINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
