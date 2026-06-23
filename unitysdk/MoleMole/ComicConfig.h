#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::Comic { class DialogueAudioContent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class AudioContentListSplitter; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class BGMPageInfoSplitter; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class FloatSplitter; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class PageDataSplitter; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class StringSplitter; }

#define MOLEMOLE_COMICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E866370)

namespace MoleMole
{
	inline static constexpr unsigned int ComicConfig_TypeDefinitionIndex = 32126;

	class ComicConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::UnityEngine::Timeline::TimelineAsset* timeLineAsset; // 0x58
		::UnityEngine::Timeline::Comic::DataSplitter::StringSplitter* bubbleVODS; // 0x60
		::UnityEngine::Timeline::Comic::DataSplitter::StringSplitter* bubbleBGMStateDS; // 0x68
		::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfoSplitter* pageBGMStateDS; // 0x70
		::UnityEngine::Timeline::Comic::DataSplitter::StringSplitter* bubbleAudioDS; // 0x78
		::UnityEngine::Timeline::Comic::DataSplitter::AudioContentListSplitter* bubbleAudioNewDS; // 0x80
		::UnityEngine::Timeline::Comic::DataSplitter::FloatSplitter* bubbleAudioDurationDS; // 0x88
		::UnityEngine::Timeline::Comic::DataSplitter::PageDataSplitter* pageDS; // 0x90
		::UnityEngine::Timeline::Comic::DataSplitter::StringSplitter* decorationAudioDS; // 0x98
		::UnityEngine::Timeline::Comic::DataSplitter::FloatSplitter* decorationAudioDurationDS; // 0xA0
		::UnityEngine::Timeline::Comic::DataSplitter::StringSplitter* cameraShakeVoiceDS; // 0xA8
		::System::String* chapterBGMState; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::Comic::DialogueAudioContent*>* dialogueAudioContents; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICCONFIG__CTOR_OFFSET))(this);
		}
	};
}
