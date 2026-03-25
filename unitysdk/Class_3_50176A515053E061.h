#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_TriggerEffect; }

#define CLASS_3_50176A515053E061_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x109C07D0)
#define CLASS_3_50176A515053E061_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x109C01E0)
#define CLASS_3_50176A515053E061__CTOR_OFFSET UNITYSDK_OFFSET(0x109C07B0)

inline static constexpr unsigned int Class_3_50176A515053E061_TypeDefinitionIndex = 56096;

class Class_3_50176A515053E061 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_TriggerEffect*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
