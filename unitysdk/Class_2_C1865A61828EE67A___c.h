#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_276;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C1865A61828EE67A___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x13FB3BA0)
#define CLASS_2_C1865A61828EE67A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FB3B50)
#define CLASS_2_C1865A61828EE67A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13FB3B90)

inline static constexpr unsigned int Class_2_C1865A61828EE67A___c_TypeDefinitionIndex = 51543;

class Class_2_C1865A61828EE67A___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_276*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_276*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1865A61828EE67A___c_TypeDefinitionIndex)->GetStaticField(0x4D2A0);
	}
	static ::Class_2_C1865A61828EE67A___c** StaticGet___9()
	{
		return (::Class_2_C1865A61828EE67A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1865A61828EE67A___c_TypeDefinitionIndex)->GetStaticField(0x4D2A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_276* a1, ::Class_2_208CC9941471731A_276* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_276*, ::Class_2_208CC9941471731A_276*))((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
