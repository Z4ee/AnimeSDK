#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_CD7DA8BEF4849AA6___C_METHOD_1_C182346378132F07_OFFSET UNITYSDK_OFFSET(0x1B9C2FC0)
#define CLASS_1_CD7DA8BEF4849AA6___C_METHOD_1_DB05DAD7BBA6CBAC_OFFSET UNITYSDK_OFFSET(0x1B9C3000)
#define CLASS_1_CD7DA8BEF4849AA6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9C2F70)
#define CLASS_1_CD7DA8BEF4849AA6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C2FB0)

inline static constexpr unsigned int Class_1_CD7DA8BEF4849AA6___c_TypeDefinitionIndex = 50453;

class Class_1_CD7DA8BEF4849AA6___c : public ::System::Object
{
public:
	static ::Class_1_CD7DA8BEF4849AA6___c** StaticGet___9()
	{
		return (::Class_1_CD7DA8BEF4849AA6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD7DA8BEF4849AA6___c_TypeDefinitionIndex)->GetStaticField(0x50490);
	}
	static ::System::Action_2<::Class_3_F33F9DC5F4112336*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_F33F9DC5F4112336*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD7DA8BEF4849AA6___c_TypeDefinitionIndex)->GetStaticField(0x50498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD7DA8BEF4849AA6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD7DA8BEF4849AA6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C182346378132F07(::Class_3_F33F9DC5F4112336* a1, ::Class_3_F33F9DC5F4112336* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_1_CD7DA8BEF4849AA6___C_METHOD_1_C182346378132F07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DB05DAD7BBA6CBAC(::Class_3_F33F9DC5F4112336* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_1_CD7DA8BEF4849AA6___C_METHOD_1_DB05DAD7BBA6CBAC_OFFSET))(this, a1, a2);
	}
};
