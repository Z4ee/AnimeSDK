#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/UI/KeyCombination.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UI { class SetToggleFriendsKeyOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9CDC00)
#define EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_KEYCOMBINATION_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x961230)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int SetToggleFriendsKeyOptionsInternal_TypeDefinitionIndex = 35595;

	struct alignas(4) SetToggleFriendsKeyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::UI::KeyCombination m_KeyCombination; // 0x14

		::System::Void set_KeyCombination(::Epic::OnlineServices::UI::KeyCombination value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::KeyCombination))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_KEYCOMBINATION_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
