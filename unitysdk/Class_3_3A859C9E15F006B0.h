#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_MoveByTime; }

#define CLASS_3_3A859C9E15F006B0_METHOD_3_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x1551BDB0)
#define CLASS_3_3A859C9E15F006B0_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1551BD30)
#define CLASS_3_3A859C9E15F006B0_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1551BA20)
#define CLASS_3_3A859C9E15F006B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1551C190)

inline static constexpr unsigned int Class_3_3A859C9E15F006B0_TypeDefinitionIndex = 68661;

class Class_3_3A859C9E15F006B0 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_MoveByTime*>
{
public:
	::System::Single HPCHCEFOKJB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A859C9E15F006B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A859C9E15F006B0_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A859C9E15F006B0_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3A859C9E15F006B0_METHOD_3_1C409C2CC83887DC_OFFSET))(this, a1);
	}
};
