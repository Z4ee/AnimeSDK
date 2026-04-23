#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Text.h"
#include "unitysdk/UnityEngine/UILineInfo.h"

namespace System { class String; }

#define RPG_CLIENT_DIALOGUETEXT_GETNOOVERFLOWCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xA117890)
#define RPG_CLIENT_DIALOGUETEXT_ISOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA117410)
#define RPG_CLIENT_DIALOGUETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA117E80)
#define RPG_CLIENT_DIALOGUETEXT__ISLINEOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA117820)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueText_TypeDefinitionIndex = 66825;

	class DialogueText : public ::UnityEngine::UI::Text
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsOverflow(::System::String* textContent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT_ISOVERFLOW_OFFSET))(this, textContent);
		}

		::System::Int32 GetNoOverflowCharCount(::System::String* textContent)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT_GETNOOVERFLOWCHARCOUNT_OFFSET))(this, textContent);
		}

		::System::Boolean _IsLineOverflow(::UnityEngine::UILineInfo line)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UILineInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT__ISLINEOVERFLOW_OFFSET))(this, line);
		}
	};
}
