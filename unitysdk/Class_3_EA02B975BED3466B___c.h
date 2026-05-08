#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_EA02B975BED3466B___C_METHOD_1_E22A2F687105B3E6_OFFSET UNITYSDK_OFFSET(0x113C3580)
#define CLASS_3_EA02B975BED3466B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113C3530)
#define CLASS_3_EA02B975BED3466B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3570)

inline static constexpr unsigned int Class_3_EA02B975BED3466B___c_TypeDefinitionIndex = 47803;

class Class_3_EA02B975BED3466B___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__115_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EA02B975BED3466B___c_TypeDefinitionIndex)->GetStaticField(0x30EF0);
	}
	static ::Class_3_EA02B975BED3466B___c** StaticGet___9()
	{
		return (::Class_3_EA02B975BED3466B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EA02B975BED3466B___c_TypeDefinitionIndex)->GetStaticField(0x30EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E22A2F687105B3E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B___C_METHOD_1_E22A2F687105B3E6_OFFSET))(this, a1);
	}
};
