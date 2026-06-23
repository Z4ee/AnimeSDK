#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_167;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F647B555B39FF57E___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x15412DC0)
#define CLASS_1_F647B555B39FF57E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15412D70)
#define CLASS_1_F647B555B39FF57E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15412DB0)

inline static constexpr unsigned int Class_1_F647B555B39FF57E___c_TypeDefinitionIndex = 9542;

class Class_1_F647B555B39FF57E___c : public ::System::Object
{
public:
	static ::Class_1_F647B555B39FF57E___c** StaticGet___9()
	{
		return (::Class_1_F647B555B39FF57E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F647B555B39FF57E___c_TypeDefinitionIndex)->GetStaticField(0x76B0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_167*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_167*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F647B555B39FF57E___c_TypeDefinitionIndex)->GetStaticField(0x76B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F647B555B39FF57E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F647B555B39FF57E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_167* a1, ::Class_2_208CC9941471731A_167* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_167*, ::Class_2_208CC9941471731A_167*))((::PBYTE)hIl2Cpp + CLASS_1_F647B555B39FF57E___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
