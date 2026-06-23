#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AC327AA661D91B2.h"
#include "unitysdk/Struct_2_1480BFA419A4783B.h"

class Class_3_7E6A0C4EA6BF05CC;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace MoleMole::Config { class HollowParticleScreenColorModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x16C20530)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_B91C57E164ECE2C2_OFFSET UNITYSDK_OFFSET(0x16C201E0)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_D00B33A6DEF5CAA8_OFFSET UNITYSDK_OFFSET(0x16C20380)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_D7917F24844E103A_OFFSET UNITYSDK_OFFSET(0x16C202A0)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_E1E7D995CAEC23CC_OFFSET UNITYSDK_OFFSET(0x16C20490)
#define CLASS_2_BA846EAD4EF43B7D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16C201D0)
#define CLASS_2_BA846EAD4EF43B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x16C20440)

inline static constexpr unsigned int Class_2_BA846EAD4EF43B7D_TypeDefinitionIndex = 83239;

class Class_2_BA846EAD4EF43B7D : public ::Class_1_0AC327AA661D91B2
{
public:
	::MoleMole::Config::HollowParticleScreenColorModuleConfig* Field_2_0; // 0x20
	::Struct_2_1480BFA419A4783B Field_2_1; // 0x28

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

	::System::Void Method_2_D7917F24844E103A(::Class_3_7E6A0C4EA6BF05CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6A0C4EA6BF05CC*))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_D7917F24844E103A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D00B33A6DEF5CAA8(::Class_3_7E6A0C4EA6BF05CC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6A0C4EA6BF05CC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_D00B33A6DEF5CAA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E1E7D995CAEC23CC(::Class_3_7E6A0C4EA6BF05CC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6A0C4EA6BF05CC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_E1E7D995CAEC23CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_7E6A0C4EA6BF05CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6A0C4EA6BF05CC*))((::PBYTE)hIl2Cpp + CLASS_2_BA846EAD4EF43B7D_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}
};
