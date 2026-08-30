#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TUTORIAL_TUTORIALSINGLEGUIDEINFO_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xE2F5980)
#define RPG_CLIENT_TUTORIAL_TUTORIALSINGLEGUIDEINFO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE2F5970)
#define RPG_CLIENT_TUTORIAL_TUTORIALSINGLEGUIDEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE2F3FD0)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialSingleGuideInfo_TypeDefinitionIndex = 78525;

	class TutorialSingleGuideInfo : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::RPG::Client::TextID _DescText_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSINGLEGUIDEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSINGLEGUIDEINFO_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSINGLEGUIDEINFO_GET_DESCTEXT_OFFSET))(this);
		}
	};
}
