#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
class Class_1_BC2A32B558A4FA5E;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class SetFlipperLightDeviceFollowPlayer; }
namespace RPG::GameCore { class SetFlipperLightDeviceRangeFollowPlayer; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace VLB { class VolumetricLightBeam; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_CHANGEPOINT_OFFSET UNITYSDK_OFFSET(0xDA3CC30)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA3EAB0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ENDTWINKLE_OFFSET UNITYSDK_OFFSET(0xDA40ED0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FILLTAPLUGIN_OFFSET UNITYSDK_OFFSET(0xDA3D4C0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0xDA3FFA0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0xDA3E7E0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETRANGEFOLLOWLIMITRANGE_OFFSET UNITYSDK_OFFSET(0xDA3EF20)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ALLFLIPDEVICEPOINTLIST_OFFSET UNITYSDK_OFFSET(0xDA42160)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTAT_OFFSET UNITYSDK_OFFSET(0xDA42870)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTRADIUS_OFFSET UNITYSDK_OFFSET(0xDA428C0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ISINFOLLOWBLEND_OFFSET UNITYSDK_OFFSET(0xDA428A0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTBEAM_OFFSET UNITYSDK_OFFSET(0xDA42850)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTCONETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDA42810)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHT_OFFSET UNITYSDK_OFFSET(0xDA42830)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDA427F0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGUPWARD_OFFSET UNITYSDK_OFFSET(0xDA3EA70)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ROTATERINGANGULARSPEED_OFFSET UNITYSDK_OFFSET(0xDA428B0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_TURNBLEND_OFFSET UNITYSDK_OFFSET(0xDA42880)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET__PROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDA42930)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDA3B930)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xDA3D0E0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0xDA3EEC0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWTURNON_OFFSET UNITYSDK_OFFSET(0xDA3EE10)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINRANGEFOLLOW_OFFSET UNITYSDK_OFFSET(0xDA3EE70)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINTWINKLE_OFFSET UNITYSDK_OFFSET(0xDA3EDC0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINVERSECOLLIDER_OFFSET UNITYSDK_OFFSET(0xDA3EF80)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISLIGHTMOVECHANGE_OFFSET UNITYSDK_OFFSET(0xDA3ECD0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISRENDERACTIVE_OFFSET UNITYSDK_OFFSET(0xDA3E700)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xDA3ED70)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_MANUALREFRESH_OFFSET UNITYSDK_OFFSET(0xDA3F0D0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_NEEDPRECESSFOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0xDA411B0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xDA3C4A0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xDA3F6A0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONENTITYBEFOREDYING_OFFSET UNITYSDK_OFFSET(0xDA41FD0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONEXITCONTROL_OFFSET UNITYSDK_OFFSET(0xDA3EA10)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONSTREAMINGINSTANCECHANGE_OFFSET UNITYSDK_OFFSET(0xDA3F3D0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_OVERRIDEFOLLOWCOLLIDERMODE_OFFSET UNITYSDK_OFFSET(0xDA3F010)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_RANGEFOLLOWPLAYER_OFFSET UNITYSDK_OFFSET(0xDA408F0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_REINIT_OFFSET UNITYSDK_OFFSET(0xDA3CBB0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xDA3D180)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTBEAM_OFFSET UNITYSDK_OFFSET(0xDA42860)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTCONETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDA42820)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHT_OFFSET UNITYSDK_OFFSET(0xDA42840)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDA42800)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGUPWARD_OFFSET UNITYSDK_OFFSET(0xDA3EA90)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_TURNBLEND_OFFSET UNITYSDK_OFFSET(0xDA42890)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET__PROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDA42940)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_STARTTWINKLE_OFFSET UNITYSDK_OFFSET(0xDA40C50)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATEFOLLOW_OFFSET UNITYSDK_OFFSET(0xDA41370)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATETWINKLE_OFFSET UNITYSDK_OFFSET(0xDA410E0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__COLLECTAFFECTBLOCKANDITEM_OFFSET UNITYSDK_OFFSET(0xDA3C1A0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xDA42950)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONERAFLIPLIGHTROTATEEND_OFFSET UNITYSDK_OFFSET(0xDA42590)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONPROPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xDA421E0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xDA3F740)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREGIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xDA42270)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDA3C320)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDA3EB50)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent_TypeDefinitionIndex = 73223;

	class PartialFlipDeviceComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::EraFlipperCommonConfig* _CommonConfig; // 0x18
		::UnityEngine::Transform* _RingTransform_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FlipDevicePoint*>* _FlipDevicePointList; // 0x28
		::RPG::Client::Promises::Promise* _ChangePointPromise; // 0x30
		::RPG::GameCore::GameEntity* _FollowEntity; // 0x38
		::UnityEngine::Light* _RingLight_k__BackingField; // 0x40
		::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* _FollowConfig; // 0x48
		::VLB::VolumetricLightBeam* _RingLightBeam_k__BackingField; // 0x50
		::UnityEngine::Transform* _RingLightConeTransform_k__BackingField; // 0x58
		::RPG::Client::EraFlipperManager* _FlipperManager; // 0x60
		::RPG::GameCore::GameEntity* _RangeFollowScaleTarget; // 0x68
		::RPG::GameCore::PropComponent* __PropComponent_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* _ActivePointAffectedBlockAndItems; // 0x78
		::RPG::Client::FlipDevicePoint* _CurrentPoint; // 0x80
		::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* _RangeFollowConfig; // 0x88
		::System::Single _RangFollowVelocity; // 0x90
		::System::Boolean _IsStatic; // 0x94
		::System::Nullable_1<::System::Boolean> _OverrideFollowInverseCollider; // 0x95
		::System::Boolean _TurnBlend_k__BackingField; // 0x97
		::System::Boolean _TwinkleChange; // 0x98
		::System::Single _BeamFadeStartRange; // 0x9C
		::System::Single _CurrentSecondEdgeRadius; // 0xA0
		::System::Single _TwinkleInterval; // 0xA4
		::System::Single _BeamRangeDistance; // 0xA8
		::UnityEngine::Vector3 _RingUpward_k__BackingField; // 0xAC
		::System::Single _TurnBlendTimeAcc; // 0xB8
		::System::Single _CurrentSecondEdgeVelocity; // 0xBC
		::System::Single _RangeCalRadius; // 0xC0
		::System::Single _TwinkleTimeAcc; // 0xC4
		::System::Single _RotateSpeed; // 0xC8
		::System::Nullable_1<::System::Boolean> _TwinkleOn; // 0xCC
		::System::Boolean _IsManualOp; // 0xCE
		::System::Nullable_1<::System::Single> _RangeFollowTransition; // 0xD0
		::System::Int32 _TaPluginIndex; // 0xD8
		::System::Single _TurnOnTime; // 0xDC
		::UnityEngine::Vector3 _FollowVelocity; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::PropComponent* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void ReInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_REINIT_OFFSET))(this);
		}

		::System::Void ChangePoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_CHANGEPOINT_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void FillTaPlugin(::System::Single a1, ::Class_1_BC2A32B558A4FA5E* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_BC2A32B558A4FA5E*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FILLTAPLUGIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> GetLightConeInfo()
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETLIGHTCONEINFO_OFFSET))(this);
		}

		::System::Void OnExitControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONEXITCONTROL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RingUpward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGUPWARD_OFFSET))(this);
		}

		::System::Void set_RingUpward(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGUPWARD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsRenderActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISRENDERACTIVE_OFFSET))(this);
		}

		::System::Boolean IsLightMoveChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISLIGHTMOVECHANGE_OFFSET))(this);
		}

		::System::Boolean IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISSTATIC_OFFSET))(this);
		}

		::System::Boolean IsInTwinkle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINTWINKLE_OFFSET))(this);
		}

		::System::Boolean IsFollowTurnOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWTURNON_OFFSET))(this);
		}

		::System::Boolean IsInRangeFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINRANGEFOLLOW_OFFSET))(this);
		}

		::System::Boolean IsFollowPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISFOLLOWPLAYER_OFFSET))(this);
		}

		::System::Single GetRangeFollowLimitRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GETRANGEFOLLOWLIMITRANGE_OFFSET))(this);
		}

		::System::Boolean IsInverseCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ISINVERSECOLLIDER_OFFSET))(this);
		}

		::System::Void OverrideFollowColliderMode(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_OVERRIDEFOLLOWCOLLIDERMODE_OFFSET))(this, a1, a2);
		}

		::System::Void ManualRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_MANUALREFRESH_OFFSET))(this);
		}

		::System::Void OnStreamingInstanceChange(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_303D5A33D1401D59* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONSTREAMINGINSTANCECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void StartTwinkle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_STARTTWINKLE_OFFSET))(this, a1);
		}

		::System::Void EndTwinkle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ENDTWINKLE_OFFSET))(this);
		}

		::System::Void UpdateTwinkle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATETWINKLE_OFFSET))(this, a1);
		}

		::System::Boolean NeedPrecessFollowPlayer(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Promises::Promise*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_NEEDPRECESSFOLLOWPLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void RangeFollowPlayer(::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_RANGEFOLLOWPLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void FollowPlayer(::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_FOLLOWPLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_UPDATEFOLLOW_OFFSET))(this);
		}

		::System::Void OnEntityBeforeDying()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_ONENTITYBEFOREDYING_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::FlipDevicePoint*>* get_AllFlipDevicePointList()
		{
			return ((::Il2CppArray<::RPG::Client::FlipDevicePoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ALLFLIPDEVICEPOINTLIST_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _CollectAffectBlockAndItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__COLLECTAFFECTBLOCKANDITEM_OFFSET))(this);
		}

		::System::Void _OnPropStateChange(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONPROPSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnRegionStateChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREGIONSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshState(::System::UInt32 a1, ::RPG::GameCore::PropState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONREFRESHSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEraFlipLightRotateEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT__ONERAFLIPLIGHTROTATEEND_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_RingTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGTRANSFORM_OFFSET))(this);
		}

		::System::Void set_RingTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_RingLightConeTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTCONETRANSFORM_OFFSET))(this);
		}

		::System::Void set_RingLightConeTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTCONETRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Light* get_RingLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHT_OFFSET))(this);
		}

		::System::Void set_RingLight(::UnityEngine::Light* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHT_OFFSET))(this, a1);
		}

		::VLB::VolumetricLightBeam* get_RingLightBeam()
		{
			return ((::VLB::VolumetricLightBeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_RINGLIGHTBEAM_OFFSET))(this);
		}

		::System::Void set_RingLightBeam(::VLB::VolumetricLightBeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::VLB::VolumetricLightBeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_RINGLIGHTBEAM_OFFSET))(this, a1);
		}

		::RPG::Client::FlipDevicePoint* get_CurrentPointAt()
		{
			return ((::RPG::Client::FlipDevicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTAT_OFFSET))(this);
		}

		::System::Boolean get_TurnBlend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_TURNBLEND_OFFSET))(this);
		}

		::System::Void set_TurnBlend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET_TURNBLEND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInFollowBlend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ISINFOLLOWBLEND_OFFSET))(this);
		}

		::System::Single get_RotateRingAngularSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_ROTATERINGANGULARSPEED_OFFSET))(this);
		}

		::System::Single get_CurrentPointRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET_CURRENTPOINTRADIUS_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* get__PropComponent()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_GET__PROPCOMPONENT_OFFSET))(this);
		}

		::System::Void set__PropComponent(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT_SET__PROPCOMPONENT_OFFSET))(this, a1);
		}
	};
}
