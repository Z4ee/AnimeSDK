#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF2930)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int GetToggleFriendsKeyOptions_TypeDefinitionIndex = 41131;

	class GetToggleFriendsKeyOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
