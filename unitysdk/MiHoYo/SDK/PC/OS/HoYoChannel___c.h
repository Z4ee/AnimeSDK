#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3C1370)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C13B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATEACHIEVEMENT_B__29_0_OFFSET UNITYSDK_OFFSET(0x1D3C13C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATERECENTPLAYERS_B__48_0_OFFSET UNITYSDK_OFFSET(0x1D3C13E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATESTATISTICS_B__31_0_OFFSET UNITYSDK_OFFSET(0x1D3C13D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c_TypeDefinitionIndex = 20617;

	class HoYoChannel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0xA580);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannel___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannel___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0xA588);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0xA590);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>** StaticGet___9__48_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel___c_TypeDefinitionIndex)->GetStaticField(0xA598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateAchievement_b__29_0(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATEACHIEVEMENT_B__29_0_OFFSET))(this, result);
		}

		::System::Void _UpdateStatistics_b__31_0(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATESTATISTICS_B__31_0_OFFSET))(this, result);
		}

		::System::Void _UpdateRecentPlayers_b__48_0(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATERECENTPLAYERS_B__48_0_OFFSET))(this, result);
		}
	};
}
