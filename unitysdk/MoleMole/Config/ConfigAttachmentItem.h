#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17529A30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttachmentItem_TypeDefinitionIndex = 52278;

	class ConfigAttachmentItem : public ::System::Object
	{
	public:
		::System::String* attachPointName; // 0x10
		::System::String* staticAttachmentPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM__CTOR_OFFSET))(this);
		}
	};
}
