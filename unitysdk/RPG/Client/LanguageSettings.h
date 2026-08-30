#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x194F5A90)
#define RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x194F5900)
#define RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x194F5B60)
#define RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x194F59D0)
#define RPG_CLIENT_LANGUAGESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x194F5880)

namespace RPG::Client
{
	inline static constexpr unsigned int LanguageSettings_TypeDefinitionIndex = 59505;

	class LanguageSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_LocalTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void set_LocalTextLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALTEXTLANGUAGE_OFFSET))(this, a1);
		}

		::System::String* get_LocalAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_GET_LOCALAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void set_LocalAudioLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LANGUAGESETTINGS_SET_LOCALAUDIOLANGUAGE_OFFSET))(this, a1);
		}
	};
}
