#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9974410)
#define RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9974280)
#define RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x99744E0)
#define RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9974350)
#define RPG_CLIENT_LANGUAGESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9974200)

namespace RPG::Client
{
	inline static constexpr unsigned int LanguageSettings_TypeDefinitionIndex = 48009;

	class LanguageSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS__CTOR_OFFSET))(this, name);
		}

		::System::String* get_LocalTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void set_LocalTextLanguage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALTEXTLANGUAGE_OFFSET))(this, value);
		}

		::System::String* get_LocalAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void set_LocalAudioLanguage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALAUDIOLANGUAGE_OFFSET))(this, value);
		}
	};
}
