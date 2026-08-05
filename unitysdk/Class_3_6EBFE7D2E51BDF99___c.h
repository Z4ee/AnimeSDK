#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B04DB8B805F5DADF;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_6EBFE7D2E51BDF99___C_METHOD_1_D25406433BDF03C7_OFFSET UNITYSDK_OFFSET(0x140B3520)
#define CLASS_3_6EBFE7D2E51BDF99___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140B34D0)
#define CLASS_3_6EBFE7D2E51BDF99___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140B3510)

inline static constexpr unsigned int Class_3_6EBFE7D2E51BDF99___c_TypeDefinitionIndex = 66520;

class Class_3_6EBFE7D2E51BDF99___c : public ::System::Object
{
public:
	static ::Class_3_6EBFE7D2E51BDF99___c** StaticGet___9()
	{
		return (::Class_3_6EBFE7D2E51BDF99___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6EBFE7D2E51BDF99___c_TypeDefinitionIndex)->GetStaticField(0x467B0);
	}
	static ::System::Action_2<::Class_3_B04DB8B805F5DADF*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_B04DB8B805F5DADF*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6EBFE7D2E51BDF99___c_TypeDefinitionIndex)->GetStaticField(0x467B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6EBFE7D2E51BDF99___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6EBFE7D2E51BDF99___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D25406433BDF03C7(::Class_3_B04DB8B805F5DADF* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B04DB8B805F5DADF*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_6EBFE7D2E51BDF99___C_METHOD_1_D25406433BDF03C7_OFFSET))(this, a1, a2);
	}
};
