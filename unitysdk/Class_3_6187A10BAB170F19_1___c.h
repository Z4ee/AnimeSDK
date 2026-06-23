#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_14.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_6187A10BAB170F19_1___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x19D3F1C0)
#define CLASS_3_6187A10BAB170F19_1___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x19D3F1D0)
#define CLASS_3_6187A10BAB170F19_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D3F170)
#define CLASS_3_6187A10BAB170F19_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D3F1B0)

inline static constexpr unsigned int Class_3_6187A10BAB170F19_1___c_TypeDefinitionIndex = 25264;

class Class_3_6187A10BAB170F19_1___c : public ::System::Object
{
public:
	static ::Class_3_6187A10BAB170F19_1___c** StaticGet___9()
	{
		return (::Class_3_6187A10BAB170F19_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6187A10BAB170F19_1___c_TypeDefinitionIndex)->GetStaticField(0xF3D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_ED790DAC948A65A9_14 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_14))((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19_1___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_14 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_14(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6187A10BAB170F19_1___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
