#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class IStatement; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class String; }
namespace UnityEngine { class AudioClip; }

#define NODECANVAS_DIALOGUETREES_STATEMENT_BLACKBOARDREPLACE_OFFSET UNITYSDK_OFFSET(0x1A2001A0)
#define NODECANVAS_DIALOGUETREES_STATEMENT_GET_AUDIO_OFFSET UNITYSDK_OFFSET(0x1A2000F0)
#define NODECANVAS_DIALOGUETREES_STATEMENT_GET_META_OFFSET UNITYSDK_OFFSET(0x1A200110)
#define NODECANVAS_DIALOGUETREES_STATEMENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A2000D0)
#define NODECANVAS_DIALOGUETREES_STATEMENT_SET_AUDIO_OFFSET UNITYSDK_OFFSET(0x1A200100)
#define NODECANVAS_DIALOGUETREES_STATEMENT_SET_META_OFFSET UNITYSDK_OFFSET(0x1A200120)
#define NODECANVAS_DIALOGUETREES_STATEMENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A2000E0)
#define NODECANVAS_DIALOGUETREES_STATEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2002B0)
#define NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A200150)
#define NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A200170)
#define NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A200190)
#define NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A200130)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int Statement_TypeDefinitionIndex = 27445;

	class Statement : public ::System::Object
	{
	public:
		::System::String* _text; // 0x10
		::UnityEngine::AudioClip* _audio; // 0x18
		::System::String* _meta; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_1_OFFSET))(this, text);
		}

		::System::Void _ctor_2(::System::String* text, ::UnityEngine::AudioClip* audio)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_2_OFFSET))(this, text, audio);
		}

		::System::Void _ctor_3(::System::String* text, ::UnityEngine::AudioClip* audio, ::System::String* meta)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AudioClip*, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT__CTOR_3_OFFSET))(this, text, audio, meta);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_SET_TEXT_OFFSET))(this, value);
		}

		::UnityEngine::AudioClip* get_audio()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_GET_AUDIO_OFFSET))(this);
		}

		::System::Void set_audio(::UnityEngine::AudioClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AudioClip*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_SET_AUDIO_OFFSET))(this, value);
		}

		::System::String* get_meta()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_GET_META_OFFSET))(this);
		}

		::System::Void set_meta(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_SET_META_OFFSET))(this, value);
		}

		::NodeCanvas::DialogueTrees::IStatement* BlackboardReplace(::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::DialogueTrees::IStatement*(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_BLACKBOARDREPLACE_OFFSET))(this, bb);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT_TOSTRING_OFFSET))(this);
		}
	};
}
