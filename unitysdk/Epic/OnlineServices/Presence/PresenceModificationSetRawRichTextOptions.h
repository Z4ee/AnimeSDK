#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONS_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1CB99F00)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONS_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1CB99F10)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB99F20)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetRawRichTextOptions_TypeDefinitionIndex = 35394;

	class PresenceModificationSetRawRichTextOptions : public ::System::Object
	{
	public:
		::System::String* _RichText_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_RichText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONS_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_RichText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETRAWRICHTEXTOPTIONS_SET_RICHTEXT_OFFSET))(this, value);
		}
	};
}
