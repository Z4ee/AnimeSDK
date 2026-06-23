#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ZNetEffectPlayableAsset_Enum_3_575048837920F2D6.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_PostPlaybackState.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class Class_1_B7637CFF22586878;
class Class_2_85B53B5A8E1505FE;
class Class_3_B2A1AA83B2E0568E;
namespace MoleMole::Config { class AnimatorEventEffectEntry; }
namespace MoleMole::Config { class AnimatorEventMaterialPropertyModifierEntry; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_AbilityScriptParm; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_FollowControl; }
namespace SimpleJSON { class JSONNode; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x141C05A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x141BF080)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CANSHOWINTAG_OFFSET UNITYSDK_OFFSET(0x141C0510)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x141BF030)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0x141BEF80)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0x141BEFA0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x141BF020)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_RENDERERPARTINFOSHOWER_OFFSET UNITYSDK_OFFSET(0x141C0530)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_1_OFFSET UNITYSDK_OFFSET(0x141C4710)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_OFFSET UNITYSDK_OFFSET(0x141C44D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0x141C78E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0CA0F288E4E9F674_OFFSET UNITYSDK_OFFSET(0x141C3810)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0F6313DD539D12A9_OFFSET UNITYSDK_OFFSET(0x141C4950)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_134C08C528037F25_OFFSET UNITYSDK_OFFSET(0x141C83E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_19AA0F51EA6A528E_OFFSET UNITYSDK_OFFSET(0x141C7CE0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x141C77A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_1FDFC6F104A579C1_OFFSET UNITYSDK_OFFSET(0x141C5A40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_21B2ADC3AAD50EB9_OFFSET UNITYSDK_OFFSET(0x141C2330)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_28129A7F028AA224_OFFSET UNITYSDK_OFFSET(0x141C6240)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_366F3A58C5AC297C_OFFSET UNITYSDK_OFFSET(0x141C67D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x141C7DB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_4B7E39834DB70AE3_OFFSET UNITYSDK_OFFSET(0x141C2200)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5BA1B24E6C88A48A_OFFSET UNITYSDK_OFFSET(0x141C3C30)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x141C63C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x141C58B0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_75E95797F163FF56_OFFSET UNITYSDK_OFFSET(0x141C7680)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_76E4B3C7EEDD63B4_OFFSET UNITYSDK_OFFSET(0x141C7850)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_7A39A89E91C09395_OFFSET UNITYSDK_OFFSET(0x141C8570)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_87D9A35F3F9238B9_OFFSET UNITYSDK_OFFSET(0x141C3FD0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_901B80B762847998_OFFSET UNITYSDK_OFFSET(0x141C73D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_90418C74D914D125_OFFSET UNITYSDK_OFFSET(0x141C6640)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_98327DE548306CA0_OFFSET UNITYSDK_OFFSET(0x141C3050)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x141C7DF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A195F8BDC5254662_OFFSET UNITYSDK_OFFSET(0x141C72D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A47D52AAE5BCA60D_OFFSET UNITYSDK_OFFSET(0x141C6160)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_AA428D7312DF3BD0_OFFSET UNITYSDK_OFFSET(0x141C4FB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B15C78DCB8B2B821_OFFSET UNITYSDK_OFFSET(0x141C8180)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B2DD3DBFA5C381E0_OFFSET UNITYSDK_OFFSET(0x141C0200)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x141C62E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x141C7E50)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_C923407A53F704A1_OFFSET UNITYSDK_OFFSET(0x141C6750)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141C7800)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x141C8250)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CFB3155BE3C972D1_OFFSET UNITYSDK_OFFSET(0x141C79C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_D02B40A063807E13_OFFSET UNITYSDK_OFFSET(0x141C5D20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_DE37EEDCAEB4CE8D_OFFSET UNITYSDK_OFFSET(0x141C4B90)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E4298D7611E3A6CD_OFFSET UNITYSDK_OFFSET(0x141C31D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E469629AED66F717_OFFSET UNITYSDK_OFFSET(0x141C6690)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_1_OFFSET UNITYSDK_OFFSET(0x141C0170)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_OFFSET UNITYSDK_OFFSET(0x141C3780)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F1F3BF871799E806_OFFSET UNITYSDK_OFFSET(0x141C82D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F54117E1DDB9296B_OFFSET UNITYSDK_OFFSET(0x141C5900)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F942C04D48B3F6D7_OFFSET UNITYSDK_OFFSET(0x141C5F80)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x141BEFC0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CANSHOWINTAG_OFFSET UNITYSDK_OFFSET(0x141C0520)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0x141BEF90)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0x141BEFB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_RENDERERPARTINFOSHOWER_OFFSET UNITYSDK_OFFSET(0x141C0590)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x141C54E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x141C51C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_TypeDefinitionIndex = 44679;

	class ZNetEffectPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Timeline::ZNetEffectPlayableAsset_Enum_3_575048837920F2D6>** StaticGet_OnExportTableTypeDropdown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Timeline::ZNetEffectPlayableAsset_Enum_3_575048837920F2D6>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x48650);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_s_CreatedPrefabs()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x48658);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet_k_EmptyParticlesList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x48660);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_k_EmptyDirectorsList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x48668);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_s_ProcessedDirectors()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x48670);
		}
		// static const ::System::Int32 k_MaxRandInt = 0x2710; // 0x0
		// static const ::System::String* PREVIEW_GROUP_STR; // 0x0
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* selfRendererPartInfo; // 0x18
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* effectAutoDynamicInfo; // 0x20
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> sourceGameObject; // 0x28
		::System::String* fxGuid; // 0x38
		::UnityEngine::GameObject* prefabGameObject; // 0x40
		::System::Boolean updateParticle; // 0x48
		::System::Boolean particleUseRandom; // 0x49
		::System::UInt32 particleRandomSeed; // 0x4C
		::System::Boolean updateDirector; // 0x50
		::System::Boolean updateITimeControl; // 0x51
		::System::Boolean searchHierarchy; // 0x52
		::System::Boolean active; // 0x53
		::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback; // 0x54
		::UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset; // 0x58
		::System::Double m_Duration; // 0x60
		::System::Boolean m_SupportLoop; // 0x68
		::System::Boolean _controllingDirectors_k__BackingField; // 0x69
		::System::Boolean _controllingParticles_k__BackingField; // 0x6A
		::System::String* guid_Editor; // 0x70
		::Class_2_85B53B5A8E1505FE* template_; // 0x78
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> bindingTransform; // 0x80
		::System::String* bindingPath; // 0x90
		::UnityEngine::Timeline::TimelineClip* clip; // 0x98
		::UnityEngine::Timeline::TrackAsset* trackAsset; // 0xA0
		::UnityEngine::GameObject* goCtx; // 0xA8
		::UnityEngine::Playables::PlayableGraph graph; // 0xB0
		::System::Boolean controlScale; // 0xC0
		::System::Single timeScale; // 0xC4
		::System::Int32 previewLayerOverride; // 0xC8
		::MoleMole::Timeline::ZNetEffectPlayableAsset_Enum_3_575048837920F2D6 exportTableType; // 0xCC
		::System::Collections::Generic::List_1<::System::Int32>* animatorZoneTags; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTags_strVer; // 0xD8
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTagsBlackList; // 0xE0
		::System::Boolean _CanShowInTag_k__BackingField; // 0xE8
		::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl* followControl; // 0xF0
		::System::Boolean hasAbilityData; // 0xF8
		::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm* abiltyData; // 0x100
		::System::Boolean overrideFxAvatarRendererPartInfo; // 0x108
		::System::Boolean amcEndClear; // 0x109
		::System::Int32 previewBeginFadeOutFrame; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CCTOR_OFFSET))();
		}

		::System::Boolean get_controllingDirectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET))(this);
		}

		::System::Void set_controllingDirectors(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET))(this, a1);
		}

		::System::Boolean get_controllingParticles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET))(this);
		}

		::System::Void set_controllingParticles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ONENABLE_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_CanShowInTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CANSHOWINTAG_OFFSET))(this);
		}

		::System::Void set_CanShowInTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CANSHOWINTAG_OFFSET))(this, a1);
		}

		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* get_rendererPartInfoShower()
		{
			return ((::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_RENDERERPARTINFOSHOWER_OFFSET))(this);
		}

		::System::Void set_rendererPartInfoShower(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_RENDERERPARTINFOSHOWER_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_6B6AE2B3E1C3264F(::Class_3_B2A1AA83B2E0568E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_B2A1AA83B2E0568E*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_6B6AE2B3E1C3264F_OFFSET))(this, a1);
		}

		::System::Void Method_4_F54117E1DDB9296B(::MoleMole::Config::AnimatorEventMaterialPropertyModifierEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventMaterialPropertyModifierEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F54117E1DDB9296B_OFFSET))(this, a1);
		}

		static ::System::Void Method_4_1FDFC6F104A579C1(::UnityEngine::Transform* a1, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_1FDFC6F104A579C1_OFFSET))(a1, a2);
		}

		::System::Boolean Method_4_D02B40A063807E13(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_D02B40A063807E13_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_A47D52AAE5BCA60D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A47D52AAE5BCA60D_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* Method_4_4B7E39834DB70AE3(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_4B7E39834DB70AE3_OFFSET))(this, a1);
		}

		::System::Void Method_4_5BA1B24E6C88A48A(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a3, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* a4, ::UnityEngine::Playables::PlayableGraph a5, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5BA1B24E6C88A48A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_4_B877181B6123B7F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B877181B6123B7F6_OFFSET))(this);
		}

		::System::Void Method_4_90418C74D914D125(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_90418C74D914D125_OFFSET))(this, a1);
		}

		::System::Void Method_4_0F6313DD539D12A9(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0F6313DD539D12A9_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_4_C923407A53F704A1(::System::String*& a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_C923407A53F704A1_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Method_4_366F3A58C5AC297C(::Class_3_B2A1AA83B2E0568E* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::Class_3_B2A1AA83B2E0568E*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_366F3A58C5AC297C_OFFSET))(this, a1);
		}

		::System::Void Method_4_E469629AED66F717(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E469629AED66F717_OFFSET))(this, a1);
		}

		::System::Void Method_4_A195F8BDC5254662(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A195F8BDC5254662_OFFSET))(this, a1);
		}

		static ::UnityEngine::Playables::Playable Method_4_901B80B762847998(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_901B80B762847998_OFFSET))(a1, a2);
		}

		::System::Boolean Method_4_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* Method_4_76E4B3C7EEDD63B4(::Class_1_B7637CFF22586878* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::Class_1_B7637CFF22586878*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_76E4B3C7EEDD63B4_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_081E84DBAB5CA72B()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_081E84DBAB5CA72B_OFFSET))(this);
		}

		::System::Void Method_4_CFB3155BE3C972D1(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CFB3155BE3C972D1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Playables::Playable Method_4_AA428D7312DF3BD0(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_AA428D7312DF3BD0_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::AnimationClip* Method_4_F942C04D48B3F6D7(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F942C04D48B3F6D7_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::Void Method_4_75E95797F163FF56(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::Playable a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_75E95797F163FF56_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_4_9B92C44D5842AA8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_9B92C44D5842AA8A_OFFSET))(this);
		}

		::System::Boolean Method_4_B15C78DCB8B2B821()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B15C78DCB8B2B821_OFFSET))(this);
		}

		::System::Void Method_4_87D9A35F3F9238B9(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>* a2, ::UnityEngine::Playables::PlayableGraph a3, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_87D9A35F3F9238B9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_4_637DBA7901C3991A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_637DBA7901C3991A_OFFSET))(this);
		}

		::Class_3_B2A1AA83B2E0568E* Method_4_CCBE730AF445BBD4()
		{
			return ((::Class_3_B2A1AA83B2E0568E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CCBE730AF445BBD4_OFFSET))(this);
		}

		::Class_1_B7637CFF22586878* Method_4_F1F3BF871799E806(::Class_3_B2A1AA83B2E0568E* a1, ::System::Single a2)
		{
			return ((::Class_1_B7637CFF22586878*(*)(::PVOID, ::Class_3_B2A1AA83B2E0568E*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F1F3BF871799E806_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_4_DE37EEDCAEB4CE8D(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_DE37EEDCAEB4CE8D_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* Method_4_E47EEE8FF1774C6E(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_OFFSET))(a1);
		}

		::UnityEngine::GameObject* Method_4_28129A7F028AA224()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_28129A7F028AA224_OFFSET))(this);
		}

		::System::String* Method_4_134C08C528037F25(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_134C08C528037F25_OFFSET))(this, a1);
		}

		::System::Void Method_4_B2DD3DBFA5C381E0(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B2DD3DBFA5C381E0_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* Method_4_E47EEE8FF1774C6E_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_1_OFFSET))(a1);
		}

		::System::Void Method_4_19AA0F51EA6A528E(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_19AA0F51EA6A528E_OFFSET))(this, a1);
		}

		static ::System::Void Method_4_0CA0F288E4E9F674(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0CA0F288E4E9F674_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_4_05ED597505047531(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Config::EffectAutoDynamicValue* Method_4_7A39A89E91C09395()
		{
			return ((::MoleMole::Config::EffectAutoDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_7A39A89E91C09395_OFFSET))(this);
		}

		::System::Void Method_4_21B2ADC3AAD50EB9(::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_21B2ADC3AAD50EB9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_E4298D7611E3A6CD(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E4298D7611E3A6CD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_4_05ED597505047531_1(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_98327DE548306CA0(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_98327DE548306CA0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_C7BF9C1E6A78DCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_C7BF9C1E6A78DCAB_OFFSET))(this);
		}
	};
}
