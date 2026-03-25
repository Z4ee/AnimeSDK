#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_BossSettlement; }
namespace RPG::Client { class WolfBroGunPlayTarget_Boss; }

#define CLASS_3_F2FB5C1ABEBF8673_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10B7FA20)
#define CLASS_3_F2FB5C1ABEBF8673_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B7F9C0)
#define CLASS_3_F2FB5C1ABEBF8673_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10B7FA80)
#define CLASS_3_F2FB5C1ABEBF8673_METHOD_3_A2C808B2C5AA98B5_OFFSET UNITYSDK_OFFSET(0x10B7F740)
#define CLASS_3_F2FB5C1ABEBF8673_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B7F950)
#define CLASS_3_F2FB5C1ABEBF8673_METHOD_3_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x10B7F7F0)
#define CLASS_3_F2FB5C1ABEBF8673__CTOR_OFFSET UNITYSDK_OFFSET(0x10B7F9A0)

inline static constexpr unsigned int Class_3_F2FB5C1ABEBF8673_TypeDefinitionIndex = 56100;

class Class_3_F2FB5C1ABEBF8673 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_BossSettlement*>
{
public:
	::RPG::Client::WolfBroGunPlayTarget_Boss* Field_3_1; // 0x28
	::System::Single Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FB5C1ABEBF8673__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_A2C808B2C5AA98B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FB5C1ABEBF8673_METHOD_3_A2C808B2C5AA98B5_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FB5C1ABEBF8673_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F2FB5C1ABEBF8673_METHOD_3_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FB5C1ABEBF8673_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FB5C1ABEBF8673_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F2FB5C1ABEBF8673_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
