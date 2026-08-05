#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MTR/MiHoYoMTRInterface_BaseTask.h"

namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoUrlUsageCallback; }
namespace System { class String; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_URLCHECKTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E52F1A0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_UrlCheckTask_TypeDefinitionIndex = 37712;

	class MiHoYoMTRInterface_UrlCheckTask : public ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_BaseTask
	{
	public:
		::System::String* m_strDestIP; // 0x28
		::System::String* m_strUrl; // 0x30
		::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback* m_callback; // 0x38
		::System::Boolean m_bCheckAllIP; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_URLCHECKTASK__CTOR_OFFSET))(this);
		}
	};
}
