#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MTR/MiHoYoMTRInterface_BaseTask.h"

namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoMTRCallback; }
namespace System { class String; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x8D31E90)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MTRTask_TypeDefinitionIndex = 43241;

	class MiHoYoMTRInterface_MTRTask : public ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_BaseTask
	{
	public:
		::System::String* m_strHost; // 0x28
		::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* m_callback; // 0x30
		::System::Int32 m_nMaxTTL; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRTASK__CTOR_OFFSET))(this);
		}
	};
}
