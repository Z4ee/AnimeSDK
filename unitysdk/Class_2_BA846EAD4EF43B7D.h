#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AC327AA661D91B2.h"
#include "unitysdk/Struct_2_1480BFA419A4783B.h"

class Class_3_A17E631B7197DC03;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace MoleMole::Config { class HollowParticleScreenColorModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x10CB04F0)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_B91C57E164ECE2C2_OFFSET UNITYSDK_OFFSET(0x10CB0240)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_D00B33A6DEF5CAA8_OFFSET UNITYSDK_OFFSET(0x10CB03E0)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_D7917F24844E103A_OFFSET UNITYSDK_OFFSET(0x10CB0300)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_E1E7D995CAEC23CC_OFFSET UNITYSDK_OFFSET(0x10CB0580)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10CB0230)
#define CLASS_2_BA846EAD4EF43B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB04A0)

inline static constexpr unsigned int Class_2_BA846EAD4EF43B7D_TypeDefinitionIndex = 44778;

class Class_2_BA846EAD4EF43B7D : public ::Class_1_0AC327AA661D91B2
{
public:
	::Struct_2_1480BFA419A4783B Field_2_1; // 0x20
	::MoleMole::Config::HollowParticleScreenColorModuleConfig* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_0AC327AA661D91B2* Method_2_B91C57E164ECE2C2(::MoleMole::Config::HollowChessboardParticleModuleConfig* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_B91C57E164ECE2C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D7917F24844E103A(::Class_3_A17E631B7197DC03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A17E631B7197DC03*))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_D7917F24844E103A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D00B33A6DEF5CAA8(::Class_3_A17E631B7197DC03* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A17E631B7197DC03*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_D00B33A6DEF5CAA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_A17E631B7197DC03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A17E631B7197DC03*))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1E7D995CAEC23CC(::Class_3_A17E631B7197DC03* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A17E631B7197DC03*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_E1E7D995CAEC23CC_OFFSET))(this, a1, a2);
	}
};
