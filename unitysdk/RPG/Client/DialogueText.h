#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Text.h"
#include "unitysdk/UnityEngine/UILineInfo.h"

namespace System { class String; }

#define RPG_CLIENT_DIALOGUETEXT_GETNOOVERFLOWCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x180B4380)
#define RPG_CLIENT_DIALOGUETEXT_ISOVERFLOW_OFFSET UNITYSDK_OFFSET(0x180B3F10)
#define RPG_CLIENT_DIALOGUETEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x180B3E50)
#define RPG_CLIENT_DIALOGUETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180B4AE0)
#define RPG_CLIENT_DIALOGUETEXT__ISLINEOVERFLOW_OFFSET UNITYSDK_OFFSET(0x180B4310)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueText_TypeDefinitionIndex = 69249;

	class DialogueText : public ::UnityEngine::UI::Text
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT__CTOR_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUETEXT_SET_TEXT_OFFSET))(this, a1);
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
