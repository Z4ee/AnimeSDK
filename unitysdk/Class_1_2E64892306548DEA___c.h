#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_15.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA;

#define CLASS_1_2E64892306548DEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E657FA0)
#define CLASS_1_2E64892306548DEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E657FE0)
#define CLASS_1_2E64892306548DEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E657FF0)
#define CLASS_1_2E64892306548DEA___C___CCTOR_B__38_1_OFFSET UNITYSDK_OFFSET(0x1E658040)
#define CLASS_1_2E64892306548DEA___C___CCTOR_B__38_2_OFFSET UNITYSDK_OFFSET(0x1E658050)

inline static constexpr unsigned int Class_1_2E64892306548DEA___c_TypeDefinitionIndex = 26377;

class Class_1_2E64892306548DEA___c : public ::System::Object
{
public:
	static ::Class_1_2E64892306548DEA___c** StaticGet___9()
	{
		return (::Class_1_2E64892306548DEA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E64892306548DEA___c_TypeDefinitionIndex)->GetStaticField(0x4EA90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C__CTOR_OFFSET))(this);
	}

	::Class_1_2E64892306548DEA* __cctor_b__38_0()
	{
		return ((::Class_1_2E64892306548DEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C___CCTOR_B__38_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__38_1(::Enum_3_ED790DAC948A65A9_15 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_15))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C___CCTOR_B__38_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_15 __cctor_b__38_2(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_15(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E64892306548DEA___C___CCTOR_B__38_2_OFFSET))(this, a1);
	}
};
