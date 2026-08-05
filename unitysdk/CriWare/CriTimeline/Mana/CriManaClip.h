#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Mana/CriManaClipBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace CriWare::CriTimeline::Mana { class CriManaBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class TextAsset; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FBEBB20)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_DATAID_OFFSET UNITYSDK_OFFSET(0x1FBEBF30)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEDATA_OFFSET UNITYSDK_OFFSET(0x1FBEBC10)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIENAME_OFFSET UNITYSDK_OFFSET(0x1FBEBD70)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x1FBEBC00)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBEC0B0)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaClip_TypeDefinitionIndex = 35030;

	class CriManaClip : public ::CriWare::CriTimeline::Mana::CriManaClipBase
	{
	public:
		::System::String* m_moviePath; // 0x98
		::UnityEngine::TextAsset* m_movieData; // 0xA0
		::CriWare::CriTimeline::Mana::CriManaBehaviour* m_manaBehaviour; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::System::String* get_MoviePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_MovieData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEDATA_OFFSET))(this);
		}

		::System::String* get_MovieName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIENAME_OFFSET))(this);
		}

		::System::Int32 get_DataId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_DATAID_OFFSET))(this);
		}
	};
}
