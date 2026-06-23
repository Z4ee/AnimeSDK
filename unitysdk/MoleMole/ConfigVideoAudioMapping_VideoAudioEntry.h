#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGVIDEOAUDIOMAPPING_VIDEOAUDIOENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x115F8190)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigVideoAudioMapping_VideoAudioEntry_TypeDefinitionIndex = 48757;

	class ConfigVideoAudioMapping_VideoAudioEntry : public ::System::Object
	{
	public:
		::System::String* videoResUrl; // 0x10
		::System::String* wwisePlayEvent; // 0x18
		::System::String* wwiseStopEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVIDEOAUDIOMAPPING_VIDEOAUDIOENTRY__CTOR_OFFSET))(this);
		}
	};
}
