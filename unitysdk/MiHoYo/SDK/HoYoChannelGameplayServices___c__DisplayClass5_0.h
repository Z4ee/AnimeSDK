#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83DD20)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0__ONACHIEVEMENTSCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1D83DD30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass5_0_TypeDefinitionIndex = 37556;

	class HoYoChannelGameplayServices___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAchievementsCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0__ONACHIEVEMENTSCALLBACK_B__0_OFFSET))(this);
		}
	};
}
