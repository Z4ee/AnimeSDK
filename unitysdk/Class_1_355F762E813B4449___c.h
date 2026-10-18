#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9ADD1D872350330F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_355F762E813B4449___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9F8DB0)
#define CLASS_1_355F762E813B4449___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F8DF0)
#define CLASS_1_355F762E813B4449___C___DOSKILLACTION_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C9F8E00)

inline static constexpr unsigned int Class_1_355F762E813B4449___c_TypeDefinitionIndex = 42306;

class Class_1_355F762E813B4449___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_9ADD1D872350330F*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::Class_1_9ADD1D872350330F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355F762E813B4449___c_TypeDefinitionIndex)->GetStaticField(0x5DE60);
	}
	static ::Class_1_355F762E813B4449___c** StaticGet___9()
	{
		return (::Class_1_355F762E813B4449___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355F762E813B4449___c_TypeDefinitionIndex)->GetStaticField(0x5DE68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __DoSkillAction_b__6_0(::Class_1_9ADD1D872350330F* a1, ::Class_1_9ADD1D872350330F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9ADD1D872350330F*, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_355F762E813B4449___C___DOSKILLACTION_B__6_0_OFFSET))(this, a1, a2);
	}
};
