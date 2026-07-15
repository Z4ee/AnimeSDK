#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class PresenceModificationSetRawRichTextOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A7BE00)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A7BDF0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A7BD20)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x3A7BC70)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetRawRichTextOptionsInternal_TypeDefinitionIndex = 43277;

	struct alignas(8) PresenceModificationSetRawRichTextOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_RichText; // 0x18

		::System::Void set_RichText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_RICHTEXT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
