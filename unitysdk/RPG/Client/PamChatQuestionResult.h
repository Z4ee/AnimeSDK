#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F91AD0C5A85E4AFA_5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAMCHATQUESTIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D5C00)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatQuestionResult_TypeDefinitionIndex = 63347;

	class PamChatQuestionResult : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Tags; // 0x18
		::System::String* Content; // 0x20
		::System::String* Title; // 0x28

		::System::Void _ctor(::Class_1_F91AD0C5A85E4AFA_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUESTIONRESULT__CTOR_OFFSET))(this, a1);
		}
	};
}
