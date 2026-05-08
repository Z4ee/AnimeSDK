#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIMainPageShowSetting; }
namespace MoleMole { class UIAvatarShowSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAF990)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyAvatarShowSettings_TypeDefinitionIndex = 70824;

	class ConfigBuddyAvatarShowSettings : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* buddyName; // 0x58
		::System::Int32 buddyID; // 0x60
		::MoleMole::ConfigUIMainPageShowSetting* MainPageShowSetting; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>* buddyShowSettings; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
