#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }

#define CLASS_1_BDCD1259222B5A4A_METHOD_1_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x14632300)
#define CLASS_1_BDCD1259222B5A4A_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x146322F0)
#define CLASS_1_BDCD1259222B5A4A_METHOD_1_E57D6F9393F28D86_OFFSET UNITYSDK_OFFSET(0x14632280)
#define CLASS_1_BDCD1259222B5A4A__CTOR_OFFSET UNITYSDK_OFFSET(0x146322E0)

inline static constexpr unsigned int Class_1_BDCD1259222B5A4A_TypeDefinitionIndex = 67822;

class Class_1_BDCD1259222B5A4A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_278* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_2; // 0x18
	::MoleMole::Config::HitWallCameraShakeConfig* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDCD1259222B5A4A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E57D6F9393F28D86(::Class_0_16E4307DCC419505_278* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_278*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BDCD1259222B5A4A_METHOD_1_E57D6F9393F28D86_OFFSET))(this, a1, a2);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDCD1259222B5A4A_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_1_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_BDCD1259222B5A4A_METHOD_1_5E852A75624F0507_OFFSET))(this, a1);
	}
};
