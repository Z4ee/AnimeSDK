#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_810;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_8DA3BB288E2EB92E___C_METHOD_1_CF35346D555254A8_OFFSET UNITYSDK_OFFSET(0xF7ACA90)
#define CLASS_3_8DA3BB288E2EB92E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7ACA40)
#define CLASS_3_8DA3BB288E2EB92E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7ACA80)

inline static constexpr unsigned int Class_3_8DA3BB288E2EB92E___c_TypeDefinitionIndex = 56392;

class Class_3_8DA3BB288E2EB92E___c : public ::System::Object
{
public:
	static ::Class_3_8DA3BB288E2EB92E___c** StaticGet___9()
	{
		return (::Class_3_8DA3BB288E2EB92E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8DA3BB288E2EB92E___c_TypeDefinitionIndex)->GetStaticField(0x426E0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_810*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_810*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8DA3BB288E2EB92E___c_TypeDefinitionIndex)->GetStaticField(0x426E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8DA3BB288E2EB92E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DA3BB288E2EB92E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF35346D555254A8(::Class_2_208CC9941471731A_810* a1, ::Class_2_208CC9941471731A_810* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_810*, ::Class_2_208CC9941471731A_810*))((::PBYTE)hIl2Cpp + CLASS_3_8DA3BB288E2EB92E___C_METHOD_1_CF35346D555254A8_OFFSET))(this, a1, a2);
	}
};
