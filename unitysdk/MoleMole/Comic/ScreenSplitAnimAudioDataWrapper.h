#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Comic { class AudioContent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E755560)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int ScreenSplitAnimAudioDataWrapper_TypeDefinitionIndex = 32145;

	class ScreenSplitAnimAudioDataWrapper : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>* audioContentList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER__CTOR_OFFSET))(this);
		}
	};
}
