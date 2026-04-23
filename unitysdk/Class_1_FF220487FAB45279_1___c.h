#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/System/Object.h"

class Class_1_FF220487FAB45279_1;

#define CLASS_1_FF220487FAB45279_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196176B0)
#define CLASS_1_FF220487FAB45279_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196176E0)
#define CLASS_1_FF220487FAB45279_1___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x196176F0)
#define CLASS_1_FF220487FAB45279_1___C___CCTOR_B__68_1_OFFSET UNITYSDK_OFFSET(0x19617720)
#define CLASS_1_FF220487FAB45279_1___C___CCTOR_B__68_2_OFFSET UNITYSDK_OFFSET(0x19617730)

inline static constexpr unsigned int Class_1_FF220487FAB45279_1___c_TypeDefinitionIndex = 24975;

class Class_1_FF220487FAB45279_1___c : public ::System::Object
{
public:
	static ::Class_1_FF220487FAB45279_1___c** StaticGet___9()
	{
		return (::Class_1_FF220487FAB45279_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF220487FAB45279_1___c_TypeDefinitionIndex)->GetStaticField(0x5D150);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_1___C__CTOR_OFFSET))(this);
	}

	::Class_1_FF220487FAB45279_1* __cctor_b__68_0()
	{
		return ((::Class_1_FF220487FAB45279_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_1___C___CCTOR_B__68_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__68_1(::Enum_3_ED790DAC948A65A9_9 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_9))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_1___C___CCTOR_B__68_1_OFFSET))(this, x);
	}

	::Enum_3_ED790DAC948A65A9_9 __cctor_b__68_2(::System::Int32 x)
	{
		return ((::Enum_3_ED790DAC948A65A9_9(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF220487FAB45279_1___C___CCTOR_B__68_2_OFFSET))(this, x);
	}
};
