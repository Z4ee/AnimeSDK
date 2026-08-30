#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;

#define CLASS_1_66B5F052D7433A26___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19131A50)
#define CLASS_1_66B5F052D7433A26___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19131A80)
#define CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x19131A90)
#define CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x19131D10)

inline static constexpr unsigned int Class_1_66B5F052D7433A26___c_TypeDefinitionIndex = 50141;

class Class_1_66B5F052D7433A26___c : public ::System::Object
{
public:
	static ::Class_1_66B5F052D7433A26___c** StaticGet___9()
	{
		return (::Class_1_66B5F052D7433A26___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66B5F052D7433A26___c_TypeDefinitionIndex)->GetStaticField(0x17E80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__2_0(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_0_OFFSET))(this, a1);
	}

	::System::Void __cctor_b__2_1(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_1_OFFSET))(this, a1);
	}
};
