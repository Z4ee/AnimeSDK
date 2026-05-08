#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UI { class GetToggleFriendsKeyOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B5640)
#define EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8167E0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int GetToggleFriendsKeyOptionsInternal_TypeDefinitionIndex = 33351;

	struct alignas(4) GetToggleFriendsKeyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETTOGGLEFRIENDSKEYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
