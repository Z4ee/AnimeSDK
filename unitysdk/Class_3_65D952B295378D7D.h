#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_BossSettlement; }
namespace RPG::Client { class WolfBroGunPlayTarget_Boss; }

#define CLASS_3_65D952B295378D7D_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13690680)
#define CLASS_3_65D952B295378D7D_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13690620)
#define CLASS_3_65D952B295378D7D_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x136905C0)
#define CLASS_3_65D952B295378D7D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13690550)
#define CLASS_3_65D952B295378D7D_METHOD_3_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x136903F0)
#define CLASS_3_65D952B295378D7D_METHOD_3_F8ED142F54C0DCEC_OFFSET UNITYSDK_OFFSET(0x13690330)
#define CLASS_3_65D952B295378D7D__CTOR_OFFSET UNITYSDK_OFFSET(0x136905A0)

inline static constexpr unsigned int Class_3_65D952B295378D7D_TypeDefinitionIndex = 64260;

class Class_3_65D952B295378D7D : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_BossSettlement*>
{
public:
	::RPG::Client::WolfBroGunPlayTarget_Boss* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D952B295378D7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_F8ED142F54C0DCEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D952B295378D7D_METHOD_3_F8ED142F54C0DCEC_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D952B295378D7D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_65D952B295378D7D_METHOD_3_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D952B295378D7D_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D952B295378D7D_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_65D952B295378D7D_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
