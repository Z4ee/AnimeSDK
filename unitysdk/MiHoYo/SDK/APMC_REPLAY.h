#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYFIGHTINGREPORT_OFFSET UNITYSDK_OFFSET(0x1D281DC0)
#define MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYREPORT_OFFSET UNITYSDK_OFFSET(0x1D281B30)
#define MIHOYO_SDK_APMC_REPLAY_REPLAYFIGHTINGREPORT_OFFSET UNITYSDK_OFFSET(0x1D281CB0)
#define MIHOYO_SDK_APMC_REPLAY_REPLAYREPORT_OFFSET UNITYSDK_OFFSET(0x1D281A00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_REPLAY_TypeDefinitionIndex = 36881;

	class APMC_REPLAY : public ::System::Object
	{
	public:
		static ::System::Void replayReport(::System::String* battle_id, ::System::String* stage_id, ::System::String* data_version, ::System::String* bin_version, ::System::String* reason, ::System::String* dmp, ::System::String* custom_data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_REPLAYREPORT_OFFSET))(battle_id, stage_id, data_version, bin_version, reason, dmp, custom_data);
		}

		static ::System::Void replayFightingReport(::System::String* stage_id, ::System::String* data_version, ::System::String* sig_version, ::System::String* dmp, ::System::String* custom_data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_REPLAYFIGHTINGREPORT_OFFSET))(stage_id, data_version, sig_version, dmp, custom_data);
		}

		static ::System::Void Astrolabe_ReplayReport(::System::String* battle_id, ::System::String* stage_id, ::System::String* data_version, ::System::String* bin_version, ::System::String* reason, ::System::String* dmp, ::System::String* custom_data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYREPORT_OFFSET))(battle_id, stage_id, data_version, bin_version, reason, dmp, custom_data);
		}

		static ::System::Void Astrolabe_ReplayFightingReport(::System::String* stage_id, ::System::String* data_version, ::System::String* sig_version, ::System::String* dmp, ::System::String* custom_data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYFIGHTINGREPORT_OFFSET))(stage_id, data_version, sig_version, dmp, custom_data);
		}
	};
}
