#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"

class Class_1_482F3423DE650EAD;
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xB4D79B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB4D7A40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D7A30)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_Die_TypeDefinitionIndex = 63352;

	class WolfBroGunPlayTargetActionConfig_Die : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Boolean addScore; // 0x18
		::System::String* overrideAnim; // 0x20
		::System::String* overrideFlipAnim; // 0x28
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* dieActions; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_47FCE72550F759BF()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_METHOD_2_47FCE72550F759BF_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_F8B73ECE7F883AC1()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}
