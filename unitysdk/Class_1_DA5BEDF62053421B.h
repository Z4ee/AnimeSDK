#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_1_D27BF54F25500E5F;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystemV1; }
namespace System { class Action; }

#define CLASS_1_DA5BEDF62053421B_METHOD_1_14EDC9421BD42937_OFFSET UNITYSDK_OFFSET(0xC157960)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_2BCCBFF50C5269AF_OFFSET UNITYSDK_OFFSET(0xC157850)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC157730)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_3E8B5E51DDF99D33_OFFSET UNITYSDK_OFFSET(0xC1578B0)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0xC157A50)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_66783CE1164CF60E_OFFSET UNITYSDK_OFFSET(0xC11E6F0)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_8EB301F084025F77_OFFSET UNITYSDK_OFFSET(0xC1577C0)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC1576B0)
#define CLASS_1_DA5BEDF62053421B__CTOR_OFFSET UNITYSDK_OFFSET(0xC157FB0)

inline static constexpr unsigned int Class_1_DA5BEDF62053421B_TypeDefinitionIndex = 69728;

class Class_1_DA5BEDF62053421B : public ::System::Object
{
public:
	::Class_1_D27BF54F25500E5F* HAMNGPKNJLI; // 0x10
	::EnviromentSystem::EnviromentProfile* JDIIAGNIJBA; // 0x18
	::EnviromentSystem::EnviromentProfile* HPOBPDGDONL; // 0x20
	::RPG::Client::EnvironmentSystemV1* OCFNGNEFLDI; // 0x28
	::System::Action* FEBMANBKLPP; // 0x30
	::RPG::GameCore::EnviromentControlPriority MNMMMFDIHOB; // 0x38
	::System::Boolean ALMEAKBOGKH; // 0x3C
	::System::Int32 FNGCCGFFMOH; // 0x40
	::System::Single JPDCALANOOA; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_66783CE1164CF60E(::RPG::Client::EnvironmentSystemV1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvironmentSystemV1*))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_66783CE1164CF60E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_8EB301F084025F77(::RPG::GameCore::EnviromentControlPriority a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_8EB301F084025F77_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2BCCBFF50C5269AF(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_2BCCBFF50C5269AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E8B5E51DDF99D33(::EnviromentSystem::EnviromentProfile* a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::Single, ::RPG::GameCore::EnviromentControlPriority, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_3E8B5E51DDF99D33_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_1_14EDC9421BD42937(::EnviromentSystem::EnviromentProfile* a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::Single, ::RPG::GameCore::EnviromentControlPriority, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_14EDC9421BD42937_OFFSET))(this, a1, a2, a3, a4);
	}
};
