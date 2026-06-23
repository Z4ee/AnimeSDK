#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_AUDIOEVENTITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A031340)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A031330)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int AudioEventItem_TypeDefinitionIndex = 50097;

	class AudioEventItem : public ::System::Object
	{
	public:
		::System::String* audioKey; // 0x10
		::System::Boolean replay; // 0x18
		::System::Boolean continuous; // 0x19
		::System::Boolean triggerAfterVoice; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* audioKey, ::System::Boolean replay)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM__CTOR_1_OFFSET))(this, audioKey, replay);
		}
	};
}
