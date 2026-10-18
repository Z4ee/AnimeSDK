#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Flip; }

#define CLASS_3_9868F2E5CF411D32_METHOD_3_50896BDA13FD77D3_OFFSET UNITYSDK_OFFSET(0x15735560)
#define CLASS_3_9868F2E5CF411D32_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x15735440)
#define CLASS_3_9868F2E5CF411D32__CTOR_OFFSET UNITYSDK_OFFSET(0x157356E0)

inline static constexpr unsigned int Class_3_9868F2E5CF411D32_TypeDefinitionIndex = 68696;

class Class_3_9868F2E5CF411D32 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Flip*>
{
public:
	::System::Single PDLCENKDNGO; // 0x28
	::System::Int32 GAGEBMIOEGN; // 0x2C

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
