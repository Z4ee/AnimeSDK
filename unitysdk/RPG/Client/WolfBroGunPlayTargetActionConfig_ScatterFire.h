#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"

class Class_1_482F3423DE650EAD;
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xB4D7E90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB4D7F20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D7F10)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_ScatterFire_TypeDefinitionIndex = 63355;

	class WolfBroGunPlayTargetActionConfig_ScatterFire : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::RPG::Client::WolfBroGunTargetProjectile* projectile; // 0x18
		::System::String* attachPoint; // 0x20
		::System::Single loopDelay; // 0x28
		::System::Int32 loopCount; // 0x2C
		::System::Single startRotateY; // 0x30
		::System::Single loopOffsetY; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_F8B73ECE7F883AC1()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
