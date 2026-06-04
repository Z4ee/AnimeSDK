#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_997;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C6B9FD81411CB247___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1390D390)
#define CLASS_1_C6B9FD81411CB247___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1390D3C0)
#define CLASS_1_C6B9FD81411CB247___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1390D3D0)
#define CLASS_1_C6B9FD81411CB247___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET UNITYSDK_OFFSET(0x1390D480)

inline static constexpr unsigned int Class_1_C6B9FD81411CB247___c_TypeDefinitionIndex = 66903;

class Class_1_C6B9FD81411CB247___c : public ::System::Object
{
public:
	static ::Class_1_C6B9FD81411CB247___c** StaticGet___9()
	{
		return (::Class_1_C6B9FD81411CB247___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B9FD81411CB247___c_TypeDefinitionIndex)->GetStaticField(0x64730);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_997*, ::Class_0_16E4307DCC419505_997*>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_997*, ::Class_0_16E4307DCC419505_997*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B9FD81411CB247___c_TypeDefinitionIndex)->GetStaticField(0x64738);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_997*, ::RPG::GameCore::CrosshairType>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_997*, ::RPG::GameCore::CrosshairType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B9FD81411CB247___c_TypeDefinitionIndex)->GetStaticField(0x64740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CrosshairType _GetCrosshairConfigs_b__0_0(::Class_0_16E4307DCC419505_997* a1)
	{
		return ((::RPG::GameCore::CrosshairType(*)(::PVOID, ::Class_0_16E4307DCC419505_997*))((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_997* _GetCrosshairConfigs_b__0_1(::Class_0_16E4307DCC419505_997* a1)
	{
		return ((::Class_0_16E4307DCC419505_997*(*)(::PVOID, ::Class_0_16E4307DCC419505_997*))((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET))(this, a1);
	}
};
