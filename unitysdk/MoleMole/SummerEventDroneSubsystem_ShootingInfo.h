#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class SummerWeaponConfig; }
namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x330F60)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_INIT_OFFSET UNITYSDK_OFFSET(0x7D0BD0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x7D0C90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_ISFULL_OFFSET UNITYSDK_OFFSET(0x7D0CE0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_RELOAD_OFFSET UNITYSDK_OFFSET(0x7D0C40)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_ShootingInfo_TypeDefinitionIndex = 47064;

	struct alignas(8) SummerEventDroneSubsystem_ShootingInfo
	{
		::System::String* ShootingBulletConfigID; // 0x10
		::System::Int32 Ammo; // 0x18
		::System::Int32 MagazineCapacity; // 0x1C
		::MoleMole::SummerWeaponConfig* WeaponConfig; // 0x20

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void Init(::System::String* key, ::System::Int32 maxCapacity, ::MoleMole::SummerWeaponConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::SummerWeaponConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_INIT_OFFSET))(this, key, maxCapacity, config);
		}

		::System::Void Reload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_RELOAD_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SHOOTINGINFO_ISFULL_OFFSET))(this);
		}
	};
}
