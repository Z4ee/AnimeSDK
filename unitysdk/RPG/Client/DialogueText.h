#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Text.h"
#include "unitysdk/UnityEngine/UILineInfo.h"

namespace System { class String; }

#define RPG_CLIENT_DIALOGUETEXT_GETNOOVERFLOWCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xB794B20)
#define RPG_CLIENT_DIALOGUETEXT_ISOVERFLOW_OFFSET UNITYSDK_OFFSET(0xB7946B0)
#define RPG_CLIENT_DIALOGUETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB795110)
#define RPG_CLIENT_DIALOGUETEXT__ISLINEOVERFLOW_OFFSET UNITYSDK_OFFSET(0xB794AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueText_TypeDefinitionIndex = 67765;

	class DialogueText : public ::UnityEngine::UI::Text
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsOverflow(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT_ISOVERFLOW_OFFSET))(this, a1);
		}

		::System::Int32 GetNoOverflowCharCount(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT_GETNOOVERFLOWCHARCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean _IsLineOverflow(::UnityEngine::UILineInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UILineInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT__ISLINEOVERFLOW_OFFSET))(this, a1);
		}
	};
}
