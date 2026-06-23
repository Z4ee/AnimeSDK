#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDCD1259222B5A4A.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_0_16E4307DCC419505_546;
class Class_1_F0DD91CF91C3B169;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System { class Random; }

#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_32D5C78451849AD8_OFFSET UNITYSDK_OFFSET(0x1BB20410)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1BB1FE00)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_546A9C793D154C35_OFFSET UNITYSDK_OFFSET(0x1BB1FC40)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1BB1FF80)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1BB20570)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_C6452F701014F617_OFFSET UNITYSDK_OFFSET(0x1BB203C0)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BB1FF40)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_E57D6F9393F28D86_OFFSET UNITYSDK_OFFSET(0x1BB204D0)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1BB20180)
#define CLASS_2_80FD8D6DCEB53EC0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB1FDE0)
#define CLASS_2_80FD8D6DCEB53EC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1FD70)

inline static constexpr unsigned int Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex = 73464;

class Class_2_80FD8D6DCEB53EC0 : public ::Class_1_BDCD1259222B5A4A
{
public:
	static ::System::Random** StaticGet_Field_2_8()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0x43950);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0x10560);
	}
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0x10564);
	}
	static ::MoleMole::SuperDebug_LogModule* StaticGet_Field_2_7()
	{
		return (::MoleMole::SuperDebug_LogModule*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0x10568);
	}
	::Class_1_F0DD91CF91C3B169* Field_2_0; // 0x28
	::MoleMole::Battle::BulletHoleConfigObject* Field_2_1; // 0x30
	::MoleMole::Battle::Entity* Field_2_4; // 0x38
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_3; // 0x40
	::MoleMole::Config::DamageDecalData Field_2_2; // 0x48
	::System::UInt32 Field_2_9; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0__CCTOR_OFFSET))();
	}

	::System::Void Method_2_546A9C793D154C35(::Class_0_16E4307DCC419505_546* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_546A9C793D154C35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_C6452F701014F617(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_C6452F701014F617_OFFSET))(this, a1);
	}

	::System::Void Method_2_32D5C78451849AD8(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_32D5C78451849AD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E57D6F9393F28D86(::Class_0_16E4307DCC419505_546* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_546*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_E57D6F9393F28D86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
