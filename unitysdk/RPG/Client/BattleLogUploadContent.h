#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_BATTLELOGUPLOADCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x174BAFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLogUploadContent_TypeDefinitionIndex = 58228;

	class BattleLogUploadContent : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::UInt32 stage_id; // 0x14
		::System::String* upload_time; // 0x18
		::System::String* data_version; // 0x20
		::System::String* region; // 0x28
		::System::UInt32 sig_version; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELOGUPLOADCONTENT__CTOR_OFFSET))(this);
		}
	};
}
