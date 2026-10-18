#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_EC921BDB521EAFF6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA0A720)
#define CLASS_2_EC921BDB521EAFF6___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0A760)
#define CLASS_2_EC921BDB521EAFF6___C__DISPOSE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBA0A770)

inline static constexpr unsigned int Class_2_EC921BDB521EAFF6___c_TypeDefinitionIndex = 53447;

class Class_2_EC921BDB521EAFF6___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC921BDB521EAFF6___c_TypeDefinitionIndex)->GetStaticField(0x13700);
	}
	static ::Class_2_EC921BDB521EAFF6___c** StaticGet___9()
	{
		return (::Class_2_EC921BDB521EAFF6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC921BDB521EAFF6___c_TypeDefinitionIndex)->GetStaticField(0x13708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6___C__CTOR_OFFSET))(this);
	}

	::System::Void _Dispose_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC921BDB521EAFF6___C__DISPOSE_B__1_0_OFFSET))(this);
	}
};
