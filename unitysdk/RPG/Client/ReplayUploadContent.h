#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_REPLAYUPLOADCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1797FDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ReplayUploadContent_TypeDefinitionIndex = 61074;

	class ReplayUploadContent : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::UInt32 battle_id; // 0x14
		::System::UInt32 stage_id; // 0x18
		::System::String* upload_time; // 0x20
		::System::String* data_version; // 0x28
		::System::String* region; // 0x30
		::System::String* reason; // 0x38
		::System::String* custom_data; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYUPLOADCONTENT__CTOR_OFFSET))(this);
		}
	};
}
