#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMIC_DIALOGUEAUDIOCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B1790)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int DialogueAudioContent_TypeDefinitionIndex = 32776;

	class DialogueAudioContent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* audioKeyList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_DIALOGUEAUDIOCONTENT__CTOR_OFFSET))(this);
		}
	};
}
