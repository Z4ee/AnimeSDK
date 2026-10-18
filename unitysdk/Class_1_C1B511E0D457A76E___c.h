#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_10;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C1B511E0D457A76E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A51610)
#define CLASS_1_C1B511E0D457A76E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A51650)
#define CLASS_1_C1B511E0D457A76E___C___ENSURETEAMEDITCONTROLLER_B__12_1_OFFSET UNITYSDK_OFFSET(0x13A51660)

inline static constexpr unsigned int Class_1_C1B511E0D457A76E___c_TypeDefinitionIndex = 60408;

class Class_1_C1B511E0D457A76E___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_45BB92167AED63A0_10*, ::System::Boolean>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::Class_1_45BB92167AED63A0_10*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1B511E0D457A76E___c_TypeDefinitionIndex)->GetStaticField(0x70090);
	}
	static ::Class_1_C1B511E0D457A76E___c** StaticGet___9()
	{
		return (::Class_1_C1B511E0D457A76E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1B511E0D457A76E___c_TypeDefinitionIndex)->GetStaticField(0x70098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1B511E0D457A76E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1B511E0D457A76E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __EnsureTeamEditController_b__12_1(::Class_1_45BB92167AED63A0_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_10*))((::PBYTE)hIl2Cpp + CLASS_1_C1B511E0D457A76E___C___ENSURETEAMEDITCONTROLLER_B__12_1_OFFSET))(this, a1);
	}
};
