#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9EA8D45226512D21;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A7466F029F48914E___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x15C10D90)
#define CLASS_1_A7466F029F48914E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C10D40)
#define CLASS_1_A7466F029F48914E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C10D80)

inline static constexpr unsigned int Class_1_A7466F029F48914E___c_TypeDefinitionIndex = 11473;

class Class_1_A7466F029F48914E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_9EA8D45226512D21*>** StaticGet___9__18_0()
	{
		return (::System::Comparison_1<::Class_2_9EA8D45226512D21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7466F029F48914E___c_TypeDefinitionIndex)->GetStaticField(0x8C50);
	}
	static ::Class_1_A7466F029F48914E___c** StaticGet___9()
	{
		return (::Class_1_A7466F029F48914E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7466F029F48914E___c_TypeDefinitionIndex)->GetStaticField(0x8C58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A7466F029F48914E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7466F029F48914E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_9EA8D45226512D21* a1, ::Class_2_9EA8D45226512D21* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9EA8D45226512D21*, ::Class_2_9EA8D45226512D21*))((::PBYTE)hIl2Cpp + CLASS_1_A7466F029F48914E___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
