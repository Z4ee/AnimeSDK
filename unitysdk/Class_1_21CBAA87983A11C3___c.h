#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_842;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_21CBAA87983A11C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1062DC60)
#define CLASS_1_21CBAA87983A11C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1062DC90)
#define CLASS_1_21CBAA87983A11C3___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1062DCA0)

inline static constexpr unsigned int Class_1_21CBAA87983A11C3___c_TypeDefinitionIndex = 62787;

class Class_1_21CBAA87983A11C3___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_0_16E4307DCC419505_842*>** StaticGet___9__0_0()
	{
		return (::System::Predicate_1<::Class_0_16E4307DCC419505_842*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21CBAA87983A11C3___c_TypeDefinitionIndex)->GetStaticField(0xFB40);
	}
	static ::Class_1_21CBAA87983A11C3___c** StaticGet___9()
	{
		return (::Class_1_21CBAA87983A11C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21CBAA87983A11C3___c_TypeDefinitionIndex)->GetStaticField(0xFB48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21CBAA87983A11C3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21CBAA87983A11C3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HandlePostProcess_b__0_0(::Class_0_16E4307DCC419505_842* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_842*))((::PBYTE)hIl2Cpp + CLASS_1_21CBAA87983A11C3___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, a1);
	}
};
