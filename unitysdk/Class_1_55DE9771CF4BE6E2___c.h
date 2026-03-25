#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_841;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_55DE9771CF4BE6E2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105F3180)
#define CLASS_1_55DE9771CF4BE6E2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105F31B0)
#define CLASS_1_55DE9771CF4BE6E2___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET UNITYSDK_OFFSET(0x105F31C0)
#define CLASS_1_55DE9771CF4BE6E2___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET UNITYSDK_OFFSET(0x105F3270)

inline static constexpr unsigned int Class_1_55DE9771CF4BE6E2___c_TypeDefinitionIndex = 58650;

class Class_1_55DE9771CF4BE6E2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_841*, ::Class_0_16E4307DCC419505_841*>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_841*, ::Class_0_16E4307DCC419505_841*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55DE9771CF4BE6E2___c_TypeDefinitionIndex)->GetStaticField(0x1FBC0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_841*, ::System::UInt32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_841*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55DE9771CF4BE6E2___c_TypeDefinitionIndex)->GetStaticField(0x1FBC8);
	}
	static ::Class_1_55DE9771CF4BE6E2___c** StaticGet___9()
	{
		return (::Class_1_55DE9771CF4BE6E2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55DE9771CF4BE6E2___c_TypeDefinitionIndex)->GetStaticField(0x1FBD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetCrosshairConfigs_b__0_0(::Class_0_16E4307DCC419505_841* config)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_841*))((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2___C__GETCROSSHAIRCONFIGS_B__0_0_OFFSET))(this, config);
	}

	::Class_0_16E4307DCC419505_841* _GetCrosshairConfigs_b__0_1(::Class_0_16E4307DCC419505_841* config)
	{
		return ((::Class_0_16E4307DCC419505_841*(*)(::PVOID, ::Class_0_16E4307DCC419505_841*))((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2___C__GETCROSSHAIRCONFIGS_B__0_1_OFFSET))(this, config);
	}
};
