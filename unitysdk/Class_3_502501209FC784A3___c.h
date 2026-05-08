#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_2.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_502501209FC784A3___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x17AB1DB0)
#define CLASS_3_502501209FC784A3___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x17AB1DC0)
#define CLASS_3_502501209FC784A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AB1D60)
#define CLASS_3_502501209FC784A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB1DA0)

inline static constexpr unsigned int Class_3_502501209FC784A3___c_TypeDefinitionIndex = 24657;

class Class_3_502501209FC784A3___c : public ::System::Object
{
public:
	static ::Class_3_502501209FC784A3___c** StaticGet___9()
	{
		return (::Class_3_502501209FC784A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_502501209FC784A3___c_TypeDefinitionIndex)->GetStaticField(0xB4C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_502501209FC784A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_502501209FC784A3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_ED790DAC948A65A9_2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_2))((::PBYTE)hIl2Cpp + CLASS_3_502501209FC784A3___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_2 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_502501209FC784A3___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
