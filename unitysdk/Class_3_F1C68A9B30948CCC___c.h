#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_23.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_F1C68A9B30948CCC___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1D5EEAD0)
#define CLASS_3_F1C68A9B30948CCC___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1D5EEAE0)
#define CLASS_3_F1C68A9B30948CCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5EEA80)
#define CLASS_3_F1C68A9B30948CCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EEAC0)

inline static constexpr unsigned int Class_3_F1C68A9B30948CCC___c_TypeDefinitionIndex = 24516;

class Class_3_F1C68A9B30948CCC___c : public ::System::Object
{
public:
	static ::Class_3_F1C68A9B30948CCC___c** StaticGet___9()
	{
		return (::Class_3_F1C68A9B30948CCC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F1C68A9B30948CCC___c_TypeDefinitionIndex)->GetStaticField(0xDE10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F1C68A9B30948CCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C68A9B30948CCC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_0A3761FE34514D6C_23 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_23))((::PBYTE)hIl2Cpp + CLASS_3_F1C68A9B30948CCC___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_23 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_23(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F1C68A9B30948CCC___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
