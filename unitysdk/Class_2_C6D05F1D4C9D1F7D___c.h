#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_360;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C6D05F1D4C9D1F7D___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x18D97B90)
#define CLASS_2_C6D05F1D4C9D1F7D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D97B40)
#define CLASS_2_C6D05F1D4C9D1F7D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D97B80)

inline static constexpr unsigned int Class_2_C6D05F1D4C9D1F7D___c_TypeDefinitionIndex = 71400;

class Class_2_C6D05F1D4C9D1F7D___c : public ::System::Object
{
public:
	static ::Class_2_C6D05F1D4C9D1F7D___c** StaticGet___9()
	{
		return (::Class_2_C6D05F1D4C9D1F7D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C6D05F1D4C9D1F7D___c_TypeDefinitionIndex)->GetStaticField(0x35650);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_360*, ::System::Int32>** StaticGet___9__20_1()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_360*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C6D05F1D4C9D1F7D___c_TypeDefinitionIndex)->GetStaticField(0x35658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C6D05F1D4C9D1F7D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6D05F1D4C9D1F7D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_360* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_360*))((::PBYTE)hIl2Cpp + CLASS_2_C6D05F1D4C9D1F7D___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};
