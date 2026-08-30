#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDECATEGORYINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B1067E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDECATEGORYINFO_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x1B1067D0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDECATEGORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1067C0)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialGuideCategoryInfo_TypeDefinitionIndex = 78525;

	class TutorialGuideCategoryInfo : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _NameText_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDECATEGORYINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_NameText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDECATEGORYINFO_GET_NAMETEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDECATEGORYINFO_GET_ICONPATH_OFFSET))(this);
		}
	};
}
