#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_532;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_49FD0F6EAEE79D37___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x18CE1A70)
#define CLASS_1_49FD0F6EAEE79D37___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CE1A20)
#define CLASS_1_49FD0F6EAEE79D37___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE1A60)

inline static constexpr unsigned int Class_1_49FD0F6EAEE79D37___c_TypeDefinitionIndex = 14027;

class Class_1_49FD0F6EAEE79D37___c : public ::System::Object
{
public:
	static ::Class_1_49FD0F6EAEE79D37___c** StaticGet___9()
	{
		return (::Class_1_49FD0F6EAEE79D37___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49FD0F6EAEE79D37___c_TypeDefinitionIndex)->GetStaticField(0x7870);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_532*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_532*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49FD0F6EAEE79D37___c_TypeDefinitionIndex)->GetStaticField(0x7878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_532* a1, ::Class_2_208CC9941471731A_532* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_532*, ::Class_2_208CC9941471731A_532*))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
