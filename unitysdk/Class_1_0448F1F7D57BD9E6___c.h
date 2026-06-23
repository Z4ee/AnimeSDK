#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_357;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0448F1F7D57BD9E6___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x146DAA50)
#define CLASS_1_0448F1F7D57BD9E6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146DAA00)
#define CLASS_1_0448F1F7D57BD9E6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146DAA40)

inline static constexpr unsigned int Class_1_0448F1F7D57BD9E6___c_TypeDefinitionIndex = 10458;

class Class_1_0448F1F7D57BD9E6___c : public ::System::Object
{
public:
	static ::Class_1_0448F1F7D57BD9E6___c** StaticGet___9()
	{
		return (::Class_1_0448F1F7D57BD9E6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0448F1F7D57BD9E6___c_TypeDefinitionIndex)->GetStaticField(0x77E0);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_357*, ::System::Int32>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_357*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0448F1F7D57BD9E6___c_TypeDefinitionIndex)->GetStaticField(0x77E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0448F1F7D57BD9E6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0448F1F7D57BD9E6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_357* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_357*))((::PBYTE)hIl2Cpp + CLASS_1_0448F1F7D57BD9E6___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};
