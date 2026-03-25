#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PERSONALIZEUTILS_CANDISPLAYINLOCK_OFFSET UNITYSDK_OFFSET(0x9F35200)
#define RPG_CLIENT_PERSONALIZEUTILS_GETEQUIPPEDPHONECASEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9F354E0)
#define RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGEL_OFFSET UNITYSDK_OFFSET(0x9F35470)
#define RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGER_OFFSET UNITYSDK_OFFSET(0x9F35740)

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeUtils_TypeDefinitionIndex = 54043;

	class PersonalizeUtils : public ::System::Object
	{
	public:
		static ::System::Boolean CanDisplayInLock(::RPG::GameCore::PersonalizeShowType showType, ::System::UInt32 showParam)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PersonalizeShowType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_CANDISPLAYINLOCK_OFFSET))(showType, showParam);
		}

		static ::System::String* GetPhoneThemeImageL(::System::UInt32 themeID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGEL_OFFSET))(themeID);
		}

		static ::System::String* GetEquippedPhoneCasePrefabPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_GETEQUIPPEDPHONECASEPREFABPATH_OFFSET))(avatarID);
		}

		static ::System::String* GetPhoneThemeImageR(::System::UInt32 themeID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGER_OFFSET))(themeID);
		}
	};
}
