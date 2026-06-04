#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2E90365D99FC7E6_6;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_C71DDDA66421C541___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6C59E0)
#define CLASS_3_C71DDDA66421C541___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C5A20)
#define CLASS_3_C71DDDA66421C541___C__ONUSETACTICSCARDPERFORMANCE_B__34_0_OFFSET UNITYSDK_OFFSET(0xA6C5A30)

inline static constexpr unsigned int Class_3_C71DDDA66421C541___c_TypeDefinitionIndex = 56436;

class Class_3_C71DDDA66421C541___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D2E90365D99FC7E6_6*, ::System::String*>** StaticGet___9__34_0()
	{
		return (::System::Func_2<::Class_1_D2E90365D99FC7E6_6*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C71DDDA66421C541___c_TypeDefinitionIndex)->GetStaticField(0x47850);
	}
	static ::Class_3_C71DDDA66421C541___c** StaticGet___9()
	{
		return (::Class_3_C71DDDA66421C541___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C71DDDA66421C541___c_TypeDefinitionIndex)->GetStaticField(0x47858);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C71DDDA66421C541___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C71DDDA66421C541___C__CTOR_OFFSET))(this);
	}

	::System::String* _OnUseTacticsCardPerformance_b__34_0(::Class_1_D2E90365D99FC7E6_6* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_D2E90365D99FC7E6_6*))((::PBYTE)hIl2Cpp + CLASS_3_C71DDDA66421C541___C__ONUSETACTICSCARDPERFORMANCE_B__34_0_OFFSET))(this, a1);
	}
};
