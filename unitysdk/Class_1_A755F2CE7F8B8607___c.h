#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_29;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A755F2CE7F8B8607___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x17408FB0)
#define CLASS_1_A755F2CE7F8B8607___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17408F60)
#define CLASS_1_A755F2CE7F8B8607___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17408FA0)

inline static constexpr unsigned int Class_1_A755F2CE7F8B8607___c_TypeDefinitionIndex = 9021;

class Class_1_A755F2CE7F8B8607___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_29*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A755F2CE7F8B8607___c_TypeDefinitionIndex)->GetStaticField(0x7800);
	}
	static ::Class_1_A755F2CE7F8B8607___c** StaticGet___9()
	{
		return (::Class_1_A755F2CE7F8B8607___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A755F2CE7F8B8607___c_TypeDefinitionIndex)->GetStaticField(0x7808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A755F2CE7F8B8607___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A755F2CE7F8B8607___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_29* a1, ::Class_2_208CC9941471731A_29* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_29*, ::Class_2_208CC9941471731A_29*))((::PBYTE)hIl2Cpp + CLASS_1_A755F2CE7F8B8607___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
