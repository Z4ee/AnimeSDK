#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_BossSettlement; }
namespace RPG::Client { class WolfBroGunPlayTarget_Boss; }

#define CLASS_3_11A0DA36548374BC_METHOD_3_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x15384BA0)
#define CLASS_3_11A0DA36548374BC_METHOD_3_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x15384AE0)
#define CLASS_3_11A0DA36548374BC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15384C80)
#define CLASS_3_11A0DA36548374BC__CTOR_OFFSET UNITYSDK_OFFSET(0x15384CD0)

inline static constexpr unsigned int Class_3_11A0DA36548374BC_TypeDefinitionIndex = 68668;

class Class_3_11A0DA36548374BC : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_BossSettlement*>
{
public:
	::RPG::Client::WolfBroGunPlayTarget_Boss* MAGMDJLLGMI; // 0x28
	::System::Single HBANLBGKNKP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0DA36548374BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0DA36548374BC_METHOD_3_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0DA36548374BC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11A0DA36548374BC_METHOD_3_8FAD57395F26ACC4_OFFSET))(this, a1);
	}
};
