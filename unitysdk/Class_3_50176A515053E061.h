#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Die; }

#define CLASS_3_50176A515053E061_METHOD_3_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x12849BB0)
#define CLASS_3_50176A515053E061__CTOR_OFFSET UNITYSDK_OFFSET(0x12849D10)

inline static constexpr unsigned int Class_3_50176A515053E061_TypeDefinitionIndex = 68663;

class Class_3_50176A515053E061 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Die*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_METHOD_3_E693A0026D178D8E_OFFSET))(this);
	}
};
