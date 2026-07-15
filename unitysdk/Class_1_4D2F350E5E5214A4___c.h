#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1039;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4D2F350E5E5214A4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17541EF0)
#define CLASS_1_4D2F350E5E5214A4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17541F20)
#define CLASS_1_4D2F350E5E5214A4___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET UNITYSDK_OFFSET(0x17541F30)
#define CLASS_1_4D2F350E5E5214A4___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET UNITYSDK_OFFSET(0x17542030)

inline static constexpr unsigned int Class_1_4D2F350E5E5214A4___c_TypeDefinitionIndex = 68345;

class Class_1_4D2F350E5E5214A4___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_1039*, ::Class_0_16E4307DCC419505_1039*>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_1039*, ::Class_0_16E4307DCC419505_1039*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D2F350E5E5214A4___c_TypeDefinitionIndex)->GetStaticField(0x5D8F0);
	}
	static ::Class_1_4D2F350E5E5214A4___c** StaticGet___9()
	{
		return (::Class_1_4D2F350E5E5214A4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D2F350E5E5214A4___c_TypeDefinitionIndex)->GetStaticField(0x5D8F8);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_1039*, ::RPG::GameCore::CrosshairType>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_1039*, ::RPG::GameCore::CrosshairType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D2F350E5E5214A4___c_TypeDefinitionIndex)->GetStaticField(0x5D900);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CrosshairType _GetCrosshairConfigs_b__0_0(::Class_0_16E4307DCC419505_1039* a1)
	{
		return ((::RPG::GameCore::CrosshairType(*)(::PVOID, ::Class_0_16E4307DCC419505_1039*))((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1039* _GetCrosshairConfigs_b__0_1(::Class_0_16E4307DCC419505_1039* a1)
	{
		return ((::Class_0_16E4307DCC419505_1039*(*)(::PVOID, ::Class_0_16E4307DCC419505_1039*))((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET))(this, a1);
	}
};
