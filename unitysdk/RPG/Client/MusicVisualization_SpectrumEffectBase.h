#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerEffectControllBase.h"

class Class_1_303D5A33D1401D59;
namespace RPG::Client { class MusicVisualizationSpectrumEffectElement; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_DISABLEVISUALRENDERER_OFFSET UNITYSDK_OFFSET(0x18EA69A0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ENABLEVISUALRENDERER_OFFSET UNITYSDK_OFFSET(0x18EA6960)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCHANGEMUSICINDEX_OFFSET UNITYSDK_OFFSET(0x18EA6750)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCHANGEMUSICSTATE_OFFSET UNITYSDK_OFFSET(0x18EA67A0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCURRENTMUSICSTART_OFFSET UNITYSDK_OFFSET(0x18EA69E0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCURRENTMUSICWILLEND_OFFSET UNITYSDK_OFFSET(0x18EA6A40)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONLODCHANGING_OFFSET UNITYSDK_OFFSET(0x18EA67F0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0x18EA6AF0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0x18EA6C50)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_PAUSEVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0x18EA6920)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_PLAYVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0x18EA68E0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_REGIST_OFFSET UNITYSDK_OFFSET(0x18EA5670)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_SETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0x18EA6AA0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_TICKEVENT_OFFSET UNITYSDK_OFFSET(0x18EA6890)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_TICK_OFFSET UNITYSDK_OFFSET(0x18EA6830)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_UNREGIST_OFFSET UNITYSDK_OFFSET(0x18EA5B30)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA6740)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_SpectrumEffectBase_TypeDefinitionIndex = 67666;

	class MusicVisualization_SpectrumEffectBase : public ::RPG::Client::PolymerEffectControllBase
	{
	public:
		::System::Int32 SpectrumSampleAmount; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MusicVisualizationSpectrumEffectElement*>* MV_ElementList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Regist(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_REGIST_OFFSET))(this, a1);
		}

		::System::Void UnRegist(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_UNREGIST_OFFSET))(this, a1);
		}

		::System::Void OnChangeMusicIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCHANGEMUSICINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void OnChangeMusicState(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCHANGEMUSICSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnLODChanging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONLODCHANGING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void TickEvent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_TICKEVENT_OFFSET))(this, a1);
		}

		::System::Void PlayVisualEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_PLAYVISUALEFFECT_OFFSET))(this);
		}

		::System::Void PauseVisualEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_PAUSEVISUALEFFECT_OFFSET))(this);
		}

		::System::Void EnableVisualRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ENABLEVISUALRENDERER_OFFSET))(this);
		}

		::System::Void DisableVisualRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_DISABLEVISUALRENDERER_OFFSET))(this);
		}

		::System::Void OnCurrentMusicStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCURRENTMUSICSTART_OFFSET))(this, a1);
		}

		::System::Void OnCurrentMusicWillEnd(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONCURRENTMUSICWILLEND_OFFSET))(this, a1);
		}

		::System::Void SetSpectrumData(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_SETSPECTRUMDATA_OFFSET))(this, a1);
		}

		::System::Void OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
