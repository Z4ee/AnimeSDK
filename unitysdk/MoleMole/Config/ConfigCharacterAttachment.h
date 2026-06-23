#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHARACTERATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x162A8820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCharacterAttachment_TypeDefinitionIndex = 62878;

	class ConfigCharacterAttachment : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>* attachmentsGroup; // 0x10
		::System::Int32 avatarTemplateID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERATTACHMENT__CTOR_OFFSET))(this);
		}
	};
}
