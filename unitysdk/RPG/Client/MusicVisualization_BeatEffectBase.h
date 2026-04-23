#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerEffectControllBase.h"

class Class_1_303D5A33D1401D59;
namespace RPG::Client { class MusicVisualizationBeatEffectElement; }
namespace RPG::Client { class MusicVisualization_CueEvent; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_DISABLEVISUALRENDERER_OFFSET UNITYSDK_OFFSET(0xAB28BF0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ENABLEVISUALRENDERER_OFFSET UNITYSDK_OFFSET(0xAB28B70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCHANGEMUSICINDEX_OFFSET UNITYSDK_OFFSET(0xAB28D00)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCHANGEMUSICSTATE_OFFSET UNITYSDK_OFFSET(0xAB28DB0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCURRENTMUSICSTART_OFFSET UNITYSDK_OFFSET(0xAB29250)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCURRENTMUSICWILLEND_OFFSET UNITYSDK_OFFSET(0xAB292B0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONLODCHANGING_OFFSET UNITYSDK_OFFSET(0xAB28C70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xAB29310)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xAB294B0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_PAUSEVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0xAB28AF0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_PLAYVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0xAB28A70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_REGIST_OFFSET UNITYSDK_OFFSET(0xAB27700)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKEVENT_OFFSET UNITYSDK_OFFSET(0xAB290A0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKMUSICCUE_OFFSET UNITYSDK_OFFSET(0xAB29140)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKPERBAR_OFFSET UNITYSDK_OFFSET(0xAB28F30)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKPERBEAT_OFFSET UNITYSDK_OFFSET(0xAB28E70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKPERGRID_OFFSET UNITYSDK_OFFSET(0xAB28FF0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICK_OFFSET UNITYSDK_OFFSET(0xAB291F0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_UNREGIST_OFFSET UNITYSDK_OFFSET(0xAB27C40)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB28A20)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE___IFIXBASEPROXY_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xAB29780)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE___IFIXBASEPROXY_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xAB29790)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectBase_TypeDefinitionIndex = 65291;

	class MusicVisualization_BeatEffectBase : public ::RPG::Client::PolymerEffectControllBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MusicVisualization_CueEvent*>* MV_CueEventList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MusicVisualizationBeatEffectElement*>* MV_ElementList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Regist(::RPG::Client::MusicVisualization_BeatEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_BeatEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_REGIST_OFFSET))(this, a1);
		}

		::System::Void UnRegist(::RPG::Client::MusicVisualization_BeatEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_BeatEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_UNREGIST_OFFSET))(this, a1);
		}

		::System::Void OnChangeMusicIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCHANGEMUSICINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void OnChangeMusicState(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCHANGEMUSICSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TickPerBeat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKPERBEAT_OFFSET))(this, a1);
		}

		::System::Void TickPerBar(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKPERBAR_OFFSET))(this, a1);
		}

		::System::Void TickPerGrid(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKPERGRID_OFFSET))(this, a1);
		}

		::System::Void TickMusicCue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKMUSICCUE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void TickEvent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_TICKEVENT_OFFSET))(this, a1);
		}

		::System::Void PlayVisualEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_PLAYVISUALEFFECT_OFFSET))(this);
		}

		::System::Void PauseVisualEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_PAUSEVISUALEFFECT_OFFSET))(this);
		}

		::System::Void EnableVisualRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ENABLEVISUALRENDERER_OFFSET))(this);
		}

		::System::Void DisableVisualRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_DISABLEVISUALRENDERER_OFFSET))(this);
		}

		::System::Void OnCurrentMusicStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCURRENTMUSICSTART_OFFSET))(this, a1);
		}

		::System::Void OnCurrentMusicWillEnd(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONCURRENTMUSICWILLEND_OFFSET))(this, a1);
		}

		::System::Void OnLODChanging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONLODCHANGING_OFFSET))(this);
		}

		::System::Void OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __iFixBaseProxy_OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::UnityEngine::GameObject* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE___IFIXBASEPROXY_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::UnityEngine::GameObject* P2, ::UnityEngine::GameObject* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTBASE___IFIXBASEPROXY_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
