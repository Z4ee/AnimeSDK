#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShootingGroundSubsystem_BulletMode.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGroundBulletType; }

#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160ED0E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___C__DISPLAYCLASS65_0__INITIALIZEBULLET_B__0_OFFSET UNITYSDK_OFFSET(0x160ED0F0)

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem___c__DisplayClass65_0_TypeDefinitionIndex = 54033;

	class ShootingGroundSubsystem___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::MoleMole::ShootingGroundSubsystem_BulletMode mode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitializeBullet_b__0(::MoleMole::Config::ConfigShootingGroundBulletType* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundBulletType*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___C__DISPLAYCLASS65_0__INITIALIZEBULLET_B__0_OFFSET))(this, item);
		}
	};
}
