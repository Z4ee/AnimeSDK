#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"

class Class_1_3CB0C58942F93508;
class Class_1_4A90D78D94DB1347;
class Class_1_D201E8DD2E0E7281;
class Class_1_E620C0D36AB36D8A;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_CREATECAT_OFFSET UNITYSDK_OFFSET(0x197C35E0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_DESTROYCAT_OFFSET UNITYSDK_OFFSET(0x197C37D0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_EXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0x197C9430)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x197C8770)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_TAILCONTROLLER_OFFSET UNITYSDK_OFFSET(0x197C9440)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ISTRAINPARTYFLOOR_OFFSET UNITYSDK_OFFSET(0x197C9350)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0x197C7DD0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x197C8310)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICDESTROY_OFFSET UNITYSDK_OFFSET(0x197C9260)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICINIT_OFFSET UNITYSDK_OFFSET(0x197C90B0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TICK_OFFSET UNITYSDK_OFFSET(0x197C8780)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TRIGGERENTITYEVENT_OFFSET UNITYSDK_OFFSET(0x197C3920)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x197C8030)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x197C9450)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x197C8800)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTEND_OFFSET UNITYSDK_OFFSET(0x197C8C90)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTSTART_OFFSET UNITYSDK_OFFSET(0x197C8BF0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXREFRESHED_OFFSET UNITYSDK_OFFSET(0x197C8B60)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCATGODVISIBILITYCHANGE_OFFSET UNITYSDK_OFFSET(0x197C8AD0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0x197C8890)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONPROPCREATE_OFFSET UNITYSDK_OFFSET(0x197C8960)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x197C8270)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADCHARACTERASSET_OFFSET UNITYSDK_OFFSET(0x197C8DA0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADEXHIBITASSET_OFFSET UNITYSDK_OFFSET(0x197C8FE0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x197C8530)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchGameModule_TypeDefinitionIndex = 60335;

	class TrainCakeCatchGameModule : public ::Class_1_5BBB2050B3F3F683
	{
	public:
		::Class_1_4A90D78D94DB1347* _AssetLoader; // 0x20
		::Class_1_E620C0D36AB36D8A* _CatGodController; // 0x28
		::RPG::Client::TrainCakeCatchExhibitController* _ExhibitController; // 0x30
		::Class_1_D201E8DD2E0E7281* _BoxController; // 0x38
		::Il2CppArray<::System::String*>* _PreloadCharacterIDs; // 0x40
		::Class_1_3CB0C58942F93508* _TailController; // 0x48

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

		::Class_1_3CB0C58942F93508* get_TailController()
		{
			return ((::Class_1_3CB0C58942F93508*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_TAILCONTROLLER_OFFSET))(this);
		}
	};
}
