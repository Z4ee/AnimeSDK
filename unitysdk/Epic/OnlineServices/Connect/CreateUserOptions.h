#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ContinuanceToken; }

#define EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONS_GET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x8E53C70)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONS_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x8E53C80)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E53C90)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CreateUserOptions_TypeDefinitionIndex = 42278;

	class CreateUserOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ContinuanceToken* _ContinuanceToken_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken()
		{
			return ((::Epic::OnlineServices::ContinuanceToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONS_GET_CONTINUANCETOKEN_OFFSET))(this);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONS_SET_CONTINUANCETOKEN_OFFSET))(this, value);
		}
	};
}
