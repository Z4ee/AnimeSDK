#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_PlayAnimState; }

#define CLASS_3_D35C2E0E391EF224_METHOD_3_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xDFBA6D0)
#define CLASS_3_D35C2E0E391EF224_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xDFBA550)
#define CLASS_3_D35C2E0E391EF224_METHOD_3_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0xDFBA500)
#define CLASS_3_D35C2E0E391EF224__CTOR_OFFSET UNITYSDK_OFFSET(0xDFBA7D0)

inline static constexpr unsigned int Class_3_D35C2E0E391EF224_TypeDefinitionIndex = 68703;

class Class_3_D35C2E0E391EF224 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_PlayAnimState*>
{
public:
	::System::Int32 GMGIJGMCKGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D35C2E0E391EF224__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D35C2E0E391EF224_METHOD_3_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_3_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D35C2E0E391EF224_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_3_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D35C2E0E391EF224_METHOD_3_25CD86BF8626C8D9_OFFSET))(this, a1);
	}
};
