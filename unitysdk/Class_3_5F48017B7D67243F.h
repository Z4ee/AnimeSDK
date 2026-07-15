#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Fire; }

#define CLASS_3_5F48017B7D67243F_METHOD_3_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0x188CD870)
#define CLASS_3_5F48017B7D67243F_METHOD_3_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x188CD5F0)
#define CLASS_3_5F48017B7D67243F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188CD5B0)
#define CLASS_3_5F48017B7D67243F__CTOR_OFFSET UNITYSDK_OFFSET(0x188CDB50)

inline static constexpr unsigned int Class_3_5F48017B7D67243F_TypeDefinitionIndex = 65629;

class Class_3_5F48017B7D67243F : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Fire*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

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
