#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoResolverCallback; }
namespace System { class String; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D94C0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface___c__DisplayClass12_0_TypeDefinitionIndex = 35457;

	class MiHoYoMTRInterface___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback* callback; // 0x10
		::System::String* strHost; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}
	};
}
