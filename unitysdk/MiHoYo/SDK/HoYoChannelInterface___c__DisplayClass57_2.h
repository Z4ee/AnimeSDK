#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET UNITYSDK_OFFSET(0xA16A740)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA169940)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass57_2_TypeDefinitionIndex = 43931;

	class HoYoChannelInterface___c__DisplayClass57_2 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_2__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_2__CLEANUPTIMEDOUTCALLBACKS_B__2_OFFSET))(this);
		}
	};
}
