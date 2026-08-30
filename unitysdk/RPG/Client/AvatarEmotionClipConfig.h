#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarEmotionClipConfig_EmotionClipEntry.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAREMOTIONCLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x193C2A10)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEmotionClipConfig_TypeDefinitionIndex = 69381;

	class AvatarEmotionClipConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarEmotionClipConfig_EmotionClipEntry>* Entries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREMOTIONCLIPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
