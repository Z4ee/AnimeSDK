#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Fire; }

#define CLASS_3_5F48017B7D67243F_METHOD_3_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0xB6DFB80)
#define CLASS_3_5F48017B7D67243F_METHOD_3_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xB6DF900)
#define CLASS_3_5F48017B7D67243F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB6DF8C0)
#define CLASS_3_5F48017B7D67243F__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DFE60)

inline static constexpr unsigned int Class_3_5F48017B7D67243F_TypeDefinitionIndex = 68666;

class Class_3_5F48017B7D67243F : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Fire*>
{
public:
	::System::Single PDLCENKDNGO; // 0x28
	::System::Int32 GAGEBMIOEGN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F48017B7D67243F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F48017B7D67243F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F48017B7D67243F_METHOD_3_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_3_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5F48017B7D67243F_METHOD_3_8608350DFEDEE4FD_OFFSET))(this, a1);
	}
};
