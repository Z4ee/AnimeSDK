#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"

class Class_1_482F3423DE650EAD;
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xE42DE30)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE__CTOR_OFFSET UNITYSDK_OFFSET(0xE42DEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_Fire_TypeDefinitionIndex = 68679;

	class WolfBroGunPlayTargetActionConfig_Fire : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::RPG::Client::WolfBroGunTargetProjectile* projectile; // 0x18
		::System::String* attachPoint; // 0x20
		::System::Single loopDelay; // 0x28
		::System::Int32 loopCount; // 0x2C
		::System::Boolean aimPlayer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}
	};
}
