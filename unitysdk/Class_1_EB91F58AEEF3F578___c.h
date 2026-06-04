#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/System/Object.h"

class Class_1_EB91F58AEEF3F578;

#define CLASS_1_EB91F58AEEF3F578___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A87C5B0)
#define CLASS_1_EB91F58AEEF3F578___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87C5F0)
#define CLASS_1_EB91F58AEEF3F578___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A87C600)
#define CLASS_1_EB91F58AEEF3F578___C___CCTOR_B__38_1_OFFSET UNITYSDK_OFFSET(0x1A87C650)
#define CLASS_1_EB91F58AEEF3F578___C___CCTOR_B__38_2_OFFSET UNITYSDK_OFFSET(0x1A87C660)

inline static constexpr unsigned int Class_1_EB91F58AEEF3F578___c_TypeDefinitionIndex = 24900;

class Class_1_EB91F58AEEF3F578___c : public ::System::Object
{
public:
	static ::Class_1_EB91F58AEEF3F578___c** StaticGet___9()
	{
		return (::Class_1_EB91F58AEEF3F578___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB91F58AEEF3F578___c_TypeDefinitionIndex)->GetStaticField(0x55730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578___C__CTOR_OFFSET))(this);
	}

	::Class_1_EB91F58AEEF3F578* __cctor_b__38_0()
	{
		return ((::Class_1_EB91F58AEEF3F578*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578___C___CCTOR_B__38_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__38_1(::Enum_3_ED790DAC948A65A9_9 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_9))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578___C___CCTOR_B__38_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_9 __cctor_b__38_2(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_9(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EB91F58AEEF3F578___C___CCTOR_B__38_2_OFFSET))(this, a1);
	}
};
