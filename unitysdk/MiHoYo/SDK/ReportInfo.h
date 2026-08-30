#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_REPORTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99A820)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ReportInfo_TypeDefinitionIndex = 7834;

	class ReportInfo : public ::System::Object
	{
	public:
		::System::Int32 applicationId; // 0x10
		::System::String* applicationName; // 0x18
		::System::String* ip; // 0x20
		::System::String* client_version; // 0x28
		::System::String* region; // 0x30
		::System::String* register_cps; // 0x38
		::System::String* current_cps; // 0x40
		::System::String* uid; // 0x48
		::System::String* tag; // 0x50
		::System::String* uapc; // 0x58
		::System::String* platform_type; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTINFO__CTOR_OFFSET))(this);
		}
	};
}
