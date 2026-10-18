#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;

#define CLASS_1_66B5F052D7433A26___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15944E60)
#define CLASS_1_66B5F052D7433A26___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15944E90)
#define CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x15944EA0)
#define CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x15945140)

inline static constexpr unsigned int Class_1_66B5F052D7433A26___c_TypeDefinitionIndex = 49769;

class Class_1_66B5F052D7433A26___c : public ::System::Object
{
public:
	static ::Class_1_66B5F052D7433A26___c** StaticGet___9()
	{
		return (::Class_1_66B5F052D7433A26___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66B5F052D7433A26___c_TypeDefinitionIndex)->GetStaticField(0x5EFE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__2_0(::Class_1_C6F4C4ABEDB8B5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_0_OFFSET))(this, a1);
	}

	::System::Void __cctor_b__2_1(::Class_1_C6F4C4ABEDB8B5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_66B5F052D7433A26___C___CCTOR_B__2_1_OFFSET))(this, a1);
	}
};
