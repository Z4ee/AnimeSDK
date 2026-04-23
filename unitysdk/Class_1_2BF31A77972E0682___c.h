#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_948;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2BF31A77972E0682___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B7B350)
#define CLASS_1_2BF31A77972E0682___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7B380)
#define CLASS_1_2BF31A77972E0682___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET UNITYSDK_OFFSET(0x11B7B390)
#define CLASS_1_2BF31A77972E0682___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET UNITYSDK_OFFSET(0x11B7B440)

inline static constexpr unsigned int Class_1_2BF31A77972E0682___c_TypeDefinitionIndex = 65970;

class Class_1_2BF31A77972E0682___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_948*, ::Class_0_16E4307DCC419505_948*>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_948*, ::Class_0_16E4307DCC419505_948*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BF31A77972E0682___c_TypeDefinitionIndex)->GetStaticField(0x265C0);
	}
	static ::Class_1_2BF31A77972E0682___c** StaticGet___9()
	{
		return (::Class_1_2BF31A77972E0682___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BF31A77972E0682___c_TypeDefinitionIndex)->GetStaticField(0x265C8);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_948*, ::RPG::GameCore::CrosshairType>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_948*, ::RPG::GameCore::CrosshairType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BF31A77972E0682___c_TypeDefinitionIndex)->GetStaticField(0x265D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CrosshairType _GetCrosshairConfigs_b__0_0(::Class_0_16E4307DCC419505_948* config)
	{
		return ((::RPG::GameCore::CrosshairType(*)(::PVOID, ::Class_0_16E4307DCC419505_948*))((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET))(this, config);
	}

	::Class_0_16E4307DCC419505_948* _GetCrosshairConfigs_b__0_1(::Class_0_16E4307DCC419505_948* config)
	{
		return ((::Class_0_16E4307DCC419505_948*(*)(::PVOID, ::Class_0_16E4307DCC419505_948*))((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET))(this, config);
	}
};
