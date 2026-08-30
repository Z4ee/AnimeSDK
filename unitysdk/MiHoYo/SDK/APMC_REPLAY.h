#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYFIGHTINGREPORT_OFFSET UNITYSDK_OFFSET(0x16A778C0)
#define MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYREPORT_OFFSET UNITYSDK_OFFSET(0x16A77640)
#define MIHOYO_SDK_APMC_REPLAY_REPLAYFIGHTINGREPORT_OFFSET UNITYSDK_OFFSET(0x16A777C0)
#define MIHOYO_SDK_APMC_REPLAY_REPLAYREPORT_OFFSET UNITYSDK_OFFSET(0x16A77520)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_REPLAY_TypeDefinitionIndex = 46954;

	class APMC_REPLAY : public ::System::Object
	{
	public:
		static ::System::Void replayReport(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_REPLAYREPORT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void replayFightingReport(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_REPLAYFIGHTINGREPORT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Astrolabe_ReplayReport(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYREPORT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Astrolabe_ReplayFightingReport(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_REPLAY_ASTROLABE_REPLAYFIGHTINGREPORT_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
