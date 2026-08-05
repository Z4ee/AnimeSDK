#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_COMIC_AUDIOCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F81A110)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int AudioContent_TypeDefinitionIndex = 32772;

	class AudioContent : public ::System::Object
	{
	public:
		::System::String* keyName; // 0x10
		::System::Single duration; // 0x18
		::System::Int32 clearAfterPageCnt; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_AUDIOCONTENT__CTOR_OFFSET))(this);
		}
	};
}
