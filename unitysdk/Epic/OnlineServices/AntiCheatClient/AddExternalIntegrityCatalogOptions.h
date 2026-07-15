#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONS_GET_PATHTOBINFILE_OFFSET UNITYSDK_OFFSET(0x1BDB9600)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONS_SET_PATHTOBINFILE_OFFSET UNITYSDK_OFFSET(0x1BDB9610)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB9620)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddExternalIntegrityCatalogOptions_TypeDefinitionIndex = 44178;

	class AddExternalIntegrityCatalogOptions : public ::System::Object
	{
	public:
		::System::String* _PathToBinFile_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_PathToBinFile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONS_GET_PATHTOBINFILE_OFFSET))(this);
		}

		::System::Void set_PathToBinFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDEXTERNALINTEGRITYCATALOGOPTIONS_SET_PATHTOBINFILE_OFFSET))(this, a1);
		}
	};
}
