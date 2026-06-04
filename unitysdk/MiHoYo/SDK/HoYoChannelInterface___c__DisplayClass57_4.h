#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET UNITYSDK_OFFSET(0xA16A8C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_4__CTOR_OFFSET UNITYSDK_OFFSET(0xA169960)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass57_4_TypeDefinitionIndex = 43933;

	class HoYoChannelInterface___c__DisplayClass57_4 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_4__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS57_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET))(this);
		}
	};
}
