#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_1366834A3B8E9831___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x119EB0B0)
#define CLASS_4_1366834A3B8E9831___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x119EB060)
#define CLASS_4_1366834A3B8E9831___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x119EB0A0)
#define CLASS_4_1366834A3B8E9831___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119EB010)
#define CLASS_4_1366834A3B8E9831___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119EB050)

inline static constexpr unsigned int Class_4_1366834A3B8E9831___c_TypeDefinitionIndex = 39970;

class Class_4_1366834A3B8E9831___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1366834A3B8E9831___c_TypeDefinitionIndex)->GetStaticField(0x3D450);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1366834A3B8E9831___c_TypeDefinitionIndex)->GetStaticField(0x3D458);
	}
	static ::Class_4_1366834A3B8E9831___c** StaticGet___9()
	{
		return (::Class_4_1366834A3B8E9831___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1366834A3B8E9831___c_TypeDefinitionIndex)->GetStaticField(0x3D460);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1366834A3B8E9831___c_TypeDefinitionIndex)->GetStaticField(0x3D468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_1366834A3B8E9831___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1366834A3B8E9831___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1366834A3B8E9831___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1366834A3B8E9831___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1366834A3B8E9831___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};
