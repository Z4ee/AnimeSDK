#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSetTriggerSkipFakeAvatarType.h"
#include "unitysdk/RPG/GameCore/CollierTriggerComponentEnableReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_542;
class Class_0_16E4307DCC419505_546;
class Class_1_5F51D4049EA87B7B;
class Class_1_A696AB4980B3D7B5;
class Class_1_B9DA9FA7666C65CE;
class Class_2_115E8993398549DB;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MonoEntityTriggerCollision; }
namespace RPG::Client { class MonoGeometryTrigger; }
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace RPG::GameCore { class NPCSoundConfig; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace RPG::GameCore { class ShowHintEffect; }
namespace RPG::GameCore { class UnitHintTriggerConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CAPTURECOLLIDERFROMORIGINPREFAB_OFFSET UNITYSDK_OFFSET(0xCD879B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_COLLIDERTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0xCD8CDD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CONTAINSBLOCKDIALOGUETRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8CA80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATESIMPLESPHEREREGIONINFO_OFFSET UNITYSDK_OFFSET(0xCD88590)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATETRIGGERNODE_OFFSET UNITYSDK_OFFSET(0xCD87790)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DESTROYCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8BC30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD86600)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD7FED0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0xCD861D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLECUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8C670)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8C360)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLENAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD85920)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEOPTIONSTRIGGEROPTIONS_OFFSET UNITYSDK_OFFSET(0xCD8CE20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_1_OFFSET UNITYSDK_OFFSET(0xCD8C010)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8BF70)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLE_OFFSET UNITYSDK_OFFSET(0xCD8DCE0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FINDORSETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCD881D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FORCETICKGEOMETRYREGION_OFFSET UNITYSDK_OFFSET(0xCD8D800)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGERBYTYPE_OFFSET UNITYSDK_OFFSET(0xCD87650)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD875A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASHOYOTAG_OFFSET UNITYSDK_OFFSET(0xCD873F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASMISSIONINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8C210)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCD867A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISCONTAINENTITY_OFFSET UNITYSDK_OFFSET(0xCD8CBD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISENABLE_OFFSET UNITYSDK_OFFSET(0xCD8DF80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCD86F10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCD87460)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xCD867E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCD86710)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xCD86310)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_OPTIMIZECOLLIDERLAYERWHENLOCALPLAYERONLYTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8B1D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERCOLLIDERREGIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8B3C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTLEVELTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD89310)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD891A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERFIVEDIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8AE00)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERGEOMETRYREGIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8B8D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERLOOKATTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD89FC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERMONOCURVEOPTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8AF90)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD84BB0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8A130)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8A310)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD88610)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERHINTSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD88750)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8B040)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD88340)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8AA40)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_1_OFFSET UNITYSDK_OFFSET(0xCD88A80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_2_OFFSET UNITYSDK_OFFSET(0xCD88C60)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD888C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERBYMISSION_OFFSET UNITYSDK_OFFSET(0xCD8A610)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERDEFAULT_OFFSET UNITYSDK_OFFSET(0xCD8A770)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8A8C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPOPTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8A4F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD88F50)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERSUMMONUNITCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD8A960)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPCMONSTER_OFFSET UNITYSDK_OFFSET(0xCD89700)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPC_OFFSET UNITYSDK_OFFSET(0xCD89D90)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYPROP_OFFSET UNITYSDK_OFFSET(0xCD89380)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xCD8D8B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD84D70)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERUNITHINTTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD88DF0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xCD8DFD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETSKIPFAKEAVATARFLAG_OFFSET UNITYSDK_OFFSET(0xCD8BDD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETUPTRIGGERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCD87E50)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCD8D700)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD85210)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD853B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__BUILDDEFAULTTRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xCD84670)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD8E290)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__COLLECTERRORINFO_OFFSET UNITYSDK_OFFSET(0xCD85AC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CONVERTCOLLIDERTOTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xCD87BE0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD8E050)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DEFINEDEFAULTSPHERETRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xCD8DB30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DESTROYTRIGGERLOGICWHENDISPOSE_OFFSET UNITYSDK_OFFSET(0xCD864F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTCUSTOMTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xCD86C80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTINTERACTIONTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xCD86A80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITNAMEDTRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xCD84B60)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITROOTNODE_OFFSET UNITYSDK_OFFSET(0xCD86880)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERENABLECHANGE_OFFSET UNITYSDK_OFFSET(0xCD8DBC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xCD8DAA0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__OVERRIDEINSTANCETRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xCD84980)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERREGISTER_OFFSET UNITYSDK_OFFSET(0xCD8BAA0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERUNREGISTER_OFFSET UNITYSDK_OFFSET(0xCD8BC90)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__REGISTERPROPPERSPECTIVEWALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD871F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPCOLLIDERANDREGION_OFFSET UNITYSDK_OFFSET(0xCD8B550)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPGEOMETRYREGION_OFFSET UNITYSDK_OFFSET(0xCD8B7B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TICKTRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xCD8D4B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYREGISTERDYNAMICATTACHTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD84FD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYUNREGISTERDYNAMICATTACHTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD85270)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNINITROOTNODE_OFFSET UNITYSDK_OFFSET(0xCD86E80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNREGISTERALLTRIGGERS_OFFSET UNITYSDK_OFFSET(0xCD86360)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEATTACHEDTRIGGERS_OFFSET UNITYSDK_OFFSET(0xCD8D2E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEGEOMETRYREGIONS_OFFSET UNITYSDK_OFFSET(0xCD8D080)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xCD8D420)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERS_OFFSET UNITYSDK_OFFSET(0xCD8D150)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCD8E2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderTriggerComponent_TypeDefinitionIndex = 53715;

	class ColliderTriggerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::UnityEngine::GameObject** StaticGet__UnregisterCacheNode()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(ColliderTriggerComponent_TypeDefinitionIndex)->GetStaticField(0x67370);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(ColliderTriggerComponent_TypeDefinitionIndex)->GetStaticField(0x67378);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* _TriggerInfoMapping; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _TriggerAttachInfoMapping; // 0x20
		::UnityEngine::GameObject* _RootModel; // 0x28
		::RPG::GameCore::LevelTriggerInfo* _DefaultInteractionTriggerInfo; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MonoGeometryTrigger*>* _GeometryRegions; // 0x38
		::UnityEngine::Transform* _Root; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Class_1_5F51D4049EA87B7B*, ::Class_1_A696AB4980B3D7B5*>>* _ExcutingTask; // 0x48
		::System::Collections::Generic::Dictionary_2<::Class_1_A696AB4980B3D7B5*, ::UnityEngine::Transform*>* _NeedSyncAfterAttachTriggers; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MonoEntityTriggerCollision*>* _TriggerCollisions; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_542*>* _ColliderTriggerMap; // 0x60
		::RPG::GameCore::LevelTriggerInfo* _DefaultCustomTriggerInfo; // 0x68
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_546*>* _TickTriggerList; // 0x70
		::System::UInt64 _EnableBitset; // 0x78
		::System::Int32 _GeometryRegionCount; // 0x80
		::System::Boolean _HasExecutingTask; // 0x84
		::System::Int32 _TickTriggerCount; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void _BuildDefaultTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__BUILDDEFAULTTRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Void _OverrideInstanceTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__OVERRIDEINSTANCETRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Void _InitNamedTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITNAMEDTRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Boolean RegisterNamedTrigger(::System::String* a1, ::Class_1_A696AB4980B3D7B5* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_A696AB4980B3D7B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNAMEDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterNamedTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERNAMEDTRIGGER_OFFSET))(this, a1);
		}

		::System::Void EnableNamedTrigger(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLENAMEDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectErrorInfo(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__COLLECTERRORINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnableButtons(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEBUTTONS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryRegisterDynamicAttachTrigger(::System::String* a1, ::Class_1_A696AB4980B3D7B5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_A696AB4980B3D7B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYREGISTERDYNAMICATTACHTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void _TryUnregisterDynamicAttachTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYUNREGISTERDYNAMICATTACHTRIGGER_OFFSET))(this, a1);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONWILLBEDESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_542* GetTrigger(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_542*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGER_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_542* GetTriggerByType(::System::Type* a1)
		{
			return ((::Class_0_16E4307DCC419505_542*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGERBYTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* CreateTriggerNode(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATETRIGGERNODE_OFFSET))(this, a1);
		}

		::System::Boolean CaptureColliderFromOriginPrefab(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CAPTURECOLLIDERFROMORIGINPREFAB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Collider* SetupTriggerCollider(::RPG::GameCore::LevelTriggerInfo* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::RPG::GameCore::LevelTriggerInfo*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETUPTRIGGERCOLLIDER_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Collider* FindOrSetupCollider(::System::Single a1, ::System::String* a2)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FINDORSETUPCOLLIDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterNpcSoundTrigger(::RPG::GameCore::NPCSoundConfig* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCSoundConfig*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCSOUNDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterNpcCustomTrigger(::System::String* a1, ::System::Single a2, ::Class_2_115E8993398549DB* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::Class_2_115E8993398549DB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCCUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterNPCMonsterHintSoundTrigger(::RPG::GameCore::NPCMonsterHintSoundConfig* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCMonsterHintSoundConfig*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERHINTSOUNDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropHintTrigger(::RPG::GameCore::PropConfig* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropHintTrigger_1(::RPG::GameCore::ShowHintEffect* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShowHintEffect*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropHintTrigger_2(::RPG::GameCore::ShowHintEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_2_OFFSET))(this, a1);
		}

		::System::Boolean RegisterUnitHintTrigger(::RPG::GameCore::UnitHintTriggerConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::UnitHintTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERUNITHINTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterPropSoundTrigger(::RPG::GameCore::PropSoundConfig* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropSoundConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPSOUNDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterDistrictTrigger(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterDistrictLevelTrigger(::Class_1_B9DA9FA7666C65CE* a1, ::Class_0_16E4307DCC419505_542* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTLEVELTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterTalkTriggerByProp(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYPROP_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTalkTriggerByNpcMonster(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPCMONSTER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTalkTriggerByNpc(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPC_OFFSET))(this, a1);
		}

		::System::Boolean RegisterLookAtTrigger(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERLOOKATTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterNearbyAnimTrigger(::RPG::GameCore::LevelNPCNearbyAnimConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYANIMTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterNearbyEventTrigger(::RPG::GameCore::LevelNPCNearbyEventConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYEVENTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterPropOptionTrigger(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_542* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPOPTIONTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropInteractionTriggerByMission(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_542* a2, ::Il2CppArray<::RPG::GameCore::EntityType>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_542*, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERBYMISSION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterPropInteractionTriggerDefault(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_542* a2, ::Il2CppArray<::RPG::GameCore::EntityType>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_542*, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERDEFAULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterPropInteractionTrigger(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_542* a2, ::System::Boolean a3, ::Il2CppArray<::RPG::GameCore::EntityType>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_542*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean RegisterSummonUnitCustomTrigger(::System::String* a1, ::System::Single a2, ::Class_0_16E4307DCC419505_542* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERSUMMONUNITCUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterPropCustomTrigger(::System::String* a1, ::RPG::Client::MapPropDef* a2, ::Class_0_16E4307DCC419505_542* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPCUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterFiveDimTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_542* a3, ::Class_2_B9E8C2EEAA5C96EC* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_542*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERFIVEDIMTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterPropPerspectiveWallTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__REGISTERPROPPERSPECTIVEWALLTRIGGER_OFFSET))(this);
		}

		::System::Boolean RegisterMonoCurveOptionTrigger(::Class_0_16E4307DCC419505_542* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERMONOCURVEOPTIONTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterNpcMonsterInteractionTrigger(::System::Single a1, ::RPG::MVector3 a2, ::Class_0_16E4307DCC419505_542* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERINTERACTIONTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OptimizeColliderLayerWhenLocalPlayerOnlyTrigger(::Class_0_16E4307DCC419505_542* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_542*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_OPTIMIZECOLLIDERLAYERWHENLOCALPLAYERONLYTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterColliderRegionTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_542* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_542*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERCOLLIDERREGIONTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetupGeometryRegion(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::RPG::Client::MonoGeometryTrigger*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::RPG::Client::MonoGeometryTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPGEOMETRYREGION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterGeometryRegionTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_542* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERGEOMETRYREGIONTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PostProcessTickableTriggerAfterRegister(::Class_0_16E4307DCC419505_546* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_546*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERREGISTER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_542* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_542*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DestroyCustomTrigger(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DESTROYCUSTOMTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void _PostProcessTickableTriggerAfterUnregister(::Class_0_16E4307DCC419505_546* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_546*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERUNREGISTER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterTrigger(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void SetSkipFakeAvatarFlag(::System::Boolean a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETSKIPFAKEAVATARFLAG_OFFSET))(this, a1, a2);
		}

		::System::Void EnableTrigger(::System::Boolean a1, ::Class_1_A696AB4980B3D7B5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_A696AB4980B3D7B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void EnableTrigger_1(::System::Boolean a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_1_OFFSET))(this, a1, a2);
		}

		::System::Void EnableAllTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEALLTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean HasMissionInteractionTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASMISSIONINTERACTIONTRIGGER_OFFSET))(this);
		}

		::System::Void EnableInteractionTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEINTERACTIONTRIGGER_OFFSET))(this, a1);
		}

		::System::Void EnableCustomTrigger(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLECUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ContainsBlockDialogueTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CONTAINSBLOCKDIALOGUETRIGGER_OFFSET))(this);
		}

		::System::Boolean IsContainEntity(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISCONTAINENTITY_OFFSET))(this, a1);
		}

		::System::Int32 ColliderTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_COLLIDERTRIGGERCOUNT_OFFSET))(this);
		}

		::System::Void EnableOptionsTriggerOptions(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEOPTIONSTRIGGEROPTIONS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateGeometryRegions(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEGEOMETRYREGIONS_OFFSET))(this, a1);
		}

		::System::Void _UpdateTriggers(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERS_OFFSET))(this, a1);
		}

		::System::Void _UpdateAttachedTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEATTACHEDTRIGGERS_OFFSET))(this);
		}

		::System::Void _UpdateTriggerLogic(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERLOGIC_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void ForceTickGeometryRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FORCETICKGEOMETRYREGION_OFFSET))(this);
		}

		::System::Void RegisterTriggerLogic(::Class_1_5F51D4049EA87B7B* a1, ::Class_1_A696AB4980B3D7B5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::Class_1_A696AB4980B3D7B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGERLOGIC_OFFSET))(this, a1, a2);
		}

		::System::Void _TickTriggerLogic(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TICKTRIGGERLOGIC_OFFSET))(this, a1);
		}

		::System::Void _OnTriggerLogicFinish(::Class_1_5F51D4049EA87B7B* a1, ::Class_1_A696AB4980B3D7B5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::Class_1_A696AB4980B3D7B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERLOGICFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void _DestroyTriggerLogicWhenDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DESTROYTRIGGERLOGICWHENDISPOSE_OFFSET))(this);
		}

		::System::Void _InitRootNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITROOTNODE_OFFSET))(this);
		}

		::System::Void _UninitRootNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNINITROOTNODE_OFFSET))(this);
		}

		::RPG::GameCore::LevelTriggerInfo* _DefineDefaultSphereTriggerInfo(::System::Single a1)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DEFINEDEFAULTSPHERETRIGGERINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* _ConvertColliderToTriggerInfo(::UnityEngine::Collider* a1)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CONVERTCOLLIDERTOTRIGGERINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* CreateSimpleSphereRegionInfo(::System::Single a1)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATESIMPLESPHEREREGIONINFO_OFFSET))(this, a1);
		}

		::System::Void _InitDefaultInteractionTriggerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTINTERACTIONTRIGGERINFO_OFFSET))(this);
		}

		::System::Void _InitDefaultCustomTriggerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTCUSTOMTRIGGERINFO_OFFSET))(this);
		}

		::System::Void _UnregisterAllTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNREGISTERALLTRIGGERS_OFFSET))(this);
		}

		::System::Void _SetupColliderAndRegion(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::UnityEngine::Collider*& a3, ::RPG::Client::MonoTriggerRegion*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::UnityEngine::Collider*&, ::RPG::Client::MonoTriggerRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPCOLLIDERANDREGION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnTriggerEnableChange(::Class_0_16E4307DCC419505_546* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERENABLECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasHoyoTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASHOYOTAG_OFFSET))(this, a1);
		}

		::System::Void Enable(::System::Boolean a1, ::RPG::GameCore::CollierTriggerComponentEnableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CollierTriggerComponentEnableReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISENABLE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
