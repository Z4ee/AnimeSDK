#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C57D8783DBBA3A62;
class Class_4_6D34433DADC9AA1E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_5EE305FC4741693C___C_METHOD_1_331A2272D8C0851A_OFFSET UNITYSDK_OFFSET(0x1D5AE1C0)
#define CLASS_3_5EE305FC4741693C___C_METHOD_1_C7C4399D2E9567C9_OFFSET UNITYSDK_OFFSET(0x1D5AE1D0)
#define CLASS_3_5EE305FC4741693C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE170)
#define CLASS_3_5EE305FC4741693C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE1B0)

inline static constexpr unsigned int Class_3_5EE305FC4741693C___c_TypeDefinitionIndex = 29070;

class Class_3_5EE305FC4741693C___c : public ::System::Object
{
public:
	static ::Class_3_5EE305FC4741693C___c** StaticGet___9()
	{
		return (::Class_3_5EE305FC4741693C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5EE305FC4741693C___c_TypeDefinitionIndex)->GetStaticField(0x23530);
	}
	static ::System::Action_1<::Class_2_C57D8783DBBA3A62*>** StaticGet___9__27_0()
	{
		return (::System::Action_1<::Class_2_C57D8783DBBA3A62*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5EE305FC4741693C___c_TypeDefinitionIndex)->GetStaticField(0x23538);
	}
	static ::System::Action_1<::Class_4_6D34433DADC9AA1E*>** StaticGet___9__42_0()
	{
		return (::System::Action_1<::Class_4_6D34433DADC9AA1E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5EE305FC4741693C___c_TypeDefinitionIndex)->GetStaticField(0x23540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5EE305FC4741693C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EE305FC4741693C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_331A2272D8C0851A(::Class_2_C57D8783DBBA3A62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C57D8783DBBA3A62*))((::PBYTE)hIl2Cpp + CLASS_3_5EE305FC4741693C___C_METHOD_1_331A2272D8C0851A_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7C4399D2E9567C9(::Class_4_6D34433DADC9AA1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_6D34433DADC9AA1E*))((::PBYTE)hIl2Cpp + CLASS_3_5EE305FC4741693C___C_METHOD_1_C7C4399D2E9567C9_OFFSET))(this, a1);
	}
};
