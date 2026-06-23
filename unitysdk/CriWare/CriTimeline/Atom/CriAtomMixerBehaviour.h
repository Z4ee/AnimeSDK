#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace CriWare { class CriAtomSourceBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1E663550)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_M_GUID_OFFSET UNITYSDK_OFFSET(0x1E6634E0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1E663560)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1E663500)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E6637B0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_SET_M_GUID_OFFSET UNITYSDK_OFFSET(0x1E6634F0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E664360)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomMixerBehaviour_TypeDefinitionIndex = 34391;

	class CriAtomMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* m_Director; // 0x10
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* m_Clips; // 0x18
		::CriWare::CriAtomSourceBase* m_Bind; // 0x20
		::System::String* m_AisacControls; // 0x28
		::System::Boolean m_StopOnWrapping; // 0x30
		::System::Boolean m_StopAtGraphEnd; // 0x31
		::System::Guid _m_Guid_k__BackingField; // 0x34
		::System::DateTime m_lastScrubTime; // 0x48
		::System::Double m_lastDirectorTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Guid get_m_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_M_GUID_OFFSET))(this);
		}

		::System::Void set_m_Guid(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_SET_M_GUID_OFFSET))(this, value);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		static ::System::Boolean get_IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_ISEDITOR_OFFSET))();
		}
	};
}
