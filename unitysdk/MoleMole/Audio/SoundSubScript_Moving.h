#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Audio/SoundSubScriptBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_INIT_OFFSET UNITYSDK_OFFSET(0x12B87880)
#define MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_ONSUBSCRIPTACTIVE_OFFSET UNITYSDK_OFFSET(0x12B87DC0)
#define MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_ONSUBSCRIPTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x12B88100)
#define MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_ONSUBSCRIPTTICK_OFFSET UNITYSDK_OFFSET(0x12B878D0)
#define MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING__CTOR_OFFSET UNITYSDK_OFFSET(0x12B88410)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SoundSubScript_Moving_TypeDefinitionIndex = 80588;

	class SoundSubScript_Moving : public ::MoleMole::Audio::SoundSubScriptBase
	{
	public:
		::System::String* movingEvent; // 0x58
		::System::String* stopMovingEvent; // 0x60
		::System::UInt32 movingEventId; // 0x68
		::UnityEngine::GameObject* soundEmitter; // 0x70
		::UnityEngine::Vector3 lastPosition; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_INIT_OFFSET))(this, context);
		}

		::System::Void OnSubScriptTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_ONSUBSCRIPTTICK_OFFSET))(this, deltaTime);
		}

		::System::Void OnSubScriptActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_ONSUBSCRIPTACTIVE_OFFSET))(this);
		}

		::System::Void OnSubScriptDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SOUNDSUBSCRIPT_MOVING_ONSUBSCRIPTDEACTIVE_OFFSET))(this);
		}
	};
}
