#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_691;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_4E16833008E4DAE7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x109B4B90)
#define CLASS_1_4E16833008E4DAE7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x109B4BC0)
#define CLASS_1_4E16833008E4DAE7___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0x109B4BD0)

inline static constexpr unsigned int Class_1_4E16833008E4DAE7___c_TypeDefinitionIndex = 54666;

class Class_1_4E16833008E4DAE7___c : public ::System::Object
{
public:
	static ::Class_1_4E16833008E4DAE7___c** StaticGet___9()
	{
		return (::Class_1_4E16833008E4DAE7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E16833008E4DAE7___c_TypeDefinitionIndex)->GetStaticField(0x414B0);
	}
	static ::System::Predicate_1<::Class_0_16E4307DCC419505_691*>** StaticGet___9__0_0()
	{
		return (::System::Predicate_1<::Class_0_16E4307DCC419505_691*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E16833008E4DAE7___c_TypeDefinitionIndex)->GetStaticField(0x414B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E16833008E4DAE7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E16833008E4DAE7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HandlePostProcess_b__0_0(::Class_0_16E4307DCC419505_691* action)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_691*))((::PBYTE)hIl2Cpp + CLASS_1_4E16833008E4DAE7___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, action);
	}
};
