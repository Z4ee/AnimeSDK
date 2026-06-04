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
class Class_2_F15F6264C4987650;
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

#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6728D0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GETCOMPETITIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0xC679800)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GETPOSITIONRATIO_OFFSET UNITYSDK_OFFSET(0xC6798F0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_SHADOWINDEX_OFFSET UNITYSDK_OFFSET(0xC679A00)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_STRUGGLEDURATION_OFFSET UNITYSDK_OFFSET(0xC679A10)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GET_TIMECRACK_OFFSET UNITYSDK_OFFSET(0xC6799F0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC675A30)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xC674960)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xC674AD0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONENTERTOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xC679690)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONLEAVETOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xC679780)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SENDNOTIFY_OFFSET UNITYSDK_OFFSET(0xC675A80)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SETUP_OFFSET UNITYSDK_OFFSET(0xC672EF0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xC674B20)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ACTIVEENTITYINTERACTFUNCBTN_OFFSET UNITYSDK_OFFSET(0xC676900)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ADDPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xC6744D0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ADDPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0xC677020)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC679DC0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CHECKCANINTERACT_OFFSET UNITYSDK_OFFSET(0xC678190)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CHECKTARGETINCAMERA_OFFSET UNITYSDK_OFFSET(0xC678320)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xC679A20)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__FIREEVENT_OFFSET UNITYSDK_OFFSET(0xC677B10)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__GETSECTIONNO_OFFSET UNITYSDK_OFFSET(0xC679620)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__HIDEPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xC6767D0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONAIMSTART_OFFSET UNITYSDK_OFFSET(0xC678140)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNPRESS_OFFSET UNITYSDK_OFFSET(0xC678EC0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xC679140)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0xC678AE0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONESCAPEEND_OFFSET UNITYSDK_OFFSET(0xC675CA0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONESCAPESTART_OFFSET UNITYSDK_OFFSET(0xC675BA0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONFAIL_OFFSET UNITYSDK_OFFSET(0xC676300)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONGROUPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC6746E0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNEND_OFFSET UNITYSDK_OFFSET(0xC675D80)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNSTART_OFFSET UNITYSDK_OFFSET(0xC6795C0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONSTRUGGLESTART_OFFSET UNITYSDK_OFFSET(0xC679540)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONSUCCESS_OFFSET UNITYSDK_OFFSET(0xC675E00)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__POSITIVERELEASEMAZEGAMEPLAYBTN_OFFSET UNITYSDK_OFFSET(0xC672D90)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEALLPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0xC672B60)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xC677F90)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xC679850)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xC672BF0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0xC677D70)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__SETENABLECATCHGHOSTSELECT_OFFSET UNITYSDK_OFFSET(0xC679710)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__SHOWPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xC678010)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xC677BD0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__TRYFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xC676B60)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEAIM_OFFSET UNITYSDK_OFFSET(0xC675050)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEDRAGMONSTER_OFFSET UNITYSDK_OFFSET(0xC6752E0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEESCAPE_OFFSET UNITYSDK_OFFSET(0xC6758F0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERRETURN_OFFSET UNITYSDK_OFFSET(0xC6756F0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERSTRUGGLE_OFFSET UNITYSDK_OFFSET(0xC6755A0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMOVEPOSITION_OFFSET UNITYSDK_OFFSET(0xC674C30)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEPATHEFFECT_OFFSET UNITYSDK_OFFSET(0xC6774C0)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATESHADOWBOXEFFECT_OFFSET UNITYSDK_OFFSET(0xC678A00)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPATHEFFECT_B__16_0_OFFSET UNITYSDK_OFFSET(0xC67A010)
#define RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPOINTEFFECT_B__13_0_OFFSET UNITYSDK_OFFSET(0xC679EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int QteCatchGhostRewindInstance_TypeDefinitionIndex = 56327;

	class QteCatchGhostRewindInstance : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PATH_EFFECT_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CB0);
		}
		static ::System::String** StaticGet_POINT_APPEAR_SOUND()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CB8);
		}
		static ::System::String** StaticGet_END_POINT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CC0);
		}
		static ::System::String** StaticGet_POINT_EFFECT_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CC8);
		}
		static ::System::String** StaticGet_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CD0);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__RaycastHits()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CD8);
		}
		static ::System::String** StaticGet_GAME_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CE0);
		}
		static ::RPG::GameCore::QteCatchGhostConfig** StaticGet_Config()
		{
			return (::RPG::GameCore::QteCatchGhostConfig**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CE8);
		}
		static ::System::String** StaticGet_AIM_POINT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CF0);
		}
		static ::System::String** StaticGet_START_POINT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x26CF8);
		}
		static ::System::Int32* StaticGet_IsVisionHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QteCatchGhostRewindInstance_TypeDefinitionIndex)->GetStaticField(0x9650);
		}
		::RPG::GameCore::CharacterModelComponent* _MonsterModelComp; // 0x10
		::RPG::Client::BGCurveShadowFollowMonoPlugin* _EffectPlugin; // 0x18
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* _LinePoints; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* _EffectNames; // 0x28
		::RPG::GameCore::GameEntity* _ShadowBox; // 0x30
		::Class_1_27E38B1A892A490A* _MoveInstance; // 0x38
		::Class_2_F15F6264C4987650* _MonsterLodComp; // 0x40
		::RPG::GameCore::TransformComponent* _MonsterTransform; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _CachePoints; // 0x50
		::RPG::Client::MonoPropHighLight* _ShadowBoxEffect; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ExtraData; // 0x60
		::BansheeGz::BGSpline::Components::BGCcVisualizationLineRenderer* _EffectLine; // 0x68
		::RPG::GameCore::LevelCurveInstance* _MoveCurve; // 0x70
		::RPG::GameCore::GameEntity* _Owner; // 0x78
		::RPG::Client::MonoEffect* _PathEffect; // 0x80
		::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* _IgnoreColliders; // 0x88
		::System::Collections::Generic::List_1<::System::Single>* _Intervals; // 0x90
		::RPG::GameCore::GameEntity* _Monster; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::QteCatchGhostRewindInstance_CurvePoint>* _CurvePoints; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint>* _Points; // 0xA8
		::RPG::GameCore::TransformComponent* _ShadowBoxTransform; // 0xB0
		::RPG::GameCore::GameEntity* _TimeCrack; // 0xB8
		::System::Single _StruggleTimer; // 0xC0
		::RPG::Client::QteCatchGhostRewindInstance_RewindPhase _Phase; // 0xC4
		::System::Single _StruggleDuration; // 0xC8
		::System::Single _InteractRadius; // 0xCC
		::System::Single _PressTimer; // 0xD0
		::System::Boolean _ActiveFuncBtn; // 0xD4
		::System::Boolean _IsPress; // 0xD5
		::System::Boolean _StartDisappear; // 0xD6
		::System::Int32 _StartTime; // 0xD8
		::System::Int32 _ShadowIndex; // 0xDC
		::System::Single _AppearDist; // 0xE0
		::System::Int32 _DisableSelectCount; // 0xE4
		::System::Single _EscapeTimer; // 0xE8
		::System::Single _AppearTimer; // 0xEC
		::System::UInt32 _GroupId; // 0xF0
		::System::Int32 _SectionNo; // 0xF4
		::System::Single _CurrentPosition; // 0xF8
		::System::Int32 _FailReason; // 0xFC
		::System::Single _TotalDist; // 0x100

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

		::System::Void SetUp(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SETUP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _OnGroupStateChanged(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONGROUPSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_ISFINISH_OFFSET))(this);
		}

		::System::Void SendNotify(::RPG::GameCore::QteCatchGhostNotify a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_SENDNOTIFY_OFFSET))(this, a1);
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

		::System::Void _AddPointEffect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ADDPOINTEFFECT_OFFSET))(this, a1);
		}

		::System::Void _RemovePointEffect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEPOINTEFFECT_OFFSET))(this, a1);
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

		::System::Void _UpdateEscape(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEESCAPE_OFFSET))(this, a1);
		}

		::System::Void _OnAimStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONAIMSTART_OFFSET))(this);
		}

		::System::Boolean _CheckCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__CHECKCANINTERACT_OFFSET))(this);
		}

		::System::Void _UpdateAim(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEAIM_OFFSET))(this, a1);
		}

		::System::Void _UpdateShadowBoxEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATESHADOWBOXEFFECT_OFFSET))(this, a1);
		}

		::System::Void _OnBtnPress(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnBtnRelease(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONBTNRELEASE_OFFSET))(this, a1);
		}

		::System::Void _OnDragStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONDRAGSTART_OFFSET))(this);
		}

		::System::Void _UpdateDragMonster(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEDRAGMONSTER_OFFSET))(this, a1);
		}

		::System::Void _OnStruggleStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONSTRUGGLESTART_OFFSET))(this);
		}

		::System::Void _UpdateMonsterStruggle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERSTRUGGLE_OFFSET))(this, a1);
		}

		::System::Void _OnReturnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNSTART_OFFSET))(this);
		}

		::System::Void _UpdateMonsterReturn(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__UPDATEMONSTERRETURN_OFFSET))(this, a1);
		}

		::System::Void _OnReturnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ONRETURNEND_OFFSET))(this);
		}

		::System::Void _ActiveEntityInteractFuncBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__ACTIVEENTITYINTERACTFUNCBTN_OFFSET))(this, a1);
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

		::System::Void _SetEnableCatchGhostSelect(::System::Boolean a1, ::RPG::Client::QteCatchGhostModuleForbidSelectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::QteCatchGhostModuleForbidSelectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__SETENABLECATCHGHOSTSELECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CompetitiveGamePlaySystemPriority GetCompetitivePriority()
		{
			return ((::RPG::Client::CompetitiveGamePlaySystemPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE_GETCOMPETITIVEPRIORITY_OFFSET))(this);
		}

		::System::Void _PositiveReleaseMazeGamePlayBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__POSITIVERELEASEMAZEGAMEPLAYBTN_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::String* a5, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__TRIGGEREFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _RemoveEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECT_OFFSET))(this, a1);
		}

		::System::Void _RemoveEffectByUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__REMOVEEFFECTBYUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void _FireEvent(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE__FIREEVENT_OFFSET))(this, a1);
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

		::System::Void __AddPointEffect_b__13_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPOINTEFFECT_B__13_0_OFFSET))(this, a1, a2);
		}

		::System::Void __AddPathEffect_b__16_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTECATCHGHOSTREWINDINSTANCE___ADDPATHEFFECT_B__16_0_OFFSET))(this, a1, a2);
		}
	};
}
