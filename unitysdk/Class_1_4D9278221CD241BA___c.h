#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_809;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4D9278221CD241BA___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x16EA0490)
#define CLASS_1_4D9278221CD241BA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EA0440)
#define CLASS_1_4D9278221CD241BA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA0480)

inline static constexpr unsigned int Class_1_4D9278221CD241BA___c_TypeDefinitionIndex = 17178;

class Class_1_4D9278221CD241BA___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_809*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_809*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D9278221CD241BA___c_TypeDefinitionIndex)->GetStaticField(0x8D30);
	}
	static ::Class_1_4D9278221CD241BA___c** StaticGet___9()
	{
		return (::Class_1_4D9278221CD241BA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D9278221CD241BA___c_TypeDefinitionIndex)->GetStaticField(0x8D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D9278221CD241BA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9278221CD241BA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_809* a1, ::Class_2_208CC9941471731A_809* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_809*, ::Class_2_208CC9941471731A_809*))((::PBYTE)hIl2Cpp + CLASS_1_4D9278221CD241BA___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
