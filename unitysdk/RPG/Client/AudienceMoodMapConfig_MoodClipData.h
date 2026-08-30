#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/EClipType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODCLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC793E00)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceMoodMapConfig_MoodClipData_TypeDefinitionIndex = 69120;

	class AudienceMoodMapConfig_MoodClipData : public ::System::Object
	{
	public:
		::System::String* ClipName; // 0x10
		::System::Int32 ClipIndex; // 0x18
		::System::Single Weight; // 0x1C
		::RPG::Client::CrowdAnimator::EClipType type; // 0x20
		::System::Single jumpNormalizedTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODCLIPDATA__CTOR_OFFSET))(this);
		}
	};
}
