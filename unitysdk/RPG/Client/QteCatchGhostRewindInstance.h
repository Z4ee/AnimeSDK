#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/RPG/Client/CompetitiveGamePlaySystemPriority.h"
#include "unitysdk/RPG/Client/QteCatchGhostModuleForbidSelectReason.h"
#include "unitysdk/RPG/Client/QteCatchGhostRewindInstance_CurvePoint.h"
#include "unitysdk/RPG/Client/QteCatchGhostRewindInstance_PathPoint.h"
#include "unitysdk/RPG/Client/QteCatchGhostRewindInstance_RewindPhase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/QteCatchGhostNotify.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_27E38B1A892A490A;
class Class_2_751108DFDC405F93;
namespace BansheeGz::BGSpline::Components { class BGCcVisualizationLineRenderer; }
namespace RPG::Client { class BGCurveShadowFollowMonoPlugin; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoPropHighLight; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace RPG::GameCore { class QteCatchGhostConfig; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF2CEE0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GETCOMPETITIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0xAF33BD0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GETPOSITIONRATIO_OFFSET UNITYSDK_OFFSET(0xAF33CC0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_SHADOWINDEX_OFFSET UNITYSDK_OFFSET(0xAF33DD0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_STRUGGLEDURATION_OFFSET UNITYSDK_OFFSET(0xAF33DE0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_TIMECRACK_OFFSET UNITYSDK_OFFSET(0xAF33DC0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ISFINISH_OFFSET UNITYSDK_OFFSET(0xAF2FF20)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xAF2EE90)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xAF2F000)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONENTERTOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xAF33A60)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONLEAVETOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xAF33B50)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SENDNOTIFY_OFFSET UNITYSDK_OFFSET(0xAF2FF70)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SETUP_OFFSET UNITYSDK_OFFSET(0xAF2D4C0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xAF2F050)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ACTIVEENTITYINTERACTFUNCBTN_OFFSET UNITYSDK_OFFSET(0xAF30E40)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ADDPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xAF2EA10)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ADDPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0xAF31540)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF341A0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CHECKCANINTERACT_OFFSET UNITYSDK_OFFSET(0xAF325B0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CHECKTARGETINCAMERA_OFFSET UNITYSDK_OFFSET(0xAF32730)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF33DF0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__FIREEVENT_OFFSET UNITYSDK_OFFSET(0xAF31F10)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__GETSECTIONNO_OFFSET UNITYSDK_OFFSET(0xAF339F0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__HIDEPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xAF30D10)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONAIMSTART_OFFSET UNITYSDK_OFFSET(0xAF32560)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNPRESS_OFFSET UNITYSDK_OFFSET(0xAF332E0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xAF33560)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0xAF32F10)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONESCAPEEND_OFFSET UNITYSDK_OFFSET(0xAF301A0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONESCAPESTART_OFFSET UNITYSDK_OFFSET(0xAF30090)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONFAIL_OFFSET UNITYSDK_OFFSET(0xAF30820)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONGROUPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAF2EC00)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNEND_OFFSET UNITYSDK_OFFSET(0xAF30280)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNSTART_OFFSET UNITYSDK_OFFSET(0xAF33990)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONSTRUGGLESTART_OFFSET UNITYSDK_OFFSET(0xAF33910)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONSUCCESS_OFFSET UNITYSDK_OFFSET(0xAF30300)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__POSITIVERELEASEMAZEGAMEPLAYBTN_OFFSET UNITYSDK_OFFSET(0xAF2D360)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEALLPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0xAF2D130)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAF323A0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xAF33C20)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xAF2D1C0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0xAF32180)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__SETENABLECATCHGHOSTSELECT_OFFSET UNITYSDK_OFFSET(0xAF33AE0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__SHOWPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xAF32430)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xAF31FD0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__TRYFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xAF31070)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEAIM_OFFSET UNITYSDK_OFFSET(0xAF2F580)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEDRAGMONSTER_OFFSET UNITYSDK_OFFSET(0xAF2F810)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEESCAPE_OFFSET UNITYSDK_OFFSET(0xAF2FDD0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERRETURN_OFFSET UNITYSDK_OFFSET(0xAF2FBD0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERSTRUGGLE_OFFSET UNITYSDK_OFFSET(0xAF2FA80)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMOVEPOSITION_OFFSET UNITYSDK_OFFSET(0xAF2F160)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xAF31970)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATESHADOWBOXEFFECT_OFFSET UNITYSDK_OFFSET(0xAF32E20)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPATHEFFECT_B__16_0_OFFSET UNITYSDK_OFFSET(0xAF343F0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPOINTEFFECT_B__13_0_OFFSET UNITYSDK_OFFSET(0xAF34290)

namespace RPG::Client
{
	inline static constexpr unsigned int QteCatchGhostRewindInstance_TypeDefinitionIndex = 55576;

	class QteCatchGhostRewindInstance : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__RaycastHits()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10860);
		}
		static ::System::String** StaticGet_GAME_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10868);
		}
		static ::System::String** StaticGet_END_POINT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10870);
		}
		static ::System::String** StaticGet_START_POINT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10878);
		}
		static ::RPG::GameCore::QteCatchGhostConfig** StaticGet_Config()
		{
			return (::RPG::GameCore::QteCatchGhostConfig**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10880);
		}
		static ::System::String** StaticGet_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10888);
		}
		static ::System::String** StaticGet_POINT_EFFECT_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10890);
		}
		static ::System::String** StaticGet_PATH_EFFECT_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x10898);
		}
		static ::System::String** StaticGet_AIM_POINT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x108A0);
		}
		static ::System::String** StaticGet_POINT_APPEAR_SOUND()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x108A8);
		}
		static ::System::Int32* StaticGet_IsVisionHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x5250);
		}
		::BansheeGz::BGSpline::Components::BGCcVisualizationLineRenderer* _EffectLine; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::QteCatchGhostRewindInstance_CurvePoint>* _CurvePoints; // 0x18
		::RPG::Client::MonoPropHighLight* _ShadowBoxEffect; // 0x20
		::RPG::GameCore::GameEntity* _Monster; // 0x28
		::RPG::GameCore::TransformComponent* _MonsterTransform; // 0x30
		::Class_2_751108DFDC405F93* _MonsterLodComp; // 0x38
		::RPG::GameCore::GameEntity* _Owner; // 0x40
		::Class_1_27E38B1A892A490A* _MoveInstance; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _CachePoints; // 0x50
		::System::Collections::Generic::HashSet_1<::System::String*>* _EffectNames; // 0x58
		::RPG::GameCore::TransformComponent* _ShadowBoxTransform; // 0x60
		::RPG::Client::BGCurveShadowFollowMonoPlugin* _EffectPlugin; // 0x68
		::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* _IgnoreColliders; // 0x70
		::RPG::Client::MonoEffect* _PathEffect; // 0x78
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* _LinePoints; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ExtraData; // 0x88
		::RPG::GameCore::LevelCurveInstance* _MoveCurve; // 0x90
		::RPG::GameCore::GameEntity* _ShadowBox; // 0x98
		::System::Collections::Generic::List_1<::System::Single>* _Intervals; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint>* _Points; // 0xA8
		::RPG::GameCore::CharacterModelComponent* _MonsterModelComp; // 0xB0
		::RPG::GameCore::GameEntity* _TimeCrack; // 0xB8
		::System::Int32 _ShadowIndex; // 0xC0
		::System::Single _EscapeTimer; // 0xC4
		::System::Single _TotalDist; // 0xC8
		::System::Int32 _SectionNo; // 0xCC
		::RPG::Client::QteCatchGhostRewindInstance_RewindPhase _Phase; // 0xD0
		::System::Int32 _StartTime; // 0xD4
		::System::UInt32 _GroupId; // 0xD8
		::System::Int32 _FailReason; // 0xDC
		::System::Single _PressTimer; // 0xE0
		::System::Boolean _IsPress; // 0xE4
		::System::Boolean _StartDisappear; // 0xE5
		::System::Boolean _ActiveFuncBtn; // 0xE6
		::System::Int32 _DisableSelectCount; // 0xE8
		::System::Single _AppearDist; // 0xEC
		::System::Single _StruggleDuration; // 0xF0
		::System::Single _AppearTimer; // 0xF4
		::System::Single _StruggleTimer; // 0xF8
		::System::Single _InteractRadius; // 0xFC
		::System::Single _CurrentPosition; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetUp(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::GameEntity* monster, ::RPG::GameCore::GameEntity* timeCrack, ::RPG::GameCore::GameEntity* shadowBox, ::System::Single goodRadius, ::System::Single struggleDuration, ::System::Single interactRadius)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SETUP_OFFSET))(this, owner, monster, timeCrack, shadowBox, goodRadius, struggleDuration, interactRadius);
		}

		::System::Void _OnGroupStateChanged(::System::UInt32 arg1, ::System::UInt32 arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONGROUPSTATECHANGED_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONAFTERMODELARTLOAD_OFFSET))(this, entity);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONBEFOREMODELARTUNLOAD_OFFSET))(this, entity);
		}

		::System::Void Tick(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_TICK_OFFSET))(this, dt);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ISFINISH_OFFSET))(this);
		}

		::System::Void SendNotify(::RPG::GameCore::QteCatchGhostNotify notifyType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SENDNOTIFY_OFFSET))(this, notifyType);
		}

		::System::Void _OnFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONFAIL_OFFSET))(this);
		}

		::System::Void _OnSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONSUCCESS_OFFSET))(this);
		}

		::System::Void _TryFinishQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__TRYFINISHQUEST_OFFSET))(this);
		}

		::System::Void _UpdateMovePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMOVEPOSITION_OFFSET))(this);
		}

		::System::Void _AddPointEffect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ADDPOINTEFFECT_OFFSET))(this, index);
		}

		::System::Void _RemovePointEffect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEPOINTEFFECT_OFFSET))(this, index);
		}

		::System::Void _RemoveAllPointEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEALLPOINTEFFECT_OFFSET))(this);
		}

		::System::Void _AddPathEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ADDPATHEFFECT_OFFSET))(this);
		}

		::System::Void _UpdatePathEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEPATHEFFECT_OFFSET))(this);
		}

		::System::Void _RemovePathEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEPATHEFFECT_OFFSET))(this);
		}

		::System::Void _ShowPathEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__SHOWPATHEFFECT_OFFSET))(this);
		}

		::System::Void _HidePathEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__HIDEPATHEFFECT_OFFSET))(this);
		}

		::System::Void _OnEscapeStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONESCAPESTART_OFFSET))(this);
		}

		::System::Void _OnEscapeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONESCAPEEND_OFFSET))(this);
		}

		::System::Void _UpdateEscape(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEESCAPE_OFFSET))(this, dt);
		}

		::System::Void _OnAimStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONAIMSTART_OFFSET))(this);
		}

		::System::Boolean _CheckCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CHECKCANINTERACT_OFFSET))(this);
		}

		::System::Void _UpdateAim(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEAIM_OFFSET))(this, dt);
		}

		::System::Void _UpdateShadowBoxEffect(::System::Boolean highlight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATESHADOWBOXEFFECT_OFFSET))(this, highlight);
		}

		::System::Void _OnBtnPress(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNPRESS_OFFSET))(this, param);
		}

		::System::Void _OnBtnRelease(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNRELEASE_OFFSET))(this, param);
		}

		::System::Void _OnDragStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONDRAGSTART_OFFSET))(this);
		}

		::System::Void _UpdateDragMonster(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEDRAGMONSTER_OFFSET))(this, dt);
		}

		::System::Void _OnStruggleStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONSTRUGGLESTART_OFFSET))(this);
		}

		::System::Void _UpdateMonsterStruggle(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERSTRUGGLE_OFFSET))(this, dt);
		}

		::System::Void _OnReturnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNSTART_OFFSET))(this);
		}

		::System::Void _UpdateMonsterReturn(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERRETURN_OFFSET))(this, dt);
		}

		::System::Void _OnReturnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNEND_OFFSET))(this);
		}

		::System::Void _ActiveEntityInteractFuncBtn(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ACTIVEENTITYINTERACTFUNCBTN_OFFSET))(this, isActive);
		}

		::System::Boolean _CheckTargetInCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CHECKTARGETINCAMERA_OFFSET))(this);
		}

		::System::Void OnEnterTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONENTERTOPOFPRIORITY_OFFSET))(this);
		}

		::System::Void OnLeaveTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONLEAVETOPOFPRIORITY_OFFSET))(this);
		}

		::System::Void _SetEnableCatchGhostSelect(::System::Boolean enable, ::RPG::Client::QteCatchGhostModuleForbidSelectReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::QteCatchGhostModuleForbidSelectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__SETENABLECATCHGHOSTSELECT_OFFSET))(this, enable, reason);
		}

		::RPG::Client::CompetitiveGamePlaySystemPriority GetCompetitivePriority()
		{
			return ((::RPG::Client::CompetitiveGamePlaySystemPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GETCOMPETITIVEPRIORITY_OFFSET))(this);
		}

		::System::Void _PositiveReleaseMazeGamePlayBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__POSITIVERELEASEMAZEGAMEPLAYBTN_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::System::String* sEffectPath, ::UnityEngine::Vector3 vPosition, ::UnityEngine::Quaternion vRotation, ::System::Nullable_1<::UnityEngine::Vector3> vScale, ::System::String* uniqueName, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* onLoaded)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__TRIGGEREFFECT_OFFSET))(this, sEffectPath, vPosition, vRotation, vScale, uniqueName, onLoaded);
		}

		::System::Void _RemoveEffect(::System::String* effectPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECT_OFFSET))(this, effectPath);
		}

		::System::Void _RemoveEffectByUniqueName(::System::String* uniqueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECTBYUNIQUENAME_OFFSET))(this, uniqueName);
		}

		::System::Void _FireEvent(::RPG::GameCore::PuzzleCustomEvent eventName)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__FIREEVENT_OFFSET))(this, eventName);
		}

		::System::Single GetPositionRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GETPOSITIONRATIO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_TimeCrack()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_TIMECRACK_OFFSET))(this);
		}

		::System::Int32 get_ShadowIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_SHADOWINDEX_OFFSET))(this);
		}

		::System::Single get_StruggleDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_STRUGGLEDURATION_OFFSET))(this);
		}

		::System::Void _GetSectionNo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__GETSECTIONNO_OFFSET))(this);
		}

		::System::Void __AddPointEffect_b__13_0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPOINTEFFECT_B__13_0_OFFSET))(this, eff, extraParams);
		}

		::System::Void __AddPathEffect_b__16_0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPATHEFFECT_B__16_0_OFFSET))(this, eff, extraParams);
		}
	};
}
