#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CANCUSTOMRECORD_OFFSET UNITYSDK_OFFSET(0x17E242E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x17E23110)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x17E24710)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETRECORDANIMCLIPIMP_OFFSET UNITYSDK_OFFSET(0x17E24460)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET UNITYSDK_OFFSET(0x17E243C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ERRORMSG_OFFSET UNITYSDK_OFFSET(0x17E23FC0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17E247C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETRECORDANIMCLIP_OFFSET UNITYSDK_OFFSET(0x17E24420)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17E24380)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_064D173F66ED9F75_OFFSET UNITYSDK_OFFSET(0x17E24B50)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_088F4E9DF96E14A7_OFFSET UNITYSDK_OFFSET(0x17E23A90)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17E24B20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x17E24AE0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_6D83AFEC7098FD7A_OFFSET UNITYSDK_OFFSET(0x17E24B60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_6FF3EF6F619F22E9_OFFSET UNITYSDK_OFFSET(0x17E23F20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17E24B30)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x17E24A60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x17E24AA0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x17E242A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_CC634B4673437CA3_OFFSET UNITYSDK_OFFSET(0x17E24B40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17E24A80)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x17E24A90)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E24A70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONDUPLICATETRACK_OFFSET UNITYSDK_OFFSET(0x17E246D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONMUTESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17E24680)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E24A00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectTrack_TypeDefinitionIndex = 39024;

	class ZNetEffectTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Playables::Playable mixerPlayable; // 0xB0
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> rootTransform; // 0xC0
		::System::Boolean needResolve; // 0xD0
		::MoleMole::Timeline::ZNetEffectPlayableAsset* m_stAsset; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ErrorMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ERRORMSG_OFFSET))(this);
		}

		::System::Boolean CanCustomRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CANCUSTOMRECORD_OFFSET))(this);
		}

		::System::Boolean IsCustomGetSceneGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* CustomGetSceneGameObjectImp()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET))(this);
		}

		::System::Boolean IsCustomGetRecordAnimClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETRECORDANIMCLIP_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* CustomGetRecordAnimClipImp()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETRECORDANIMCLIPIMP_OFFSET))(this);
		}

		::System::Void OnMuteStateChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONMUTESTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void OnDuplicateTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONDUPLICATETRACK_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* Method_5_9CA5A80F6B5B9E01()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_9CA5A80F6B5B9E01_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_F0088C88851A7DFB_2_OFFSET))(this);
		}

		static ::System::Single Method_5_088F4E9DF96E14A7(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2)
		{
			return ((::System::Single(*)(::MoleMole::EffectSimulate::NapEffectSimulatorMgr*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_088F4E9DF96E14A7_OFFSET))(a1, a2);
		}

		::UnityEngine::GameObject* Method_5_BC46FCF99873D9DD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_BC46FCF99873D9DD_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* Method_5_CC634B4673437CA3()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_CC634B4673437CA3_OFFSET))(this);
		}

		static ::System::Void Method_5_6FF3EF6F619F22E9(::UnityEngine::Timeline::TimelineClip* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_6FF3EF6F619F22E9_OFFSET))(a1, a2);
		}

		::System::Void Method_5_064D173F66ED9F75(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_064D173F66ED9F75_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_6D83AFEC7098FD7A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_METHOD_5_6D83AFEC7098FD7A_OFFSET))(this, a1);
		}
	};
}
