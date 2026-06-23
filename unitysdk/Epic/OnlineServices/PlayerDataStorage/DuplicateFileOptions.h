#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_GET_DESTINATIONFILENAME_OFFSET UNITYSDK_OFFSET(0x1D279BA0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D279B60)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_GET_SOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x1D279B80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_SET_DESTINATIONFILENAME_OFFSET UNITYSDK_OFFSET(0x1D279BB0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D279B70)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_SET_SOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x1D279B90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D279BC0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int DuplicateFileOptions_TypeDefinitionIndex = 35423;

	class DuplicateFileOptions : public ::System::Object
	{
	public:
		::System::String* _SourceFilename_k__BackingField; // 0x10
		::System::String* _DestinationFilename_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_SourceFilename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_GET_SOURCEFILENAME_OFFSET))(this);
		}

		::System::Void set_SourceFilename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_SET_SOURCEFILENAME_OFFSET))(this, value);
		}

		::System::String* get_DestinationFilename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_GET_DESTINATIONFILENAME_OFFSET))(this);
		}

		::System::Void set_DestinationFilename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_SET_DESTINATIONFILENAME_OFFSET))(this, value);
		}
	};
}
