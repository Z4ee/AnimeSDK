#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ECE22A074BA4D58D;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_FF872820A2FF123B_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18829010)
#define CLASS_1_FF872820A2FF123B_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18829050)
#define CLASS_1_FF872820A2FF123B_2___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x18829060)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_2___c_TypeDefinitionIndex = 79744;

class Class_1_FF872820A2FF123B_2___c : public ::System::Object
{
public:
	static ::Class_1_FF872820A2FF123B_2___c** StaticGet___9()
	{
		return (::Class_1_FF872820A2FF123B_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF872820A2FF123B_2___c_TypeDefinitionIndex)->GetStaticField(0x5AE60);
	}
	static ::System::Comparison_1<::Class_1_ECE22A074BA4D58D*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_ECE22A074BA4D58D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF872820A2FF123B_2___c_TypeDefinitionIndex)->GetStaticField(0x5AE68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::Class_1_ECE22A074BA4D58D* a1, ::Class_1_ECE22A074BA4D58D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_ECE22A074BA4D58D*, ::Class_1_ECE22A074BA4D58D*))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_2___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
	}
};
