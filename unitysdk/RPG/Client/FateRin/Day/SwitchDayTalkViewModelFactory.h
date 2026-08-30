#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AB4E0A41BB89929E;
class Class_1_F248B058F5A06B98;
class Class_1_FD893FD36F6A3A6D_7;
namespace RPG::Client::FateRin::Day { class SwitchDayTalkViewModel; }

#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATEBYDAY_OFFSET UNITYSDK_OFFSET(0xD0016A0)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD0017E0)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD001690)

namespace RPG::Client::FateRin::Day
{
	inline static constexpr unsigned int SwitchDayTalkViewModelFactory_TypeDefinitionIndex = 79749;

	class SwitchDayTalkViewModelFactory : public ::System::Object
	{
	public:
		::Class_1_FD893FD36F6A3A6D_7* _Service; // 0x10
		::Class_1_F248B058F5A06B98* _AvatarService; // 0x18

		::System::Void _ctor(::Class_1_FD893FD36F6A3A6D_7* a1, ::Class_1_F248B058F5A06B98* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_7*, ::Class_1_F248B058F5A06B98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Day::SwitchDayTalkViewModel* CreateByDay(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateRin::Day::SwitchDayTalkViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATEBYDAY_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Day::SwitchDayTalkViewModel* Create(::Class_1_AB4E0A41BB89929E* a1)
		{
			return ((::RPG::Client::FateRin::Day::SwitchDayTalkViewModel*(*)(::PVOID, ::Class_1_AB4E0A41BB89929E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
