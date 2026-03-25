#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_BossAvatar; }

#define CLASS_3_50176A515053E061_1_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAC5CA10)
#define CLASS_3_50176A515053E061_1_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAC5C8F0)
#define CLASS_3_50176A515053E061_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5C9F0)

inline static constexpr unsigned int Class_3_50176A515053E061_1_TypeDefinitionIndex = 56102;

class Class_3_50176A515053E061_1 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_BossAvatar*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_1_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_1_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
