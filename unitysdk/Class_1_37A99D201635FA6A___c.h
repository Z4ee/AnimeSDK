#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1132;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_37A99D201635FA6A___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x16091110)
#define CLASS_1_37A99D201635FA6A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160910C0)
#define CLASS_1_37A99D201635FA6A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16091100)

inline static constexpr unsigned int Class_1_37A99D201635FA6A___c_TypeDefinitionIndex = 16875;

class Class_1_37A99D201635FA6A___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_1132*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_1132*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37A99D201635FA6A___c_TypeDefinitionIndex)->GetStaticField(0x7A30);
	}
	static ::Class_1_37A99D201635FA6A___c** StaticGet___9()
	{
		return (::Class_1_37A99D201635FA6A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37A99D201635FA6A___c_TypeDefinitionIndex)->GetStaticField(0x7A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37A99D201635FA6A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37A99D201635FA6A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_1132* a1, ::Class_2_208CC9941471731A_1132* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1132*, ::Class_2_208CC9941471731A_1132*))((::PBYTE)hIl2Cpp + CLASS_1_37A99D201635FA6A___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
