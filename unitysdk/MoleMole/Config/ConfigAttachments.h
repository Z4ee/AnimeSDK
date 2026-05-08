#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigCharacterAttachment; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGATTACHMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA3B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttachments_TypeDefinitionIndex = 56764;

	class ConfigAttachments : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCharacterAttachment*>* characterAttachments; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTS__CTOR_OFFSET))(this);
		}
	};
}
