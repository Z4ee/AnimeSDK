#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_15.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA_1;

#define CLASS_1_2E64892306548DEA_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E876930)
#define CLASS_1_2E64892306548DEA_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E876970)
#define CLASS_1_2E64892306548DEA_1___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E876980)
#define CLASS_1_2E64892306548DEA_1___C___CCTOR_B__38_1_OFFSET UNITYSDK_OFFSET(0x1E8769D0)
#define CLASS_1_2E64892306548DEA_1___C___CCTOR_B__38_2_OFFSET UNITYSDK_OFFSET(0x1E8769E0)

inline static constexpr unsigned int Class_1_2E64892306548DEA_1___c_TypeDefinitionIndex = 26379;

class Class_1_2E64892306548DEA_1___c : public ::System::Object
{
public:
	static ::Class_1_2E64892306548DEA_1___c** StaticGet___9()
	{
		return (::Class_1_2E64892306548DEA_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E64892306548DEA_1___c_TypeDefinitionIndex)->GetStaticField(0x20060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_1___C__CTOR_OFFSET))(this);
	}

	::Class_1_2E64892306548DEA_1* __cctor_b__38_0()
	{
		return ((::Class_1_2E64892306548DEA_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_1___C___CCTOR_B__38_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__38_1(::Enum_3_ED790DAC948A65A9_15 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_15))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_1___C___CCTOR_B__38_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_15 __cctor_b__38_2(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_15(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA_1___C___CCTOR_B__38_2_OFFSET))(this, a1);
	}
};
