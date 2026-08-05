#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_587;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_A5137316D6CC970E___C_METHOD_1_581E50CB7E3F9937_OFFSET UNITYSDK_OFFSET(0x11573D40)
#define CLASS_3_A5137316D6CC970E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11573CF0)
#define CLASS_3_A5137316D6CC970E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11573D30)

inline static constexpr unsigned int Class_3_A5137316D6CC970E___c_TypeDefinitionIndex = 56915;

class Class_3_A5137316D6CC970E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_587*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A5137316D6CC970E___c_TypeDefinitionIndex)->GetStaticField(0x35B20);
	}
	static ::Class_3_A5137316D6CC970E___c** StaticGet___9()
	{
		return (::Class_3_A5137316D6CC970E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A5137316D6CC970E___c_TypeDefinitionIndex)->GetStaticField(0x35B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A5137316D6CC970E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5137316D6CC970E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_581E50CB7E3F9937(::Class_2_208CC9941471731A_587* a1, ::Class_2_208CC9941471731A_587* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_587*, ::Class_2_208CC9941471731A_587*))((::PBYTE)hIl2Cpp + CLASS_3_A5137316D6CC970E___C_METHOD_1_581E50CB7E3F9937_OFFSET))(this, a1, a2);
	}
};
