#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15C568652F4FEFB0.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AudioClip; }

#define MOLEMOLE_NOTESFX__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAF6D0)

namespace MoleMole
{
	inline static constexpr unsigned int NoteSfx_TypeDefinitionIndex = 71750;

	class NoteSfx : public ::System::Object
	{
	public:
		::Enum_3_15C568652F4FEFB0 Type; // 0x10
		::UnityEngine::AudioClip* Clip; // 0x18
		::UnityEngine::AudioClip* UpClip; // 0x20
		::UnityEngine::AudioClip* DownClip; // 0x28
		::System::Single Volume; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTESFX__CTOR_OFFSET))(this);
		}
	};
}
