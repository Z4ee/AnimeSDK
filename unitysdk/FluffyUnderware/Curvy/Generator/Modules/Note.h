#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_GET_NOTETEXT_OFFSET UNITYSDK_OFFSET(0x1E3B9770)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E3B9790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_RESET_OFFSET UNITYSDK_OFFSET(0x1E3B97D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_SET_NOTETEXT_OFFSET UNITYSDK_OFFSET(0x1E3B9780)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B97F0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int Note_TypeDefinitionIndex = 38802;

	class Note : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::System::String* m_Note; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE__CTOR_OFFSET))(this);
		}

		::System::String* get_NoteText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_GET_NOTETEXT_OFFSET))(this);
		}

		::System::Void set_NoteText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_SET_NOTETEXT_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_NOTE_RESET_OFFSET))(this);
		}
	};
}
