#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_Event.h"

namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE_METHOD_2_785C4F72B6B07E5A_OFFSET UNITYSDK_OFFSET(0xC0587D0)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xC058830)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_Event_SetCharacterAtlasFace_TypeDefinitionIndex = 64103;

	class MonoAnimatorStateSimpleEvent_Event_SetCharacterAtlasFace : public ::RPG::Client::MonoAnimatorStateSimpleEvent_Event
	{
	public:
		::System::Int32 EmotionIndex; // 0x10
		::RPG::Client::CharacterAtlasFace* AtlasFace; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_785C4F72B6B07E5A(::RPG::Client::MonoAnimatorStateSimpleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAnimatorStateSimpleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE_METHOD_2_785C4F72B6B07E5A_OFFSET))(this, a1);
		}
	};
}
