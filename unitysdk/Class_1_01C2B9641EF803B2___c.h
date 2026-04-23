#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/System/Object.h"

class Class_1_01C2B9641EF803B2;

#define CLASS_1_01C2B9641EF803B2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1979E060)
#define CLASS_1_01C2B9641EF803B2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1979E0A0)
#define CLASS_1_01C2B9641EF803B2___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1979E0B0)
#define CLASS_1_01C2B9641EF803B2___C___CCTOR_B__38_1_OFFSET UNITYSDK_OFFSET(0x1979E100)
#define CLASS_1_01C2B9641EF803B2___C___CCTOR_B__38_2_OFFSET UNITYSDK_OFFSET(0x1979E110)

inline static constexpr unsigned int Class_1_01C2B9641EF803B2___c_TypeDefinitionIndex = 25039;

class Class_1_01C2B9641EF803B2___c : public ::System::Object
{
public:
	static ::Class_1_01C2B9641EF803B2___c** StaticGet___9()
	{
		return (::Class_1_01C2B9641EF803B2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01C2B9641EF803B2___c_TypeDefinitionIndex)->GetStaticField(0x5F580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2___C__CTOR_OFFSET))(this);
	}

	::Class_1_01C2B9641EF803B2* __cctor_b__38_0()
	{
		return ((::Class_1_01C2B9641EF803B2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2___C___CCTOR_B__38_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__38_1(::Enum_3_ED790DAC948A65A9_9 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_9))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2___C___CCTOR_B__38_1_OFFSET))(this, x);
	}

	::Enum_3_ED790DAC948A65A9_9 __cctor_b__38_2(::System::Int32 x)
	{
		return ((::Enum_3_ED790DAC948A65A9_9(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2___C___CCTOR_B__38_2_OFFSET))(this, x);
	}
};
