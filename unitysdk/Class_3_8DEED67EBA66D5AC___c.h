#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_29AF178C9CE3EC26;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_8DEED67EBA66D5AC___C_METHOD_1_7821D524FE61E19B_OFFSET UNITYSDK_OFFSET(0x14A9E4C0)
#define CLASS_3_8DEED67EBA66D5AC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A9E470)
#define CLASS_3_8DEED67EBA66D5AC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9E4B0)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC___c_TypeDefinitionIndex = 81726;

class Class_3_8DEED67EBA66D5AC___c : public ::System::Object
{
public:
	static ::Class_3_8DEED67EBA66D5AC___c** StaticGet___9()
	{
		return (::Class_3_8DEED67EBA66D5AC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8DEED67EBA66D5AC___c_TypeDefinitionIndex)->GetStaticField(0x3BA90);
	}
	static ::System::Action_1<::Class_3_29AF178C9CE3EC26*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_29AF178C9CE3EC26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8DEED67EBA66D5AC___c_TypeDefinitionIndex)->GetStaticField(0x3BA98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7821D524FE61E19B(::Class_3_29AF178C9CE3EC26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_29AF178C9CE3EC26*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC___C_METHOD_1_7821D524FE61E19B_OFFSET))(this, a1);
	}
};
