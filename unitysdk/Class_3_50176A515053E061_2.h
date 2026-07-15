#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_BossAvatar; }

#define CLASS_3_50176A515053E061_2_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x15F1E260)
#define CLASS_3_50176A515053E061_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1E310)

inline static constexpr unsigned int Class_3_50176A515053E061_2_TypeDefinitionIndex = 65633;

class Class_3_50176A515053E061_2 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_BossAvatar*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_2_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}
};
