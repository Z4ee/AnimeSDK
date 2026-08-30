#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATEPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E595280)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateProgressInfo_TypeDefinitionIndex = 34674;

	class VersionUpdateProgressInfo : public ::System::Object
	{
	public:
		::System::String* DescStr; // 0x10
		::System::String* DownloadProgress; // 0x18
		::System::String* DownloadSize; // 0x20
		::System::String* DownloadSpeed; // 0x28
		::System::Int64 CurSize; // 0x30
		::RPG::Client::TextID DescTextID; // 0x38
		::System::Int64 TotalSize; // 0x48
		::System::Boolean ShowSpeed; // 0x50
		::System::Single ProgressValue; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPROGRESSINFO__CTOR_OFFSET))(this);
		}
	};
}
