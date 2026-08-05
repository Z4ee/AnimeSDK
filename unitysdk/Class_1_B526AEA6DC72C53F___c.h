#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_609;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_B526AEA6DC72C53F___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x17CBA510)
#define CLASS_1_B526AEA6DC72C53F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CBA4C0)
#define CLASS_1_B526AEA6DC72C53F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBA500)

inline static constexpr unsigned int Class_1_B526AEA6DC72C53F___c_TypeDefinitionIndex = 11972;

class Class_1_B526AEA6DC72C53F___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_609*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_609*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B526AEA6DC72C53F___c_TypeDefinitionIndex)->GetStaticField(0x7720);
	}
	static ::Class_1_B526AEA6DC72C53F___c** StaticGet___9()
	{
		return (::Class_1_B526AEA6DC72C53F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B526AEA6DC72C53F___c_TypeDefinitionIndex)->GetStaticField(0x7728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B526AEA6DC72C53F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B526AEA6DC72C53F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_609* a1, ::Class_2_208CC9941471731A_609* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_609*, ::Class_2_208CC9941471731A_609*))((::PBYTE)hIl2Cpp + CLASS_1_B526AEA6DC72C53F___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
