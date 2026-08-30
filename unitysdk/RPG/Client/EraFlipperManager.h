#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
class Class_1_AC94D03FA4E4D000;
class Class_1_D8BCA6FA1DEB13B9;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManagerDebug; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class EraRegion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ERAFLIPPERMANAGER_ADDIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x19938E30)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ADDPARTIALFLIPDEVICE_OFFSET UNITYSDK_OFFSET(0x19937E60)
#define RPG_CLIENT_ERAFLIPPERMANAGER_COLLIDERSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1993B8F0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199381A0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_EXITLIGHTDEVICECONTROL_OFFSET UNITYSDK_OFFSET(0x19938B50)
#define RPG_CLIENT_ERAFLIPPERMANAGER_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0x19939530)
#define RPG_CLIENT_ERAFLIPPERMANAGER_FLIP_OFFSET UNITYSDK_OFFSET(0x19936ED0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GETERASTATETAG_OFFSET UNITYSDK_OFFSET(0x19938D60)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x1993BA00)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERAREGIONID_OFFSET UNITYSDK_OFFSET(0x1993B6E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERASTATETAG_OFFSET UNITYSDK_OFFSET(0x1993B740)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1993B790)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_FLIPSTATETYPE_OFFSET UNITYSDK_OFFSET(0x19936E40)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISINVERSEALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1993B880)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISLIGHTDEVICETRANSITION_OFFSET UNITYSDK_OFFSET(0x19938D10)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x19937FA0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDYNAMICDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x19938020)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x1993B7A0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x1993B810)
#define RPG_CLIENT_ERAFLIPPERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x19935660)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINANYLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x19938CA0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINCONTROLLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x19938BB0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x19938C10)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISPARTIALFLIPDEVICEON_OFFSET UNITYSDK_OFFSET(0x19937E00)
#define RPG_CLIENT_ERAFLIPPERMANAGER_MANUALREFRESHDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x19938A70)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONFLIPDEVICETARGETSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x19937F20)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONREGIONVISUALSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1993A7D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONSWITCHDEVICE_OFFSET UNITYSDK_OFFSET(0x19937BA0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_PREDISPOSE_OFFSET UNITYSDK_OFFSET(0x199381E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x199392D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEPARTIALFLIPDEVICE_OFFSET UNITYSDK_OFFSET(0x19937EC0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SETPROPERAFLIPVISIBLE_OFFSET UNITYSDK_OFFSET(0x19937730)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x1993BA10)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SHOULDDELAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x199394E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_STARTLIGHTDEVICECONTROL_OFFSET UNITYSDK_OFFSET(0x19938AC0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_TRYFLIP_OFFSET UNITYSDK_OFFSET(0x19936AC0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_TRYPRESETCOLLIDERBEFOREFLIP_OFFSET UNITYSDK_OFFSET(0x199369B0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19938100)
#define RPG_CLIENT_ERAFLIPPERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x199353D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ENTERERAREGION_OFFSET UNITYSDK_OFFSET(0x19935E20)
#define RPG_CLIENT_ERAFLIPPERMANAGER__GRAPHICQUALITYCHANGE_OFFSET UNITYSDK_OFFSET(0x1993B660)
#define RPG_CLIENT_ERAFLIPPERMANAGER__INITGROUP_OFFSET UNITYSDK_OFFSET(0x199395C0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONENTER_OFFSET UNITYSDK_OFFSET(0x19936720)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONLEAVE_OFFSET UNITYSDK_OFFSET(0x1993A130)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONERAFLIPREGIONSTATESYNC_OFFSET UNITYSDK_OFFSET(0x1993ACF0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x1993AB30)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONPLAYERMAPTELEPORT_OFFSET UNITYSDK_OFFSET(0x1993AEE0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONTEAMLEADERCHANGE_OFFSET UNITYSDK_OFFSET(0x1993B560)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONTELEPORTFINISH_OFFSET UNITYSDK_OFFSET(0x1993AF30)
#define RPG_CLIENT_ERAFLIPPERMANAGER__PROCESSLEAVEREGION_OFFSET UNITYSDK_OFFSET(0x1993A180)
#define RPG_CLIENT_ERAFLIPPERMANAGER__REFRESHGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x199373B0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__SETPROPVISIBLE_OFFSET UNITYSDK_OFFSET(0x199377A0)
#define RPG_CLIENT_ERAFLIPPERMANAGER___ONERAFLIPREGIONSTATESYNC_B__35_0_OFFSET UNITYSDK_OFFSET(0x1993BA20)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager_TypeDefinitionIndex = 60606;

	class EraFlipperManager : public ::System::Object
	{
	public:
		// static const ::System::String* EraState1Tag; // 0x0
		// static const ::System::String* EraState2Tag; // 0x0
		// static const ::System::String* EraFlipperCommonConfigPath; // 0x0
		::RPG::GameCore::EraFlipperConfig* _FlipperConfig; // 0x10
		::RPG::GameCore::EraRegion* _CurrentEraRegion; // 0x18
		::RPG::Client::AdventurePhase* _AdventurePhase; // 0x20
		::Class_1_D8BCA6FA1DEB13B9* CurrentStageRegion; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* AlwaysVisibleGroupsDic; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _IgnoreEntityList; // 0x38
		::RPG::Client::EraFlipperManagerDebug* _DebugMono; // 0x40
		::RPG::Client::EraFlipperCommonConfig* _CommonConfig_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _LockStreamingGroups; // 0x50
		::Class_1_AC94D03FA4E4D000* _PartialFlipDevicePlugin; // 0x58
		::System::Collections::Generic::HashSet_1<::Class_1_D8BCA6FA1DEB13B9*>* _AllActiveStageRegionsWithEra; // 0x60
		::RPG::GameCore::EraStateType _CurrentEraState; // 0x68
		::System::Single _FlipPerformDelayTime; // 0x6C
		::System::Boolean _InTeleport; // 0x70
		::System::Boolean FollowDamping; // 0x71
		::System::Boolean _PendingRefreshTaPlugin; // 0x72
		::System::Boolean _PreviewSetColliderState; // 0x73
		::System::Boolean _ManualFlip; // 0x74
		::System::Boolean _Initialized; // 0x75

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::GameCore::EraFlipperConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void TryPresetColliderBeforeFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_TRYPRESETCOLLIDERBEFOREFLIP_OFFSET))(this);
		}

		::System::Void TryFlip(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_TRYFLIP_OFFSET))(this, a1, a2);
		}

		::System::Void Flip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_FLIP_OFFSET))(this);
		}

		::System::Void SetPropEraFlipVisible(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SETPROPERAFLIPVISIBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSwitchDevice(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONSWITCHDEVICE_OFFSET))(this, a1);
		}

		::System::Boolean IsPartialFlipDeviceOn(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISPARTIALFLIPDEVICEON_OFFSET))(this, a1);
		}

		::System::Void AddPartialFlipDevice(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ADDPARTIALFLIPDEVICE_OFFSET))(this, a1);
		}

		::System::Void RemovePartialFlipDevice(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEPARTIALFLIPDEVICE_OFFSET))(this, a1);
		}

		::System::Void OnFlipDeviceTargetStateChange(::RPG::Client::PartialFlipDeviceComponent* a1, ::RPG::Client::FlipDevicePoint* a2, ::RPG::Client::FlipDevicePoint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONFLIPDEVICETARGETSTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasAnyDeviceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDEVICEACTIVE_OFFSET))(this);
		}

		::System::Boolean HasAnyDynamicDeviceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDYNAMICDEVICEACTIVE_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void PreDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_PREDISPOSE_OFFSET))(this);
		}

		::System::Void ManualRefreshDeviceState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_MANUALREFRESHDEVICESTATE_OFFSET))(this);
		}

		::System::Void StartLightDeviceControl(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_STARTLIGHTDEVICECONTROL_OFFSET))(this, a1);
		}

		::System::Void ExitLightDeviceControl(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_EXITLIGHTDEVICECONTROL_OFFSET))(this, a1);
		}

		::System::Boolean IsInControlLightProjectVolume(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINCONTROLLIGHTPROJECTVOLUME_OFFSET))(this, a1);
		}

		::System::Boolean IsInLightProjectVolume(::RPG::Client::PartialFlipDeviceComponent* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINLIGHTPROJECTVOLUME_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInAnyLightProjectVolume(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PartialFlipDeviceComponent*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::PartialFlipDeviceComponent*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINANYLIGHTPROJECTVOLUME_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsLightDeviceTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISLIGHTDEVICETRANSITION_OFFSET))(this);
		}

		static ::System::String* GetEraStateTag(::RPG::GameCore::EraStateType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GETERASTATETAG_OFFSET))(a1);
		}

		::System::Void AddIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ADDIGNOREENTITY_OFFSET))(this, a1);
		}

		::System::Void RemoveIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEIGNOREENTITY_OFFSET))(this, a1);
		}

		::System::Boolean ShouldDelayPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SHOULDDELAYPERFORMANCE_OFFSET))(this);
		}

		::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> FillFollowingPlayerLightConeInfo()
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET))(this);
		}

		::System::Void _EnterEraRegion(::Class_1_D8BCA6FA1DEB13B9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ENTERERAREGION_OFFSET))(this, a1);
		}

		::System::Void _OnCurrentRegionEnter(::Class_1_D8BCA6FA1DEB13B9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONENTER_OFFSET))(this, a1);
		}

		::System::Void _OnCurrentRegionLeave(::Class_1_D8BCA6FA1DEB13B9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONLEAVE_OFFSET))(this, a1);
		}

		::System::Void _ProcessLeaveRegion(::Class_1_D8BCA6FA1DEB13B9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__PROCESSLEAVEREGION_OFFSET))(this, a1);
		}

		::System::Void OnRegionVisualStateChange(::Class_1_D8BCA6FA1DEB13B9* a1, ::RPG::GameCore::StageRegionActiveState a2, ::RPG::GameCore::StageRegionActiveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONREGIONVISUALSTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnGroupLoaded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONGROUPLOADED_OFFSET))(this, a1);
		}

		::System::Void _OnEraFlipRegionStateSync(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONERAFLIPREGIONSTATESYNC_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerMapTeleport(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONPLAYERMAPTELEPORT_OFFSET))(this, a1);
		}

		::System::Void _OnTeleportFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONTELEPORTFINISH_OFFSET))(this, a1);
		}

		::System::Void _InitGroup(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__INITGROUP_OFFSET))(this, a1);
		}

		::System::Void _RefreshGroupState(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__REFRESHGROUPSTATE_OFFSET))(this, a1);
		}

		::System::Void _SetPropVisible(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__SETPROPVISIBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnTeamLeaderChange(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONTEAMLEADERCHANGE_OFFSET))(this, a1);
		}

		::System::Void _GraphicQualityChange(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__GRAPHICQUALITYCHANGE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentEraRegionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERAREGIONID_OFFSET))(this);
		}

		::System::String* get_CurrentEraStateTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERASTATETAG_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_CurrentStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTSTATETYPE_OFFSET))(this);
		}

		::System::Boolean HasAnyFollowPlayerDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYFOLLOWPLAYERDEVICE_OFFSET))(this);
		}

		::System::Boolean HasFollowPlayerDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASFOLLOWPLAYERDEVICE_OFFSET))(this);
		}

		::System::Boolean get_IsInverseAllCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISINVERSEALLCOLLIDER_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType ColliderStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_COLLIDERSTATETYPE_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_FlipStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_FLIPSTATETYPE_OFFSET))(this);
		}

		::RPG::Client::EraFlipperCommonConfig* get_CommonConfig()
		{
			return ((::RPG::Client::EraFlipperCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_COMMONCONFIG_OFFSET))(this);
		}

		::System::Void set_CommonConfig(::RPG::Client::EraFlipperCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SET_COMMONCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean __OnEraFlipRegionStateSync_b__35_0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___ONERAFLIPREGIONSTATESYNC_B__35_0_OFFSET))(this, a1);
		}
	};
}
