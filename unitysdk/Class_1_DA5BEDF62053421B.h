#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_1_5DF5F62C68EF718F;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystemV1; }
namespace System { class Action; }

#define CLASS_1_DA5BEDF62053421B_METHOD_1_14EDC9421BD42937_OFFSET UNITYSDK_OFFSET(0xC004E00)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xC004BA0)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_23E912A2F3DE372B_OFFSET UNITYSDK_OFFSET(0xC004A00)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_2BCCBFF50C5269AF_OFFSET UNITYSDK_OFFSET(0xC004CF0)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_3E8B5E51DDF99D33_OFFSET UNITYSDK_OFFSET(0xC004D50)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0xC004EE0)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_8EB301F084025F77_OFFSET UNITYSDK_OFFSET(0xC004C60)
#define CLASS_1_DA5BEDF62053421B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC004B20)
#define CLASS_1_DA5BEDF62053421B__CTOR_OFFSET UNITYSDK_OFFSET(0xC005380)

inline static constexpr unsigned int Class_1_DA5BEDF62053421B_TypeDefinitionIndex = 69763;

class Class_1_DA5BEDF62053421B : public ::System::Object
{
public:
	::System::Action* FEBMANBKLPP; // 0x10
	::EnviromentSystem::EnviromentProfile* HPOBPDGDONL; // 0x18
	::RPG::Client::EnvironmentSystemV1* OCFNGNEFLDI; // 0x20
	::EnviromentSystem::EnviromentProfile* JDIIAGNIJBA; // 0x28
	::Class_1_5DF5F62C68EF718F* HAMNGPKNJLI; // 0x30
	::System::Int32 FNGCCGFFMOH; // 0x38
	::RPG::GameCore::EnviromentControlPriority MNMMMFDIHOB; // 0x3C
	::System::Boolean ALMEAKBOGKH; // 0x40
	::System::Single JPDCALANOOA; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_23E912A2F3DE372B(::RPG::Client::EnvironmentSystemV1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvironmentSystemV1*))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_23E912A2F3DE372B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5BEDF62053421B_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
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
