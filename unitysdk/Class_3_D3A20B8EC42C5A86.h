#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_BossSettlement; }
namespace RPG::Client { class WolfBroGunPlayTarget_Boss; }

#define CLASS_3_D3A20B8EC42C5A86_METHOD_3_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0x9573580)
#define CLASS_3_D3A20B8EC42C5A86_METHOD_3_A2C808B2C5AA98B5_OFFSET UNITYSDK_OFFSET(0x9573280)
#define CLASS_3_D3A20B8EC42C5A86_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9573500)
#define CLASS_3_D3A20B8EC42C5A86_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9573540)
#define CLASS_3_D3A20B8EC42C5A86_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9573490)
#define CLASS_3_D3A20B8EC42C5A86_METHOD_3_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x9573330)
#define CLASS_3_D3A20B8EC42C5A86__CTOR_OFFSET UNITYSDK_OFFSET(0x95734E0)

inline static constexpr unsigned int Class_3_D3A20B8EC42C5A86_TypeDefinitionIndex = 63343;

class Class_3_D3A20B8EC42C5A86 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_BossSettlement*>
{
public:
	::RPG::Client::WolfBroGunPlayTarget_Boss* Field_3_1; // 0x28
	::System::Single Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3A20B8EC42C5A86__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_A2C808B2C5AA98B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3A20B8EC42C5A86_METHOD_3_A2C808B2C5AA98B5_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3A20B8EC42C5A86_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D3A20B8EC42C5A86_METHOD_3_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3A20B8EC42C5A86_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3A20B8EC42C5A86_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_0414B7E68ABA5085(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D3A20B8EC42C5A86_METHOD_3_0414B7E68ABA5085_OFFSET))(this, P0);
	}
};
