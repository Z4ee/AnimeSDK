#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A26FC20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A26FC60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATEACHIEVEMENT_B__29_0_OFFSET UNITYSDK_OFFSET(0x1A26FC70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATERECENTPLAYERS_B__48_0_OFFSET UNITYSDK_OFFSET(0x1A26FC90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATESTATISTICS_B__31_0_OFFSET UNITYSDK_OFFSET(0x1A26FC80)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c_TypeDefinitionIndex = 8464;

	class HoYoChannel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0x1BF70);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>** StaticGet___9__48_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0x1BF78);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannel___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannel___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0x1BF80);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0x1BF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateAchievement_b__29_0(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATEACHIEVEMENT_B__29_0_OFFSET))(this, a1);
		}

		::System::Void _UpdateStatistics_b__31_0(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATESTATISTICS_B__31_0_OFFSET))(this, a1);
		}

		::System::Void _UpdateRecentPlayers_b__48_0(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATERECENTPLAYERS_B__48_0_OFFSET))(this, a1);
		}
	};
}
