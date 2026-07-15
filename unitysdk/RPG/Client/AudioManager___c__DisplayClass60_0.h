#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18109F70)
#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS60_0__PAUSEEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x181155A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager___c__DisplayClass60_0_TypeDefinitionIndex = 57084;

	class AudioManager___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::String* eventName; // 0x10
		::UnityEngine::GameObject* obj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseEvent_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS60_0__PAUSEEVENT_B__0_OFFSET))(this, a1);
		}
	};
}
