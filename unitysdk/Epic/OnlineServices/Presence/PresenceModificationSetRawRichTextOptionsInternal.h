#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class PresenceModificationSetRawRichTextOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E26F0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8E25D0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8E2500)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x8E2450)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetRawRichTextOptionsInternal_TypeDefinitionIndex = 33832;

	struct alignas(8) PresenceModificationSetRawRichTextOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_RichText; // 0x18

		::System::Void set_RichText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_RICHTEXT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
