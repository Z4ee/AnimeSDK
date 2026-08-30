#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_9788BF934C00DE98;
namespace System { class String; }

#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xE2F5140)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xE2F5130)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_NEEDREDDOT_OFFSET UNITYSDK_OFFSET(0xE2F5170)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xE2F5150)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTSUBKEY_OFFSET UNITYSDK_OFFSET(0xE2F5160)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE2F50F0)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialGuideSpecialGotoInfo_TypeDefinitionIndex = 78528;

	class TutorialGuideSpecialGotoInfo : public ::System::Object
	{
	public:
		::System::String* _ReddotKey_k__BackingField; // 0x10
		::System::String* _ReddotSubKey_k__BackingField; // 0x18
		::RPG::Client::TextID _HintText_k__BackingField; // 0x20
		::System::UInt32 _GotoID_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_9788BF934C00DE98* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9788BF934C00DE98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_HINTTEXT_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_GOTOID_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::String* get_ReddotSubKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTSUBKEY_OFFSET))(this);
		}

		::System::Boolean get_NeedReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESPECIALGOTOINFO_GET_NEEDREDDOT_OFFSET))(this);
		}
	};
}
