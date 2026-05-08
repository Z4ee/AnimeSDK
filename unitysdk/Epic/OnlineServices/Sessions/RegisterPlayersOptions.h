#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_GET_PLAYERSTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1ADEF830)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADEF810)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_SET_PLAYERSTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1ADEF840)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1ADEF820)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEF850)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int RegisterPlayersOptions_TypeDefinitionIndex = 33532;

	class RegisterPlayersOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _PlayersToRegister_k__BackingField; // 0x10
		::System::String* _SessionName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_PlayersToRegister()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_GET_PLAYERSTOREGISTER_OFFSET))(this);
		}

		::System::Void set_PlayersToRegister(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSOPTIONS_SET_PLAYERSTOREGISTER_OFFSET))(this, value);
		}
	};
}
