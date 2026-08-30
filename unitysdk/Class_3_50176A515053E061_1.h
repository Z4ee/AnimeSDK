#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_TriggerEffect; }

#define CLASS_3_50176A515053E061_1_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0xCA8EE30)
#define CLASS_3_50176A515053E061_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8F3D0)

inline static constexpr unsigned int Class_3_50176A515053E061_1_TypeDefinitionIndex = 68664;

class Class_3_50176A515053E061_1 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_TriggerEffect*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_1_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
	}
};
