#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1239;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E2FC75F6F5C1FDDC___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x1DFB57B0)
#define CLASS_1_E2FC75F6F5C1FDDC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB5760)
#define CLASS_1_E2FC75F6F5C1FDDC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB57A0)

inline static constexpr unsigned int Class_1_E2FC75F6F5C1FDDC___c_TypeDefinitionIndex = 92132;

class Class_1_E2FC75F6F5C1FDDC___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_208CC9941471731A_1239*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_1239*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2FC75F6F5C1FDDC___c_TypeDefinitionIndex)->GetStaticField(0x51E90);
	}
	static ::Class_1_E2FC75F6F5C1FDDC___c** StaticGet___9()
	{
		return (::Class_1_E2FC75F6F5C1FDDC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2FC75F6F5C1FDDC___c_TypeDefinitionIndex)->GetStaticField(0x51E98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2FC75F6F5C1FDDC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FC75F6F5C1FDDC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_1239* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1239*))((::PBYTE)hIl2Cpp + CLASS_1_E2FC75F6F5C1FDDC___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};
