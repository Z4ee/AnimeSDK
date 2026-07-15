#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Flip; }

#define CLASS_3_9868F2E5CF411D32_METHOD_3_50896BDA13FD77D3_OFFSET UNITYSDK_OFFSET(0x170266A0)
#define CLASS_3_9868F2E5CF411D32_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17026580)
#define CLASS_3_9868F2E5CF411D32__CTOR_OFFSET UNITYSDK_OFFSET(0x17026820)

inline static constexpr unsigned int Class_3_9868F2E5CF411D32_TypeDefinitionIndex = 65625;

class Class_3_9868F2E5CF411D32 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Flip*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_50896BDA13FD77D3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9868F2E5CF411D32_METHOD_3_50896BDA13FD77D3_OFFSET))(this, a1);
	}
};
