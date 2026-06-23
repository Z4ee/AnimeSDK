#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicClipBaseInfo.h"

namespace MoleMole { class ComicBubbleBaseInfo; }
namespace MoleMole { class ComicImgSplitScreenGroup; }
namespace MoleMole { class ComicSplitScreenInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Timeline { class ImageTrack; }

#define MOLEMOLE_COMICCHAPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB816F0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicChapterInfo_TypeDefinitionIndex = 32124;

	class ComicChapterInfo : public ::MoleMole::ComicClipBaseInfo
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ComicClipBaseInfo*>* pauseWaitZones; // 0x38
		::System::String* pageBGMState; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::ComicSplitScreenInfo*>* splitScreenDetails; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::ComicBubbleBaseInfo*>* bubbleDetails; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::ComicClipBaseInfo*>* splitScreenZones; // 0x58
		::System::String* pageTransitionSoundKey; // 0x60
		::MoleMole::ComicImgSplitScreenGroup* imgGroup; // 0x68
		::UnityEngine::Sprite* defaultSprite; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImageTrack*>* imageTracks; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICCHAPTERINFO__CTOR_OFFSET))(this);
		}
	};
}
